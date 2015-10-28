#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct Dictionary_2_t828;
// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT>
struct List_1_t829;
// Vuforia.WebCamImpl
struct WebCamImpl_t830;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera_0.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM.h"

// Vuforia.CameraDeviceImpl
struct  CameraDeviceImpl_t827  : public CameraDevice_t789
{
	// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image> Vuforia.CameraDeviceImpl::mCameraImages
	Dictionary_2_t828 * ___mCameraImages_1;
	// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT> Vuforia.CameraDeviceImpl::mForcedCameraFormats
	List_1_t829 * ___mForcedCameraFormats_2;
	// System.Boolean Vuforia.CameraDeviceImpl::mCameraReady
	bool ___mCameraReady_4;
	// System.Boolean Vuforia.CameraDeviceImpl::mIsDirty
	bool ___mIsDirty_5;
	// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDeviceImpl::mCameraDirection
	int32_t ___mCameraDirection_6;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.CameraDeviceImpl::mCameraDeviceMode
	int32_t ___mCameraDeviceMode_7;
	// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDeviceImpl::mVideoModeData
	VideoModeData_t788  ___mVideoModeData_8;
	// System.Boolean Vuforia.CameraDeviceImpl::mVideoModeDataNeedsUpdate
	bool ___mVideoModeDataNeedsUpdate_9;
	// System.Boolean Vuforia.CameraDeviceImpl::mHasCameraDeviceModeBeenSet
	bool ___mHasCameraDeviceModeBeenSet_10;
};
struct CameraDeviceImpl_t827_StaticFields{
	// Vuforia.WebCamImpl Vuforia.CameraDeviceImpl::mWebCam
	WebCamImpl_t830 * ___mWebCam_3;
};
