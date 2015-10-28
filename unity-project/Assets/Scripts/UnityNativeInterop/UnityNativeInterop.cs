using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;
using Vuforia;

#if IS_STANDALONE
#warning Compiling for Standalone
#elif IS_NATIVEINTEGRATION
#warning Compiling for Native Integration
#endif

namespace uninterop
{
    public class UnityNativeInterop : Singleton<UnityNativeInterop>
    {
        protected UnityNativeInterop() { }

        public delegate void OnSceneUnloadRequestEvent();
        public static event OnSceneUnloadRequestEvent OnSceneUnloadRequest;

        private static string dummySceneName = "dummy";

		private ScreenOrientation _currentOrientation = ScreenOrientation.Portrait;
		public ScreenOrientation currentOrientation
		{
			get { return _currentOrientation; }
		}

        void Awake()
        {
            gameObject.name = "UnityNativeInterop";
        }

		public static void ChooseOrientationForScene(ScreenOrientation orientation)
		{
			ScreenOrientation _actualOrientation;

			// There's a better way to write this cases, but the verbosity here documents it ;)
			if(orientation == ScreenOrientation.LandscapeLeft
			   || orientation == ScreenOrientation.Landscape)
			{
				_actualOrientation = ScreenOrientation.LandscapeRight;
			}
			else if(orientation == ScreenOrientation.PortraitUpsideDown)
			{
				_actualOrientation = ScreenOrientation.Portrait;
			}
			else
			{
				_actualOrientation = orientation;
			}

			UnityNativeInterop.Instance._currentOrientation = _actualOrientation;

#if !UNITY_EDITOR && UNITY_ANDROID && IS_NATIVEINTEGRATION
			Screen.orientation = _actualOrientation;
#elif !UNITY_EDITOR && UNITY_IOS && IS_NATIVEINTEGRATION
			onUnityRequestsOrientation((int)_actualOrientation);
#endif
		}

        public static void NotifySceneLoaded()
        {
            string scenename = Application.loadedLevelName;

            // here we notify the native level that the requested scene has been loaded
            if(scenename == dummySceneName)
            {
                // actually notify we have unloaded! ;)
#if !UNITY_EDITOR && UNITY_ANDROID && IS_NATIVEINTEGRATION
                UnityNativeInterop.Instance.CallActivityMethod("onUnitySceneUnloaded", "");
#elif !UNITY_EDITOR && UNITY_IOS && IS_NATIVEINTEGRATION
				UnityNativeInterop.Instance.CallUnitySceneUnloaded("");
#endif
            }
            else
            {
                // notify a load
#if !UNITY_EDITOR && UNITY_ANDROID && IS_NATIVEINTEGRATION
                UnityNativeInterop.Instance.CallActivityMethod("onUnitySceneLoaded", scenename);
#elif !UNITY_EDITOR && UNITY_IOS && IS_NATIVEINTEGRATION
				UnityNativeInterop.Instance.CallUnitySceneLoaded(scenename);
#endif
            }
        }

        public static void NotifySceneWantsToEnd()
        {
#if !UNITY_EDITOR && UNITY_ANDROID && IS_NATIVEINTEGRATION
            string scenename = Application.loadedLevelName;
            UnityNativeInterop.Instance.CallActivityMethod("onUnityWantsToUnloadScene", scenename);
#elif !UNITY_EDITOR && UNITY_IOS && IS_NATIVEINTEGRATION
			string scenename = Application.loadedLevelName;
			UnityNativeInterop.Instance.CallUnityWantsToUnloadScene(scenename);
#endif
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

        public void RequestSceneFromNative(string msg)
        {
            Debug.Log("Native requested scene " + msg);
            UnityNativeInterop.onNativeRequestedScene(msg);
        }

        public void RequestUnloadFromNative(string msg)
        {
            Debug.Log("Native requested scene unload");
            UnityNativeInterop.onNativeRequestedUnload();
        }

		void OnApplicationPause(bool paused)
		{
			//TODO: how do we pause / resume vuforia 5?
		}

#if !UNITY_EDITOR && UNITY_IOS && IS_NATIVEINTEGRATION 

		[DllImport ("__Internal")]
		private static extern void onUnityInit(string unityGameObjectName);

		[DllImport ("__Internal")]
		private static extern void onUnitySceneUnloaded(string scenename);

		[DllImport ("__Internal")]
		private static extern void onUnitySceneLoaded(string scenename);

		[DllImport ("__Internal")]
		private static extern void onUnityWantsToUnloadScene(string scenename);

		[DllImport ("__Internal")]
		private static extern void onUnityRequestsOrientation(int orientation);

		//private bool mUnityInitCalled = false;

		private void CallUnityInit()
		{
			onUnityInit(gameObject.name);
			//mUnityInitCalled = true;
		}

		private void CallUnitySceneUnloaded(string scenename)
		{
			CallUnityInit();
			onUnitySceneUnloaded(scenename);
		}

		private void CallUnitySceneLoaded(string scenename)
		{
			CallUnityInit();
			onUnitySceneLoaded(scenename);
		}

		private void CallUnityWantsToUnloadScene(string scenename)
		{
			CallUnityInit();
			onUnityWantsToUnloadScene(scenename);
		}

#endif

        /// Android native access
        /// 
#if !UNITY_EDITOR && UNITY_ANDROID && IS_NATIVEINTEGRATION
#warning If you change the bundle identifier you MUST change this line 
        private const string mPlayerActivityClass = "com.happyfinish.androidmasterproject.UnityPlayerActivity";
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
