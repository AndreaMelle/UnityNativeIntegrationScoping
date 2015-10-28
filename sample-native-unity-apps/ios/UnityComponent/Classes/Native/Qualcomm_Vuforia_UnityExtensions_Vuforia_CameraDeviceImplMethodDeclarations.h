#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Vuforia.CameraDeviceImpl
struct CameraDeviceImpl_t827;
// Vuforia.WebCamImpl
struct WebCamImpl_t830;
// Vuforia.Image
struct Image_t834;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct Dictionary_2_t828;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera_0.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_FocusM.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// Vuforia.WebCamImpl Vuforia.CameraDeviceImpl::get_WebCam()
extern "C" WebCamImpl_t830 * CameraDeviceImpl_get_WebCam_m4190 (CameraDeviceImpl_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::get_CameraReady()
extern "C" bool CameraDeviceImpl_get_CameraReady_m4191 (CameraDeviceImpl_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Init(Vuforia.CameraDevice/CameraDirection)
extern "C" bool CameraDeviceImpl_Init_m4192 (CameraDeviceImpl_t827 * __this, int32_t ___cameraDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Deinit()
extern "C" bool CameraDeviceImpl_Deinit_m4193 (CameraDeviceImpl_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Start()
extern "C" bool CameraDeviceImpl_Start_m4194 (CameraDeviceImpl_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Stop()
extern "C" bool CameraDeviceImpl_Stop_m4195 (CameraDeviceImpl_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDeviceImpl::GetVideoMode()
extern "C" VideoModeData_t788  CameraDeviceImpl_GetVideoMode_m4196 (CameraDeviceImpl_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDeviceImpl::GetVideoMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C" VideoModeData_t788  CameraDeviceImpl_GetVideoMode_m4197 (CameraDeviceImpl_t827 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SelectVideoMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C" bool CameraDeviceImpl_SelectVideoMode_m4198 (CameraDeviceImpl_t827 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::GetSelectedVideoMode(Vuforia.CameraDevice/CameraDeviceMode&)
extern "C" bool CameraDeviceImpl_GetSelectedVideoMode_m4199 (CameraDeviceImpl_t827 * __this, int32_t* ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetFlashTorchMode(System.Boolean)
extern "C" bool CameraDeviceImpl_SetFlashTorchMode_m4200 (CameraDeviceImpl_t827 * __this, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetFocusMode(Vuforia.CameraDevice/FocusMode)
extern "C" bool CameraDeviceImpl_SetFocusMode_m4201 (CameraDeviceImpl_t827 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetFrameFormat(Vuforia.Image/PIXEL_FORMAT,System.Boolean)
extern "C" bool CameraDeviceImpl_SetFrameFormat_m4202 (CameraDeviceImpl_t827 * __this, int32_t ___format, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image Vuforia.CameraDeviceImpl::GetCameraImage(Vuforia.Image/PIXEL_FORMAT)
extern "C" Image_t834 * CameraDeviceImpl_GetCameraImage_m4203 (CameraDeviceImpl_t827 * __this, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDeviceImpl::GetCameraDirection()
extern "C" int32_t CameraDeviceImpl_GetCameraDirection_m4204 (CameraDeviceImpl_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.CameraDeviceImpl::GetCameraFieldOfViewRads()
extern "C" Vector2_t211  CameraDeviceImpl_GetCameraFieldOfViewRads_m4205 (CameraDeviceImpl_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image> Vuforia.CameraDeviceImpl::GetAllImages()
extern "C" Dictionary_2_t828 * CameraDeviceImpl_GetAllImages_m4206 (CameraDeviceImpl_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::IsDirty()
extern "C" bool CameraDeviceImpl_IsDirty_m4207 (CameraDeviceImpl_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::ResetDirtyFlag()
extern "C" void CameraDeviceImpl_ResetDirtyFlag_m4208 (CameraDeviceImpl_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::.ctor()
extern "C" void CameraDeviceImpl__ctor_m4209 (CameraDeviceImpl_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::ForceFrameFormat(Vuforia.Image/PIXEL_FORMAT,System.Boolean)
extern "C" void CameraDeviceImpl_ForceFrameFormat_m4210 (CameraDeviceImpl_t827 * __this, int32_t ___format, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::InitCameraDevice(System.Int32)
extern "C" int32_t CameraDeviceImpl_InitCameraDevice_m4211 (CameraDeviceImpl_t827 * __this, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::DeinitCameraDevice()
extern "C" int32_t CameraDeviceImpl_DeinitCameraDevice_m4212 (CameraDeviceImpl_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::StartCameraDevice()
extern "C" int32_t CameraDeviceImpl_StartCameraDevice_m4213 (CameraDeviceImpl_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::StopCameraDevice()
extern "C" int32_t CameraDeviceImpl_StopCameraDevice_m4214 (CameraDeviceImpl_t827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::.cctor()
extern "C" void CameraDeviceImpl__cctor_m4215 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
