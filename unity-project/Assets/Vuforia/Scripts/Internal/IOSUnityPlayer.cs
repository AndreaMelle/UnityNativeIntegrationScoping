/*==============================================================================
Copyright (c) 2013-2014 Qualcomm Connected Experiences, Inc.
All Rights Reserved.
Confidential and Proprietary - Qualcomm Connected Experiences, Inc.
==============================================================================*/

using System;
using System.Runtime.InteropServices;
using UnityEngine;

namespace Vuforia
{
    /// <summary>
    /// This class encapsulates functionality to detect various surface events
    /// (size, orientation changed) and delegate this to native.
    /// These are used by Unity Extension code and should usually not be called by app code.
    /// </summary>
    class IOSUnityPlayer : IUnityPlayer
    {
        private ScreenOrientation mScreenOrientation = ScreenOrientation.Unknown;

        /// <summary>
        /// Loads native plugin libraries on platforms where this is explicitly required.
        /// </summary>
        public void LoadNativeLibraries()
        {
        }

        /// <summary>
        /// Initialized platform specific settings
        /// </summary>
        public void InitializePlatform()
        {
            setPlatFormNative();
        }

        /// <summary>
        /// Initializes Vuforia; called from Start
        /// </summary>
        public VuforiaUnity.InitError Start(string licenseKey)
        {
            int errorCode = initQCARiOS((int)Screen.orientation, licenseKey);
            if (errorCode >= 0)
                InitializeSurface();
            return (VuforiaUnity.InitError)errorCode;
        }

        /// <summary>
        /// Called from Update, checks for various life cycle events that need to be forwarded
        /// to Vuforia, e.g. orientation changes
        /// </summary>
        public void Update()
        {
            if (SurfaceUtilities.HasSurfaceBeenRecreated())
            {
                InitializeSurface();
            }
            else
            {
                // if Unity reports that the orientation has changed, set it correctly in native
                if (Screen.orientation != mScreenOrientation)
                    SetUnityScreenOrientation();
            }

        }

        public void Dispose()
        {
        }

        /// <summary>
        /// Pauses Vuforia
        /// </summary>
        public void OnPause()
        {
            VuforiaUnity.OnPause();
        }

        /// <summary>
        /// Resumes Vuforia
        /// </summary>
        public void OnResume()
        {
            VuforiaUnity.OnResume();
        }

        /// <summary>
        /// Deinitializes Vuforia
        /// </summary>
        public void OnDestroy()
        {
            VuforiaUnity.Deinit();
        }


        private void InitializeSurface()
        {
            SurfaceUtilities.OnSurfaceCreated();

            SetUnityScreenOrientation();
        }

        private void SetUnityScreenOrientation()
        {
			ScreenOrientation _actual = ScreenOrientation.Portrait;
			mScreenOrientation = Screen.orientation;

#if !UNITY_EDITOR && UNITY_IOS && IS_NATIVEINTEGRATION
			_actual = uninterop.UnityNativeInterop.Instance.currentOrientation;
			
			if(_actual == ScreenOrientation.Landscape
			   || _actual == ScreenOrientation.LandscapeLeft
			   || _actual == ScreenOrientation.LandscapeRight)
			{
				_actual = ScreenOrientation.LandscapeLeft;
			}
			else
			{
				_actual = ScreenOrientation.Portrait;
			}
#else
			_actual = mScreenOrientation;
#endif
			SurfaceUtilities.SetSurfaceOrientation(_actual);
			setSurfaceOrientationiOS((int) _actual);
        }

        [DllImport("__Internal")]
        private static extern void setPlatFormNative();

        [DllImport("__Internal")]
        private static extern int initQCARiOS(int screenOrientation, string licenseKey);

        [DllImport("__Internal")]
        private static extern void setSurfaceOrientationiOS(int screenOrientation);
    }
}
