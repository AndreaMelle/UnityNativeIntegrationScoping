//#define USE_LOCAL_ASSETS

using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using System.Net;
using System.Threading;

namespace abl
{
    public class ABManager : Singleton<ABManager>
    {
        public abstract class ABRequest { }

        class ABRequest<T> : ABRequest where T : UnityEngine.Object
        {
            public ABRequest (){}
            public ABRequest (string bundlenameIn, string assetnameIn, Action<bool, T>  callbackIn)
            {
                bundlename = bundlenameIn;
                assetname = assetnameIn;
                callback = callbackIn;
            }

            public string bundlename;
            public string assetname;
            public Action<bool, T> callback;
        }

        

#if (UNITY_EDITOR && UNITY_EDITOR_WIN) || UNITY_STANDALONE_WIN

        private static string mWinOutputDir = "win";
        private static string m32OutputDir = "x86";
        private static string m64OutputDir = "x64";

#elif (UNITY_EDITOR && UNITY_EDITOR_OSX) || UNITY_STANDALONE_OSX

        private static string mMacOutputDir = "mac";
        private static string m32OutputDir = "x86";
        private static string m64OutputDir = "x64";
        private static string mUniversalOutputDir = "universal";

#elif UNITY_IOS
        private static string miOSOutputDir = "ios";
#elif UNITY_ANDROID
        private static string mAndroidOutputDir = "android";
#endif
        //s3 bucket, for instace
        private static string mUrlBase = "https://s3-eu-west-1.amazonaws.com/assetbundlesdemo/";

#if USE_LOCAL_ASSETS
        private static string mLocalAssetWorkspace = "Assets/AssetBundlesWorkspace";
#endif

        private static string mManifestSuffix = ".manifest";

        private static readonly object _mainThreadCallbackLock = new object();
        private Queue<MainThreadAction> _mainThreadCallbacks = new Queue<MainThreadAction>();

        private Queue<ABRequest> mRequestQueue = new Queue<ABRequest>();
        private bool mIsExecutingRequest = false;
        private bool mHasStarted = false;

        private static Thread _mainThread;

        public static bool IsMainThread()
        {
            if (null == _mainThread)
                throw new Exception("Main thread has not been set, is the ContentManagerGameObject on the scene?");
            return Thread.CurrentThread.Equals(_mainThread);
        }

        private Dictionary<string, ABReference> mBundleReferences = new Dictionary<string, ABReference>();

        protected ABManager()
        {
            ServicePointManager.ServerCertificateValidationCallback = (p1, p2, p3, p4) => true;
        }

        void Awake()
        {
            gameObject.hideFlags = HideFlags.HideInHierarchy;
            // Arbitrarily limit the cache at 1 GB
            Caching.maximumAvailableDiskSpace = Math.Min(Caching.maximumAvailableDiskSpace, 1073741824);

            if (_mainThread == null || !_mainThread.Equals(Thread.CurrentThread))
                _mainThread = Thread.CurrentThread;

            mHasStarted = true;
        }

        void OnEnable()
        {
            mRequestQueue.Clear();
            mIsExecutingRequest = false;
            _mainThreadCallbacks.Clear();

            mHasStarted = true;
        }

        void OnDisable()
        {
            mRequestQueue.Clear();
            mIsExecutingRequest = false;
            mHasStarted = false;
            _mainThreadCallbacks.Clear();
        }

        void Update()
        {
            ProcessRequests();
        }

        public void GetAllFromBundle<T>(string bundlename, HashSet<string> assetnames, Action<bool, List<T> > callback) where T : UnityEngine.Object
        {
            if(!mHasStarted)
            {
                Debug.LogError("Use ABManager from Start method onwards!!");
            }

            downloadAssetBundle(bundlename, new Action<bool, AssetBundle>((bool success, AssetBundle b) =>
            {
                if (success && b != null)
                {
                    StartCoroutine(getAllAssetsFromBundle<T>(b, assetnames, new Action<bool, List<T>>((bool success1, List<T> result) =>
                    {

                        if(result != null && result.Count > 0)
                            Debug.Log("Found " + result.Count + " assets in AssetBundle " + bundlename);
                        else
                            Debug.LogError("Unable to retitreve assets from AssetBundle " + bundlename);

                        callback((success1 && result != null && result.Count > 0), result);

                        Unload(bundlename);

                    })));
                }
                else
                {
                    Debug.LogError("Unable to retitreve AssetBundle " + bundlename);
                    callback(false, null);
                }
            }));
        }

        public void GetFromBundle<T>(string bundlename, string assetname, Action<bool, T> callback) where T : UnityEngine.Object
        {
            if (!mHasStarted)
            {
                Debug.LogError("Use ABManager from Start method onwards!!");
            }

            mRequestQueue.Enqueue(new ABRequest<T>(bundlename, assetname, callback));

            if(!mIsExecutingRequest)
            {
                mIsExecutingRequest = true;
                dequeueGetFromBundle<T>(mRequestQueue.Dequeue() as ABRequest<T>);
            }
        }

        private void dequeueGetFromBundle<T>(ABRequest<T> req) where T : UnityEngine.Object
        {
            string assetname = req.assetname;
            Action< bool, T > callback = req.callback;

#if UNITY_EDITOR && USE_LOCAL_ASSETS
            T asset = AssetDatabase.LoadAssetAtPath(Path.Combine(mLocalAssetWorkspace, assetname) + ".prefab", typeof(T)) as T;
            callback((asset != null), asset);

            mIsExecutingRequest = false;

            if (mRequestQueue.Count > 0)
            {
                mIsExecutingRequest = true;
                dequeueGetFromBundle<T>(mRequestQueue.Dequeue() as ABRequest<T>);
            }
#else
            string bundlename = req.bundlename;

            downloadAssetBundle(bundlename, new Action<bool, AssetBundle>((bool success, AssetBundle b) =>
            {
                if (success && b != null)
                {
                    //TODO: a policy to load all, because they are likely to be requested?

                    StartCoroutine(getAssetFromBundle<T>(b, assetname, new Action<bool, T>((bool success1, T asset) => {

                        if (asset != null)
                            Debug.Log("Found asset " + assetname + " in AssetBundle " + bundlename);
                        else
                            Debug.LogError("Unable to retitreve asset " + assetname + " from AssetBundle " + bundlename);

                        callback((success1 && asset != null), asset);

                        mIsExecutingRequest = false;

                        if (mRequestQueue.Count > 0)
                        {
                            mIsExecutingRequest = true;
                            dequeueGetFromBundle<T>(mRequestQueue.Dequeue() as ABRequest<T>);
                        }
                        else
                        {
                            //TODO: Unload every time?
                            Unload(bundlename);
                        }
                    })));
                }
                else
                {
                    Debug.LogError("Unable to retitreve AssetBundle " + bundlename);
                    callback(false, null);
                }
            }));
#endif
        }

        private IEnumerator getAssetFromBundle<T>(AssetBundle b, string assetname, Action<bool, T> callback) where T : UnityEngine.Object
        {
            AssetBundleRequest request = b.LoadAssetAsync<T>(assetname);
            yield return request;
            T obj = request.asset as T;
            if (obj != null)
                callback(true, obj);
            else
                callback(false, null);
        }

        private IEnumerator getAllAssetsFromBundle<T>(AssetBundle b, HashSet<string> assetnames, Action<bool, List<T>> callback) where T : UnityEngine.Object
        {
            AssetBundleRequest request = b.LoadAllAssetsAsync<T>();
            yield return request;

            List<T> result = new List<T>();

            foreach(T obj in request.allAssets)
            {
                if(obj != null && assetnames.Contains(obj.name))
                {
                    result.Add(obj);
                }
            }

            callback(true, result);

        }

        private AssetBundle getAssetBundle(string bundlename)
        {
            ABReference abRef;
            if (mBundleReferences.TryGetValue(bundlename, out abRef))
                return abRef.bundle;
            else
                return null;
        }

        private void downloadAssetBundle(string bundlename, Action<bool, AssetBundle> callback)
        {
            if (mBundleReferences.ContainsKey(bundlename))
            {
                // In theory we are never getting in this situation
                if (mBundleReferences[bundlename].bundle != null)
                    callback(true, mBundleReferences[bundlename].bundle);
                else
                    mBundleReferences.Remove(bundlename);
            }
            else
            {
                string url = fullUrlForPlatform(bundlename);

                //Caching and content verification implementation
                //1. retrieve last etag if available

                //2. get manifest file from S3 but use the etag if available

                //3. if the manifest has changed, save the new manifest file, etag and increase the version number

                //4. LoadFromCacheOrDownload with up-to-date version number and CRC from the manifest
                //TODO: what happens if no internet connection or CRC fail? will Unity fall back to previous verion?

                ABMetadata abMeta;
                bool metadataAvailable = ABMetadata.TryReadMetadataForCachedAssetBundle(bundlename, out abMeta);

                HttpWebRequest client = (HttpWebRequest)WebRequest.Create(url + mManifestSuffix);
                client.Method = "GET";
                if (metadataAvailable)
                    client.Headers.Add("If-None-Match", abMeta.etag);

                //IAsyncResult handle =
                client.BeginGetResponse(new AsyncCallback((IAsyncResult h) =>
                {
                    try
                    {
                        client.EndGetResponse(h);

                        //200 OK - we have a new manifest file -> a new version of assetbundle
                        using (HttpWebResponse response = (HttpWebResponse)client.GetResponse())
                        {
                            if (response.StatusCode == HttpStatusCode.OK)
                            {
                                string newEtag = response.GetResponseHeader("ETag");
                                string newCrcString = null;

                                using (var reader = new StreamReader(response.GetResponseStream(), System.Text.Encoding.UTF8))
                                {
                                    //TODO: parse the crc
                                    string line;
                                    while ((line = reader.ReadLine()) != null)
                                    {
                                        if (line.Contains("CRC"))
                                        {
                                            newCrcString = line.Replace("CRC: ", "");
                                            break;
                                        }
                                    }
                                }

                                // if this fails, we just do not update the metadata and use the previous one
                                uint newCrc;
                                if (newEtag != null && uint.TryParse(newCrcString, out newCrc))
                                {
                                    if (!metadataAvailable)
                                    {
                                        abMeta = new ABMetadata(newEtag, newCrc, bundlename, 1);
                                        metadataAvailable = true;
                                    }
                                    else
                                    {
                                        abMeta.etag = newEtag;
                                        abMeta.version += 1;
                                        abMeta.crc = newCrc;
                                        abMeta.bundlename = bundlename;
                                    }

                                    ABMetadata.WriteMetadataForCachedAssetBundle(abMeta);
                                }
                            }
                        }
                    }
                    catch (WebException ex)
                    {
                        Debug.Log(ex.Status);
                        if (ex.Response != null)
                        {
                            if (ex.Response.ContentLength != 0)
                            {
                                using (var stream = ex.Response.GetResponseStream())
                                {
                                    using (var reader = new StreamReader(stream))
                                    {
                                        Debug.Log(reader.ReadToEnd());
                                    }
                                }
                            }
                        }

                        //TODO: We failed silently?
                        // Manifest not retrieved, just use old one if available
                        // If there was no manifest... should we proceed with download anyway? NO
                    }

                    // At this point we should have a new or updated metadata file
                    if (metadataAvailable)
                    {
                        // using... but on the main thread :(

                        MainThreadAction mtAction = new MainThreadAction(this, null, new Action<object, object>((object sender, object args) => {

                            StartCoroutine(downloadAssetBundleCoroutine(abMeta, url, callback));

                        }));

                        this.ExecuteOnMainThread(mtAction);

                    }
                    else
                    {
                        Debug.LogError("No metadata found. Won't download");
                    }
                }), null);


            }
        }

        private IEnumerator downloadAssetBundleCoroutine(ABMetadata abMeta, string url, Action<bool, AssetBundle> callback)
        {
            using (WWW www = WWW.LoadFromCacheOrDownload(url, abMeta.version, abMeta.crc))
            {
                yield return www;
                if (www.error != null)
                {
                    //throw new Exception("WWW download:" + www.error);
                    Debug.LogError("WWW download:" + www.error + " " + url);
                    callback(false, null);
                }
                else
                {
                    ABReference abRef = new ABReference(abMeta.bundlename, url, abMeta.version);
                    abRef.bundle = www.assetBundle;
                    mBundleReferences.Add(abMeta.bundlename, abRef);

                    callback(true, mBundleReferences[abMeta.bundlename].bundle);
                }

                www.Dispose();
            }
        }

        private void Unload(string bundlename)
        {
            ABReference abRef;
            if (mBundleReferences.TryGetValue(bundlename, out abRef))
            {
                abRef.bundle.Unload(false);
                abRef.bundle = null;
                mBundleReferences.Remove(bundlename);
            }
        }

        // This is dagerous, as it also removes objectd from memory
        public void UnloadAllAndClear()
        {
            foreach(var v in mBundleReferences)
            {
                if(v.Value != null)
                {
                    v.Value.bundle.Unload(true);
                    v.Value.bundle = null;
                }
            }

            mBundleReferences.Clear();
        }



        private string fullUrlForPlatform(string bundlename)
        {
#if (UNITY_EDITOR && UNITY_EDITOR_WIN) || UNITY_STANDALONE_WIN

            if (isArch32())
                return mUrlBase + mWinOutputDir + "/" + m32OutputDir + "/" + bundlename;
            else if (isArch64())
                return mUrlBase + mWinOutputDir + "/" + m64OutputDir + "/" + bundlename;
            else
                throw new Exception("Unknown architecture.");

#elif (UNITY_EDITOR && UNITY_EDITOR_OSX) || UNITY_STANDALONE_OSX

        if (isArch32())
            return mUrlBase + mMacOutputDir + "/" + m32OutputDir + "/" + bundlename;
        else if (isArch64())
            return mUrlBase + mMacOutputDir + "/" + m64OutputDir + "/" + bundlename;
        else
            return mUrlBase + mMacOutputDir + "/" + mUniversalOutputDir + "/" + bundlename;

#elif UNITY_IOS
        return mUrlBase + miOSOutputDir + "/" + bundlename;
#elif UNITY_ANDROID
        return mUrlBase + mAndroidOutputDir + "/" + bundlename;
#else
#error Unsupported platform
#endif
        }

        private static bool isArch32()
        {
            return (IntPtr.Size == 4);
        }

        private static bool isArch64()
        {
            return (IntPtr.Size == 8);
        }

        void ProcessRequests()
        {
            // TODO : The current implementation dequeues a single request and callback per cycle
            // to reduce the CPU utilization of the main thread by the UnityMainThreadDispatcher.
            // Need to do perf testing to to verify if this is the best approach.

            MainThreadAction mainThreadAction;
            while ((mainThreadAction = DequeueMainThreadOperation()) != null)
            {
                try
                {
                    mainThreadAction.callback(mainThreadAction.sender, mainThreadAction.args);
                }
                catch (Exception exception)
                {
                    Debug.LogError("An unhandled exception was thrown from the callback method - " + exception.ToString());
                }
            }
        }

        void ExecuteOnMainThread(MainThreadAction action)
        {
            lock (_mainThreadCallbackLock)
            {
                _mainThreadCallbacks.Enqueue(action);
            }
        }

        MainThreadAction DequeueMainThreadOperation()
        {
            MainThreadAction action = null;
            lock (_mainThreadCallbackLock)
            {
                if (_mainThreadCallbacks.Count > 0)
                {
                    action = _mainThreadCallbacks.Dequeue();
                }
            }
            return action;
        }


    }
}

