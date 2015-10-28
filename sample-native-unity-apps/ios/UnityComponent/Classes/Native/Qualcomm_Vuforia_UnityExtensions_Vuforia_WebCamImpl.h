#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera[]
struct CameraU5BU5D_t158;
// System.Int32[]
struct Int32U5BU5D_t162;
// Vuforia.WebCamTexAdaptor
struct WebCamTexAdaptor_t851;
// Vuforia.TextureRenderer
struct TextureRenderer_t945;
// UnityEngine.Texture2D
struct Texture2D_t273;

#include "mscorlib_System_Object.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi.h"

// Vuforia.WebCamImpl
struct  WebCamImpl_t830  : public Object_t
{
	// UnityEngine.Camera[] Vuforia.WebCamImpl::mARCameras
	CameraU5BU5D_t158* ___mARCameras_0;
	// System.Int32[] Vuforia.WebCamImpl::mOriginalCameraCullMask
	Int32U5BU5D_t162* ___mOriginalCameraCullMask_1;
	// Vuforia.WebCamTexAdaptor Vuforia.WebCamImpl::mWebCamTexture
	WebCamTexAdaptor_t851 * ___mWebCamTexture_2;
	// Vuforia.CameraDevice/VideoModeData Vuforia.WebCamImpl::mVideoModeData
	VideoModeData_t788  ___mVideoModeData_3;
	// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.WebCamImpl::mVideoTextureInfo
	VideoTextureInfo_t771  ___mVideoTextureInfo_4;
	// Vuforia.TextureRenderer Vuforia.WebCamImpl::mTextureRenderer
	TextureRenderer_t945 * ___mTextureRenderer_5;
	// UnityEngine.Texture2D Vuforia.WebCamImpl::mBufferReadTexture
	Texture2D_t273 * ___mBufferReadTexture_6;
	// UnityEngine.Rect Vuforia.WebCamImpl::mReadPixelsRect
	Rect_t137  ___mReadPixelsRect_7;
	// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamImpl::mWebCamProfile
	ProfileData_t952  ___mWebCamProfile_8;
	// System.Boolean Vuforia.WebCamImpl::mFlipHorizontally
	bool ___mFlipHorizontally_9;
	// System.Boolean Vuforia.WebCamImpl::mIsDirty
	bool ___mIsDirty_10;
	// System.Int32 Vuforia.WebCamImpl::mLastFrameIdx
	int32_t ___mLastFrameIdx_11;
	// System.Int32 Vuforia.WebCamImpl::mRenderTextureLayer
	int32_t ___mRenderTextureLayer_12;
	// System.Boolean Vuforia.WebCamImpl::mWebcamPlaying
	bool ___mWebcamPlaying_13;
	// System.Boolean Vuforia.WebCamImpl::<IsTextureSizeAvailable>k__BackingField
	bool ___U3CIsTextureSizeAvailableU3Ek__BackingField_14;
};
