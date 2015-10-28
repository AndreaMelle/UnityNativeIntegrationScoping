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

// Vuforia.VuforiaNativeWrapper
struct VuforiaNativeWrapper_t920;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t427;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceInitCamera(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_CameraDeviceInitCamera_m4991 (VuforiaNativeWrapper_t920 * __this, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceDeinitCamera()
extern "C" int32_t VuforiaNativeWrapper_CameraDeviceDeinitCamera_m4992 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceStartCamera()
extern "C" int32_t VuforiaNativeWrapper_CameraDeviceStartCamera_m4993 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceStopCamera()
extern "C" int32_t VuforiaNativeWrapper_CameraDeviceStopCamera_m4994 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceGetNumVideoModes()
extern "C" int32_t VuforiaNativeWrapper_CameraDeviceGetNumVideoModes_m4995 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void VuforiaNativeWrapper_CameraDeviceGetVideoMode_m4996 (VuforiaNativeWrapper_t920 * __this, int32_t ___idx, IntPtr_t ___videoMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_CameraDeviceSelectVideoMode_m4997 (VuforiaNativeWrapper_t920 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_CameraDeviceSetFlashTorchMode_m4998 (VuforiaNativeWrapper_t920 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_CameraDeviceSetFocusMode_m4999 (VuforiaNativeWrapper_t920 * __this, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_CameraDeviceSetCameraConfiguration_m5000 (VuforiaNativeWrapper_t920 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::CameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_CameraDeviceGetCameraFieldOfViewRads_m5001 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___fovVectorPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_QcarSetFrameFormat_m5002 (VuforiaNativeWrapper_t920 * __this, int32_t ___format, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetExists(System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_DataSetExists_m5003 (VuforiaNativeWrapper_t920 * __this, String_t* ___relativePath, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_DataSetLoad_m5004 (VuforiaNativeWrapper_t920 * __this, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_DataSetGetNumTrackableType_m5005 (VuforiaNativeWrapper_t920 * __this, int32_t ___trackableType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_DataSetGetTrackablesOfType_m5006 (VuforiaNativeWrapper_t920 * __this, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_DataSetGetTrackableName_m5007 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t427 * ___trackableName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_DataSetCreateTrackable_m5008 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t427 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_DataSetDestroyTrackable_m5009 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_DataSetHasReachedTrackableLimit_m5010 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::GetCameraThreadID()
extern "C" int32_t VuforiaNativeWrapper_GetCameraThreadID_m5011 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t VuforiaNativeWrapper_ImageTargetBuilderBuild_m5012 (VuforiaNativeWrapper_t920 * __this, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::FrameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void VuforiaNativeWrapper_FrameCounterGetBenchmarkingData_m5013 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::ImageTargetBuilderStartScan()
extern "C" void VuforiaNativeWrapper_ImageTargetBuilderStartScan_m5014 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::ImageTargetBuilderStopScan()
extern "C" void VuforiaNativeWrapper_ImageTargetBuilderStopScan_m5015 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetBuilderGetFrameQuality()
extern "C" int32_t VuforiaNativeWrapper_ImageTargetBuilderGetFrameQuality_m5016 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ImageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t VuforiaNativeWrapper_ImageTargetBuilderGetTrackableSource_m5017 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_ImageTargetCreateVirtualButton_m5018 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNativeWrapper_ImageTargetDestroyVirtualButton_m5019 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNativeWrapper_VirtualButtonGetId_m5020 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t VuforiaNativeWrapper_ImageTargetGetNumVirtualButtons_m5021 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t VuforiaNativeWrapper_ImageTargetGetVirtualButtons_m5022 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_ImageTargetGetVirtualButtonName_m5023 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t427 * ___vbName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_CylinderTargetGetDimensions_m5024 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeWrapper_CylinderTargetSetSideLength_m5025 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeWrapper_CylinderTargetSetTopDiameter_m5026 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeWrapper_CylinderTargetSetBottomDiameter_m5027 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_ObjectTargetSetSize_m5028 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_ObjectTargetGetSize_m5029 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTrackerStart()
extern "C" int32_t VuforiaNativeWrapper_ObjectTrackerStart_m5030 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::ObjectTrackerStop()
extern "C" void VuforiaNativeWrapper_ObjectTrackerStop_m5031 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::ObjectTrackerCreateDataSet()
extern "C" IntPtr_t VuforiaNativeWrapper_ObjectTrackerCreateDataSet_m5032 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_ObjectTrackerDestroyDataSet_m5033 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_ObjectTrackerActivateDataSet_m5034 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_ObjectTrackerDeactivateDataSet_m5035 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_ObjectTrackerPersistExtendedTracking_m5036 (VuforiaNativeWrapper_t920 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ObjectTrackerResetExtendedTracking()
extern "C" int32_t VuforiaNativeWrapper_ObjectTrackerResetExtendedTracking_m5037 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::MarkerSetSize(System.Int32,System.Single)
extern "C" int32_t VuforiaNativeWrapper_MarkerSetSize_m5038 (VuforiaNativeWrapper_t920 * __this, int32_t ___trackableIndex, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::MarkerTrackerStart()
extern "C" int32_t VuforiaNativeWrapper_MarkerTrackerStart_m5039 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::MarkerTrackerStop()
extern "C" void VuforiaNativeWrapper_MarkerTrackerStop_m5040 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::MarkerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t VuforiaNativeWrapper_MarkerTrackerCreateMarker_m5041 (VuforiaNativeWrapper_t920 * __this, int32_t ___id, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::MarkerTrackerDestroyMarker(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_MarkerTrackerDestroyMarker_m5042 (VuforiaNativeWrapper_t920 * __this, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::InitPlatformNative()
extern "C" void VuforiaNativeWrapper_InitPlatformNative_m5043 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::InitFrameState(System.IntPtr)
extern "C" void VuforiaNativeWrapper_InitFrameState_m5044 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::DeinitFrameState(System.IntPtr)
extern "C" void VuforiaNativeWrapper_DeinitFrameState_m5045 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C" void VuforiaNativeWrapper_OnSurfaceChanged_m5046 (VuforiaNativeWrapper_t920 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::OnPause()
extern "C" void VuforiaNativeWrapper_OnPause_m5047 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::OnResume()
extern "C" void VuforiaNativeWrapper_OnResume_m5048 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::HasSurfaceBeenRecreated()
extern "C" bool VuforiaNativeWrapper_HasSurfaceBeenRecreated_m5049 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_UpdateQCAR_m5050 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RendererEnd()
extern "C" void VuforiaNativeWrapper_RendererEnd_m5051 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_QcarGetBufferSize_m5052 (VuforiaNativeWrapper_t920 * __this, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNativeWrapper_QcarAddCameraFrame_m5053 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNativeWrapper_RendererSetVideoBackgroundCfg_m5054 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNativeWrapper_RendererGetVideoBackgroundCfg_m5055 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void VuforiaNativeWrapper_RendererGetVideoBackgroundTextureInfo_m5056 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___texInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_RendererSetVideoBackgroundTextureID_m5057 (VuforiaNativeWrapper_t920 * __this, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t VuforiaNativeWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m5058 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::RendererGetRecommendedFps(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_RendererGetRecommendedFps_m5059 (VuforiaNativeWrapper_t920 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::QcarSetHint(System.UInt32,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_QcarSetHint_m5060 (VuforiaNativeWrapper_t920 * __this, uint32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_GetProjectionGL_m5061 (VuforiaNativeWrapper_t920 * __this, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNativeWrapper_SetApplicationEnvironment_m5062 (VuforiaNativeWrapper_t920 * __this, int32_t ___unityVersionMajor, int32_t ___unityVersionMinor, int32_t ___unityVersionChange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::SetStateBufferSize(System.Int32)
extern "C" void VuforiaNativeWrapper_SetStateBufferSize_m5063 (VuforiaNativeWrapper_t920 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::SmartTerrainTrackerStart()
extern "C" int32_t VuforiaNativeWrapper_SmartTerrainTrackerStart_m5064 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::SmartTerrainTrackerStop()
extern "C" void VuforiaNativeWrapper_SmartTerrainTrackerStop_m5065 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool VuforiaNativeWrapper_SmartTerrainTrackerSetScaleToMillimeter_m5066 (VuforiaNativeWrapper_t920 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::SmartTerrainTrackerInitBuilder()
extern "C" bool VuforiaNativeWrapper_SmartTerrainTrackerInitBuilder_m5067 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C" bool VuforiaNativeWrapper_SmartTerrainTrackerDeinitBuilder_m5068 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t VuforiaNativeWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m5069 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t VuforiaNativeWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m5070 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_SmartTerrainBuilderAddReconstruction_m5071 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_SmartTerrainBuilderRemoveReconstruction_m5072 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_SmartTerrainBuilderDestroyReconstruction_m5073 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::ReconstructionStart(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_ReconstructionStart_m5074 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::ReconstructionStop(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_ReconstructionStop_m5075 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_ReconstructionIsReconstructing_m5076 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::ReconstructionReset(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_ReconstructionReset_m5077 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void VuforiaNativeWrapper_ReconstructionSetNavMeshPadding_m5078 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___reconstruction, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool VuforiaNativeWrapper_ReconstructionFromTargetSetInitializationTarget_m5079 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool VuforiaNativeWrapper_ReconstructionSetMaximumArea_m5080 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_ReconstructioFromEnvironmentGetReconstructionState_m5081 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderStartInit(System.String,System.String)
extern "C" int32_t VuforiaNativeWrapper_TargetFinderStartInit_m5082 (VuforiaNativeWrapper_t920 * __this, String_t* ___userKey, String_t* ___secretKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderGetInitState()
extern "C" int32_t VuforiaNativeWrapper_TargetFinderGetInitState_m5083 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderDeinit()
extern "C" int32_t VuforiaNativeWrapper_TargetFinderDeinit_m5084 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderStartRecognition()
extern "C" int32_t VuforiaNativeWrapper_TargetFinderStartRecognition_m5085 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderStop()
extern "C" int32_t VuforiaNativeWrapper_TargetFinderStop_m5086 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TargetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNativeWrapper_TargetFinderSetUIScanlineColor_m5087 (VuforiaNativeWrapper_t920 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TargetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNativeWrapper_TargetFinderSetUIPointColor_m5088 (VuforiaNativeWrapper_t920 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TargetFinderUpdate(System.IntPtr,System.Int32)
extern "C" void VuforiaNativeWrapper_TargetFinderUpdate_m5089 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___targetFinderState, int32_t ___filterMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_TargetFinderGetResults_m5090 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_TargetFinderEnableTracking_m5091 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___searchResult, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void VuforiaNativeWrapper_TargetFinderGetImageTargets_m5092 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TargetFinderClearTrackables()
extern "C" void VuforiaNativeWrapper_TargetFinderClearTrackables_m5093 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TextTrackerStart()
extern "C" int32_t VuforiaNativeWrapper_TextTrackerStart_m5094 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TextTrackerStop()
extern "C" void VuforiaNativeWrapper_TextTrackerStop_m5095 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_TextTrackerSetRegionOfInterest_m5096 (VuforiaNativeWrapper_t920 * __this, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" void VuforiaNativeWrapper_TextTrackerGetRegionOfInterest_m5097 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_WordListLoadWordList_m5098 (VuforiaNativeWrapper_t920 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_WordListAddWordsFromFile_m5099 (VuforiaNativeWrapper_t920 * __this, String_t* ___path, int32_t ___storagetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListAddWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_WordListAddWordU_m5100 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListRemoveWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_WordListRemoveWordU_m5101 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListContainsWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_WordListContainsWordU_m5102 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListUnloadAllLists()
extern "C" int32_t VuforiaNativeWrapper_WordListUnloadAllLists_m5103 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListSetFilterMode(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_WordListSetFilterMode_m5104 (VuforiaNativeWrapper_t920 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListGetFilterMode()
extern "C" int32_t VuforiaNativeWrapper_WordListGetFilterMode_m5105 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_WordListLoadFilterList_m5106 (VuforiaNativeWrapper_t920 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_WordListAddWordToFilterListU_m5107 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_WordListRemoveWordFromFilterListU_m5108 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListClearFilterList()
extern "C" int32_t VuforiaNativeWrapper_WordListClearFilterList_m5109 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordListGetFilterListWordCount()
extern "C" int32_t VuforiaNativeWrapper_WordListGetFilterListWordCount_m5110 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::WordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t VuforiaNativeWrapper_WordListGetFilterListWordU_m5111 (VuforiaNativeWrapper_t920 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_WordGetLetterMask_m5112 (VuforiaNativeWrapper_t920 * __this, int32_t ___wordID, IntPtr_t ___letterMaskImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_WordGetLetterBoundingBoxes_m5113 (VuforiaNativeWrapper_t920 * __this, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TrackerManagerInitTracker(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_TrackerManagerInitTracker_m5114 (VuforiaNativeWrapper_t920 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_TrackerManagerDeinitTracker_m5115 (VuforiaNativeWrapper_t920 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_VirtualButtonSetEnabled_m5116 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_VirtualButtonSetSensitivity_m5117 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_VirtualButtonSetAreaRectangle_m5118 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::QcarInit(System.String)
extern "C" int32_t VuforiaNativeWrapper_QcarInit_m5119 (VuforiaNativeWrapper_t920 * __this, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::QcarDeinit()
extern "C" int32_t VuforiaNativeWrapper_QcarDeinit_m5120 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_StartExtendedTracking_m5121 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_StopExtendedTracking_m5122 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearIsDeviceDetected()
extern "C" bool VuforiaNativeWrapper_EyewearIsDeviceDetected_m5123 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearSetHeadsetPresent(System.String)
extern "C" bool VuforiaNativeWrapper_EyewearSetHeadsetPresent_m5124 (VuforiaNativeWrapper_t920 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearSetHeadsetNotPresent()
extern "C" bool VuforiaNativeWrapper_EyewearSetHeadsetNotPresent_m5125 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearIsSeeThru()
extern "C" bool VuforiaNativeWrapper_EyewearIsSeeThru_m5126 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearGetScreenOrientation()
extern "C" int32_t VuforiaNativeWrapper_EyewearGetScreenOrientation_m5127 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearIsStereoCapable()
extern "C" bool VuforiaNativeWrapper_EyewearIsStereoCapable_m5128 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearIsStereoEnabled()
extern "C" bool VuforiaNativeWrapper_EyewearIsStereoEnabled_m5129 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearIsStereoGLOnly()
extern "C" bool VuforiaNativeWrapper_EyewearIsStereoGLOnly_m5130 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearSetStereo(System.Boolean)
extern "C" bool VuforiaNativeWrapper_EyewearSetStereo_m5131 (VuforiaNativeWrapper_t920 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearIsPredictiveTrackingEnabled()
extern "C" bool VuforiaNativeWrapper_EyewearIsPredictiveTrackingEnabled_m5132 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearSetPredictiveTracking(System.Boolean)
extern "C" bool VuforiaNativeWrapper_EyewearSetPredictiveTracking_m5133 (VuforiaNativeWrapper_t920 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::EyewearSetProjectionClippingPlanes(System.Single,System.Single)
extern "C" void VuforiaNativeWrapper_EyewearSetProjectionClippingPlanes_m5134 (VuforiaNativeWrapper_t920 * __this, float ___nearPlane, float ___farPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::EyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" void VuforiaNativeWrapper_EyewearGetProjectionMatrix_m5135 (VuforiaNativeWrapper_t920 * __this, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMGetMaxCount()
extern "C" int32_t VuforiaNativeWrapper_EyewearCPMGetMaxCount_m5136 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMGetUsedCount()
extern "C" int32_t VuforiaNativeWrapper_EyewearCPMGetUsedCount_m5137 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C" bool VuforiaNativeWrapper_EyewearCPMIsProfileUsed_m5138 (VuforiaNativeWrapper_t920 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMGetActiveProfile()
extern "C" int32_t VuforiaNativeWrapper_EyewearCPMGetActiveProfile_m5139 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C" bool VuforiaNativeWrapper_EyewearCPMSetActiveProfile_m5140 (VuforiaNativeWrapper_t920 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::EyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_EyewearCPMGetProjectionMatrix_m5141 (VuforiaNativeWrapper_t920 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" bool VuforiaNativeWrapper_EyewearCPMSetProjectionMatrix_m5142 (VuforiaNativeWrapper_t920 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t VuforiaNativeWrapper_EyewearCPMGetProfileName_m5143 (VuforiaNativeWrapper_t920 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" bool VuforiaNativeWrapper_EyewearCPMSetProfileName_m5144 (VuforiaNativeWrapper_t920 * __this, int32_t ___profileID, IntPtr_t ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearCPMClearProfile(System.Int32)
extern "C" bool VuforiaNativeWrapper_EyewearCPMClearProfile_m5145 (VuforiaNativeWrapper_t920 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" bool VuforiaNativeWrapper_EyewearUserCalibratorInit_m5146 (VuforiaNativeWrapper_t920 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C" float VuforiaNativeWrapper_EyewearUserCalibratorGetMinScaleHint_m5147 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C" float VuforiaNativeWrapper_EyewearUserCalibratorGetMaxScaleHint_m5148 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C" bool VuforiaNativeWrapper_EyewearUserCalibratorIsStereoStretched_m5149 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" bool VuforiaNativeWrapper_EyewearUserCalibratorGetProjectionMatrix_m5150 (VuforiaNativeWrapper_t920 * __this, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceInitCamera(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_cameraDeviceInitCamera_m5151 (Object_t * __this /* static, unused */, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceDeinitCamera()
extern "C" int32_t VuforiaNativeWrapper_cameraDeviceDeinitCamera_m5152 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceStartCamera()
extern "C" int32_t VuforiaNativeWrapper_cameraDeviceStartCamera_m5153 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceStopCamera()
extern "C" int32_t VuforiaNativeWrapper_cameraDeviceStopCamera_m5154 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceGetNumVideoModes()
extern "C" int32_t VuforiaNativeWrapper_cameraDeviceGetNumVideoModes_m5155 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::cameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void VuforiaNativeWrapper_cameraDeviceGetVideoMode_m5156 (Object_t * __this /* static, unused */, int32_t ___idx, IntPtr_t ___videoMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_cameraDeviceSelectVideoMode_m5157 (Object_t * __this /* static, unused */, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_cameraDeviceSetFlashTorchMode_m5158 (Object_t * __this /* static, unused */, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_cameraDeviceSetFocusMode_m5159 (Object_t * __this /* static, unused */, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_cameraDeviceSetCameraConfiguration_m5160 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_cameraDeviceGetCameraFieldOfViewRads_m5161 (Object_t * __this /* static, unused */, IntPtr_t ___fovVectorPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::qcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_qcarSetFrameFormat_m5162 (Object_t * __this /* static, unused */, int32_t ___format, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetExists(System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_dataSetExists_m5163 (Object_t * __this /* static, unused */, String_t* ___relativePath, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_dataSetLoad_m5164 (Object_t * __this /* static, unused */, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_dataSetGetNumTrackableType_m5165 (Object_t * __this /* static, unused */, int32_t ___trackableType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_dataSetGetTrackablesOfType_m5166 (Object_t * __this /* static, unused */, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_dataSetGetTrackableName_m5167 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t427 * ___trackableName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_dataSetCreateTrackable_m5168 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t427 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_dataSetDestroyTrackable_m5169 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::dataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_dataSetHasReachedTrackableLimit_m5170 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::getCameraThreadID()
extern "C" int32_t VuforiaNativeWrapper_getCameraThreadID_m5171 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t VuforiaNativeWrapper_imageTargetBuilderBuild_m5172 (Object_t * __this /* static, unused */, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::frameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void VuforiaNativeWrapper_frameCounterGetBenchmarkingData_m5173 (Object_t * __this /* static, unused */, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::imageTargetBuilderStartScan()
extern "C" void VuforiaNativeWrapper_imageTargetBuilderStartScan_m5174 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::imageTargetBuilderStopScan()
extern "C" void VuforiaNativeWrapper_imageTargetBuilderStopScan_m5175 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetBuilderGetFrameQuality()
extern "C" int32_t VuforiaNativeWrapper_imageTargetBuilderGetFrameQuality_m5176 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::imageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t VuforiaNativeWrapper_imageTargetBuilderGetTrackableSource_m5177 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_imageTargetCreateVirtualButton_m5178 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNativeWrapper_imageTargetDestroyVirtualButton_m5179 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::virtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNativeWrapper_virtualButtonGetId_m5180 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t VuforiaNativeWrapper_imageTargetGetNumVirtualButtons_m5181 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t VuforiaNativeWrapper_imageTargetGetVirtualButtons_m5182 (Object_t * __this /* static, unused */, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::imageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_imageTargetGetVirtualButtonName_m5183 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t427 * ___vbName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_cylinderTargetGetDimensions_m5184 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeWrapper_cylinderTargetSetSideLength_m5185 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeWrapper_cylinderTargetSetTopDiameter_m5186 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::cylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeWrapper_cylinderTargetSetBottomDiameter_m5187 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_objectTargetSetSize_m5188 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_objectTargetGetSize_m5189 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTrackerStart()
extern "C" int32_t VuforiaNativeWrapper_objectTrackerStart_m5190 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::objectTrackerStop()
extern "C" void VuforiaNativeWrapper_objectTrackerStop_m5191 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::objectTrackerCreateDataSet()
extern "C" IntPtr_t VuforiaNativeWrapper_objectTrackerCreateDataSet_m5192 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_objectTrackerDestroyDataSet_m5193 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_objectTrackerActivateDataSet_m5194 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_objectTrackerDeactivateDataSet_m5195 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_objectTrackerPersistExtendedTracking_m5196 (Object_t * __this /* static, unused */, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::objectTrackerResetExtendedTracking()
extern "C" int32_t VuforiaNativeWrapper_objectTrackerResetExtendedTracking_m5197 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::markerSetSize(System.Int32,System.Single)
extern "C" int32_t VuforiaNativeWrapper_markerSetSize_m5198 (Object_t * __this /* static, unused */, int32_t ___trackableIndex, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::markerTrackerStart()
extern "C" int32_t VuforiaNativeWrapper_markerTrackerStart_m5199 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::markerTrackerStop()
extern "C" void VuforiaNativeWrapper_markerTrackerStop_m5200 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::markerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t VuforiaNativeWrapper_markerTrackerCreateMarker_m5201 (Object_t * __this /* static, unused */, int32_t ___id, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::initPlatformNative()
extern "C" void VuforiaNativeWrapper_initPlatformNative_m5202 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::markerTrackerDestroyMarker(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_markerTrackerDestroyMarker_m5203 (Object_t * __this /* static, unused */, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::initFrameState(System.IntPtr)
extern "C" void VuforiaNativeWrapper_initFrameState_m5204 (Object_t * __this /* static, unused */, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::deinitFrameState(System.IntPtr)
extern "C" void VuforiaNativeWrapper_deinitFrameState_m5205 (Object_t * __this /* static, unused */, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::onSurfaceChanged(System.Int32,System.Int32)
extern "C" void VuforiaNativeWrapper_onSurfaceChanged_m5206 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::onPause()
extern "C" void VuforiaNativeWrapper_onPause_m5207 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::onResume()
extern "C" void VuforiaNativeWrapper_onResume_m5208 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::hasSurfaceBeenRecreated()
extern "C" bool VuforiaNativeWrapper_hasSurfaceBeenRecreated_m5209 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::updateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_updateQCAR_m5210 (Object_t * __this /* static, unused */, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::rendererEnd()
extern "C" void VuforiaNativeWrapper_rendererEnd_m5211 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::qcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_qcarGetBufferSize_m5212 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::qcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNativeWrapper_qcarAddCameraFrame_m5213 (Object_t * __this /* static, unused */, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::rendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNativeWrapper_rendererSetVideoBackgroundCfg_m5214 (Object_t * __this /* static, unused */, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::rendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNativeWrapper_rendererGetVideoBackgroundCfg_m5215 (Object_t * __this /* static, unused */, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::rendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void VuforiaNativeWrapper_rendererGetVideoBackgroundTextureInfo_m5216 (Object_t * __this /* static, unused */, IntPtr_t ___texInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_rendererSetVideoBackgroundTextureID_m5217 (Object_t * __this /* static, unused */, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t VuforiaNativeWrapper_rendererIsVideoBackgroundTextureInfoAvailable_m5218 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::rendererGetRecommendedFps(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_rendererGetRecommendedFps_m5219 (Object_t * __this /* static, unused */, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::qcarInit(System.String)
extern "C" int32_t VuforiaNativeWrapper_qcarInit_m5220 (Object_t * __this /* static, unused */, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::qcarSetHint(System.UInt32,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_qcarSetHint_m5221 (Object_t * __this /* static, unused */, uint32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::getProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_getProjectionGL_m5222 (Object_t * __this /* static, unused */, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::setApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNativeWrapper_setApplicationEnvironment_m5223 (Object_t * __this /* static, unused */, int32_t ___unityVersionMajor, int32_t ___unityVersionMinor, int32_t ___unityVersionChange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::setStateBufferSize(System.Int32)
extern "C" void VuforiaNativeWrapper_setStateBufferSize_m5224 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::smartTerrainTrackerStart()
extern "C" int32_t VuforiaNativeWrapper_smartTerrainTrackerStart_m5225 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::smartTerrainTrackerStop()
extern "C" void VuforiaNativeWrapper_smartTerrainTrackerStop_m5226 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::smartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool VuforiaNativeWrapper_smartTerrainTrackerSetScaleToMillimeter_m5227 (Object_t * __this /* static, unused */, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::smartTerrainTrackerInitBuilder()
extern "C" bool VuforiaNativeWrapper_smartTerrainTrackerInitBuilder_m5228 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::smartTerrainTrackerDeinitBuilder()
extern "C" bool VuforiaNativeWrapper_smartTerrainTrackerDeinitBuilder_m5229 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::smartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t VuforiaNativeWrapper_smartTerrainBuilderCreateReconstructionFromTarget_m5230 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::smartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t VuforiaNativeWrapper_smartTerrainBuilderCreateReconstructionFromEnvironment_m5231 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::smartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_smartTerrainBuilderAddReconstruction_m5232 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::smartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_smartTerrainBuilderRemoveReconstruction_m5233 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::smartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_smartTerrainBuilderDestroyReconstruction_m5234 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::reconstructionStart(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_reconstructionStart_m5235 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::reconstructionStop(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_reconstructionStop_m5236 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::reconstructionIsReconstructing(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_reconstructionIsReconstructing_m5237 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::reconstructionReset(System.IntPtr)
extern "C" bool VuforiaNativeWrapper_reconstructionReset_m5238 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::reconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void VuforiaNativeWrapper_reconstructionSetNavMeshPadding_m5239 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::reconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool VuforiaNativeWrapper_reconstructionFromTargetSetInitializationTarget_m5240 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeWrapper::reconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool VuforiaNativeWrapper_reconstructionSetMaximumArea_m5241 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::reconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_reconstructioFromEnvironmentGetReconstructionState_m5242 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderStartInit(System.String,System.String)
extern "C" int32_t VuforiaNativeWrapper_targetFinderStartInit_m5243 (Object_t * __this /* static, unused */, String_t* ___userKey, String_t* ___secretKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderGetInitState()
extern "C" int32_t VuforiaNativeWrapper_targetFinderGetInitState_m5244 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderDeinit()
extern "C" int32_t VuforiaNativeWrapper_targetFinderDeinit_m5245 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderStartRecognition()
extern "C" int32_t VuforiaNativeWrapper_targetFinderStartRecognition_m5246 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderStop()
extern "C" int32_t VuforiaNativeWrapper_targetFinderStop_m5247 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::targetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNativeWrapper_targetFinderSetUIScanlineColor_m5248 (Object_t * __this /* static, unused */, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::targetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNativeWrapper_targetFinderSetUIPointColor_m5249 (Object_t * __this /* static, unused */, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::targetFinderUpdate(System.IntPtr,System.Int32)
extern "C" void VuforiaNativeWrapper_targetFinderUpdate_m5250 (Object_t * __this /* static, unused */, IntPtr_t ___targetFinderState, int32_t ___filterMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_targetFinderGetResults_m5251 (Object_t * __this /* static, unused */, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::targetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_targetFinderEnableTracking_m5252 (Object_t * __this /* static, unused */, IntPtr_t ___searchResult, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::targetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void VuforiaNativeWrapper_targetFinderGetImageTargets_m5253 (Object_t * __this /* static, unused */, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::targetFinderClearTrackables()
extern "C" void VuforiaNativeWrapper_targetFinderClearTrackables_m5254 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::textTrackerStart()
extern "C" int32_t VuforiaNativeWrapper_textTrackerStart_m5255 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::textTrackerStop()
extern "C" void VuforiaNativeWrapper_textTrackerStop_m5256 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::textTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_textTrackerSetRegionOfInterest_m5257 (Object_t * __this /* static, unused */, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::textTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_textTrackerGetRegionOfInterest_m5258 (Object_t * __this /* static, unused */, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListLoadWordList(System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_wordListLoadWordList_m5259 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_wordListAddWordsFromFile_m5260 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListAddWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_wordListAddWordU_m5261 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListRemoveWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_wordListRemoveWordU_m5262 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListContainsWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_wordListContainsWordU_m5263 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListUnloadAllLists()
extern "C" int32_t VuforiaNativeWrapper_wordListUnloadAllLists_m5264 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListSetFilterMode(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_wordListSetFilterMode_m5265 (Object_t * __this /* static, unused */, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListGetFilterMode()
extern "C" int32_t VuforiaNativeWrapper_wordListGetFilterMode_m5266 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_wordListAddWordToFilterListU_m5267 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_wordListRemoveWordFromFilterListU_m5268 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListClearFilterList()
extern "C" int32_t VuforiaNativeWrapper_wordListClearFilterList_m5269 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_wordListLoadFilterList_m5270 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordListGetFilterListWordCount()
extern "C" int32_t VuforiaNativeWrapper_wordListGetFilterListWordCount_m5271 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::wordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t VuforiaNativeWrapper_wordListGetFilterListWordU_m5272 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_wordGetLetterMask_m5273 (Object_t * __this /* static, unused */, int32_t ___wordID, IntPtr_t ___letterMaskImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::wordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_wordGetLetterBoundingBoxes_m5274 (Object_t * __this /* static, unused */, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::trackerManagerInitTracker(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_trackerManagerInitTracker_m5275 (Object_t * __this /* static, unused */, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::trackerManagerDeinitTracker(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_trackerManagerDeinitTracker_m5276 (Object_t * __this /* static, unused */, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::virtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_virtualButtonSetEnabled_m5277 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::virtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_virtualButtonSetSensitivity_m5278 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::virtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_virtualButtonSetAreaRectangle_m5279 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::qcarDeinit()
extern "C" int32_t VuforiaNativeWrapper_qcarDeinit_m5280 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::startExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_startExtendedTracking_m5281 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::stopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_stopExtendedTracking_m5282 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearIsDeviceDetected()
extern "C" int32_t VuforiaNativeWrapper_eyewearIsDeviceDetected_m5283 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearSetHeadsetPresent(System.String)
extern "C" int32_t VuforiaNativeWrapper_eyewearSetHeadsetPresent_m5284 (Object_t * __this /* static, unused */, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearSetHeadsetNotPresent()
extern "C" int32_t VuforiaNativeWrapper_eyewearSetHeadsetNotPresent_m5285 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearIsSeeThru()
extern "C" int32_t VuforiaNativeWrapper_eyewearIsSeeThru_m5286 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearGetScreenOrientation()
extern "C" int32_t VuforiaNativeWrapper_eyewearGetScreenOrientation_m5287 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearIsStereoCapable()
extern "C" int32_t VuforiaNativeWrapper_eyewearIsStereoCapable_m5288 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearIsStereoEnabled()
extern "C" int32_t VuforiaNativeWrapper_eyewearIsStereoEnabled_m5289 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearIsStereoGLOnly()
extern "C" int32_t VuforiaNativeWrapper_eyewearIsStereoGLOnly_m5290 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearSetStereo(System.Boolean)
extern "C" int32_t VuforiaNativeWrapper_eyewearSetStereo_m5291 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearIsPredictiveTrackingEnabled()
extern "C" int32_t VuforiaNativeWrapper_eyewearIsPredictiveTrackingEnabled_m5292 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearSetPredictiveTracking(System.Boolean)
extern "C" int32_t VuforiaNativeWrapper_eyewearSetPredictiveTracking_m5293 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::eyewearSetProjectionClippingPlanes(System.Single,System.Single)
extern "C" void VuforiaNativeWrapper_eyewearSetProjectionClippingPlanes_m5294 (Object_t * __this /* static, unused */, float ___nearPlane, float ___farPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::eyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" void VuforiaNativeWrapper_eyewearGetProjectionMatrix_m5295 (Object_t * __this /* static, unused */, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMGetMaxCount()
extern "C" int32_t VuforiaNativeWrapper_eyewearCPMGetMaxCount_m5296 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMGetUsedCount()
extern "C" int32_t VuforiaNativeWrapper_eyewearCPMGetUsedCount_m5297 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMIsProfileUsed(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_eyewearCPMIsProfileUsed_m5298 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMGetActiveProfile()
extern "C" int32_t VuforiaNativeWrapper_eyewearCPMGetActiveProfile_m5299 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMSetActiveProfile(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_eyewearCPMSetActiveProfile_m5300 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_eyewearCPMGetProjectionMatrix_m5301 (Object_t * __this /* static, unused */, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_eyewearCPMSetProjectionMatrix_m5302 (Object_t * __this /* static, unused */, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeWrapper::eyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t VuforiaNativeWrapper_eyewearCPMGetProfileName_m5303 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_eyewearCPMSetProfileName_m5304 (Object_t * __this /* static, unused */, int32_t ___profileID, IntPtr_t ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearCPMClearProfile(System.Int32)
extern "C" int32_t VuforiaNativeWrapper_eyewearCPMClearProfile_m5305 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeWrapper_eyewearUserCalibratorInit_m5306 (Object_t * __this /* static, unused */, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::eyewearUserCalibratorGetMinScaleHint()
extern "C" float VuforiaNativeWrapper_eyewearUserCalibratorGetMinScaleHint_m5307 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeWrapper::eyewearUserCalibratorGetMaxScaleHint()
extern "C" float VuforiaNativeWrapper_eyewearUserCalibratorGetMaxScaleHint_m5308 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearUserCalibratorIsStereoStretched()
extern "C" int32_t VuforiaNativeWrapper_eyewearUserCalibratorIsStereoStretched_m5309 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeWrapper::eyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeWrapper_eyewearUserCalibratorGetProjectionMatrix_m5310 (Object_t * __this /* static, unused */, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeWrapper::.ctor()
extern "C" void VuforiaNativeWrapper__ctor_m5311 (VuforiaNativeWrapper_t920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
