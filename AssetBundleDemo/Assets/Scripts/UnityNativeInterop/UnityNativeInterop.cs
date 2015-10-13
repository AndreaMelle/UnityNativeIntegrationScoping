using UnityEngine;
using System.Collections;

namespace uninterop
{
    public class UnityNativeInterop : Singleton<UnityNativeInterop>
    {
        protected UnityNativeInterop() { }

        public delegate void OnSceneUnloadRequestEvent();
        public static event OnSceneUnloadRequestEvent OnSceneUnloadRequest;

        private static string dummySceneName = "dummy";

        void Awake()
        {
            gameObject.name = "UnityNativeInterop";
        }

        public static void NotifySceneLoaded()
        {
            string scenename = Application.loadedLevelName;

            // here we notify the native level that the requested scene has been loaded
            if(scenename == dummySceneName)
            {
                // actually notify we have unloaded! ;)
#if !UNITY_EDITOR && UNITY_ANDROID
                UnityNativeInterop.Instance.CallActivityMethod("onUnitySceneUnloaded", "");
#endif
            }
            else
            {
                // notify a load
#if !UNITY_EDITOR && UNITY_ANDROID
                UnityNativeInterop.Instance.CallActivityMethod("onUnitySceneLoaded", scenename);
#endif
            }
        }

        public static void NotifySceneWantsToEnd()
        {
            //string scenename = Application.loadedLevelName;

        }

        internal static void onNativeRequestedScene(string scenename)
        {
            Resources.UnloadUnusedAssets();
            Application.LoadLevel(scenename);
            Resources.UnloadUnusedAssets();
        }

        internal static void onNativeRequestedUnload()
        {
            //give a change to current scene to do something
            if(OnSceneUnloadRequest != null)
            {
                OnSceneUnloadRequest();
            }

            Resources.UnloadUnusedAssets();
            Application.LoadLevel(dummySceneName);
            Resources.UnloadUnusedAssets();
        }

        // Messages native side can call (iOS and Android common)

        public void RequestSceneFromNative(string scenename)
        {
            Debug.Log("Native requested scene " + scenename);
            UnityNativeInterop.onNativeRequestedScene(scenename);
        }

        public void RequestUnloadFromNative()
        {
            Debug.Log("Native requested scene unload");
            UnityNativeInterop.onNativeRequestedUnload();
        }

        /// Android native access
        /// 
#if !UNITY_EDITOR && UNITY_ANDROID

        private const string mPlayerActivityClass = "com.happyfinish.abtest.UnityPlayerActivity";
        private AndroidJavaObject mPlayerActivity = null;

        private void ConnectToActivity()
        {
            if(mPlayerActivity == null)
            {
                try
                {
                    using (AndroidJavaClass player = new AndroidJavaClass(mPlayerActivityClass))
                    {
                        mPlayerActivity = player.CallStatic<AndroidJavaObject>("getActivity");
                    }
                }
                catch (AndroidJavaException e)
                {
                    Debug.LogError("Cannot access UnityPlayerActivity. " + e);
                }

                CallActivityMethod("onUnityInit", gameObject.name);
            }
        }

        private bool CallActivityMethod(string name, params object[] args)
        {
            try
            {
                ConnectToActivity();
                mPlayerActivity.Call(name, args);
                return true;
            }
            catch(AndroidJavaException e)
            {
                Debug.LogError("Exception calling activity method " + name + ": " + e);
                return false;
            }
        }

        private bool CallActivityMethod<T>(ref T result, string name, params object[] args)
        {
            try
            {
                ConnectToActivity();
                result = mPlayerActivity.Call<T>(name, args);
                return true;
            }
            catch (AndroidJavaException e)
            {
                Debug.LogError("Exception calling activity method " + name + ": " + e);
                return false;
            }
        }
#endif

    }
}
