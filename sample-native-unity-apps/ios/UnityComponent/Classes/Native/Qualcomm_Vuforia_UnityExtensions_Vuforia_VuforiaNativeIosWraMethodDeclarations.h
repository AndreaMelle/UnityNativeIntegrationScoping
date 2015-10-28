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

// Vuforia.VuforiaNativeIosWrapper
struct VuforiaNativeIosWrapper_t918;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t427;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceInitCamera(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_CameraDeviceInitCamera_m4509 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceDeinitCamera()
extern "C" int32_t VuforiaNativeIosWrapper_CameraDeviceDeinitCamera_m4510 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceStartCamera()
extern "C" int32_t VuforiaNativeIosWrapper_CameraDeviceStartCamera_m4511 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceStopCamera()
extern "C" int32_t VuforiaNativeIosWrapper_CameraDeviceStopCamera_m4512 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetNumVideoModes()
extern "C" int32_t VuforiaNativeIosWrapper_CameraDeviceGetNumVideoModes_m4513 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_CameraDeviceGetVideoMode_m4514 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___idx, IntPtr_t ___videoMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_CameraDeviceSelectVideoMode_m4515 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_CameraDeviceSetFlashTorchMode_m4516 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_CameraDeviceSetFocusMode_m4517 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_CameraDeviceSetCameraConfiguration_m4518 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_CameraDeviceGetCameraFieldOfViewRads_m4519 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___fovVectorPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_QcarSetFrameFormat_m4520 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___format, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetExists(System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_DataSetExists_m4521 (VuforiaNativeIosWrapper_t918 * __this, String_t* ___relativePath, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_DataSetLoad_m4522 (VuforiaNativeIosWrapper_t918 * __this, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_DataSetGetNumTrackableType_m4523 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___trackableType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_DataSetGetTrackablesOfType_m4524 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_DataSetGetTrackableName_m4525 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t427 * ___trackableName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_DataSetCreateTrackable_m4526 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t427 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_DataSetDestroyTrackable_m4527 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_DataSetHasReachedTrackableLimit_m4528 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::GetCameraThreadID()
extern "C" int32_t VuforiaNativeIosWrapper_GetCameraThreadID_m4529 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_ImageTargetBuilderBuild_m4530 (VuforiaNativeIosWrapper_t918 * __this, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::FrameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void VuforiaNativeIosWrapper_FrameCounterGetBenchmarkingData_m4531 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderStartScan()
extern "C" void VuforiaNativeIosWrapper_ImageTargetBuilderStartScan_m4532 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderStopScan()
extern "C" void VuforiaNativeIosWrapper_ImageTargetBuilderStopScan_m4533 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderGetFrameQuality()
extern "C" int32_t VuforiaNativeIosWrapper_ImageTargetBuilderGetFrameQuality_m4534 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t VuforiaNativeIosWrapper_ImageTargetBuilderGetTrackableSource_m4535 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_ImageTargetCreateVirtualButton_m4536 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNativeIosWrapper_ImageTargetDestroyVirtualButton_m4537 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNativeIosWrapper_VirtualButtonGetId_m4538 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t VuforiaNativeIosWrapper_ImageTargetGetNumVirtualButtons_m4539 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t VuforiaNativeIosWrapper_ImageTargetGetVirtualButtons_m4540 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_ImageTargetGetVirtualButtonName_m4541 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t427 * ___vbName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_CylinderTargetGetDimensions_m4542 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_CylinderTargetSetSideLength_m4543 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_CylinderTargetSetTopDiameter_m4544 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_CylinderTargetSetBottomDiameter_m4545 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_ObjectTargetSetSize_m4546 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_ObjectTargetGetSize_m4547 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerStart()
extern "C" int32_t VuforiaNativeIosWrapper_ObjectTrackerStart_m4548 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ObjectTrackerStop()
extern "C" void VuforiaNativeIosWrapper_ObjectTrackerStop_m4549 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ObjectTrackerCreateDataSet()
extern "C" IntPtr_t VuforiaNativeIosWrapper_ObjectTrackerCreateDataSet_m4550 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_ObjectTrackerDestroyDataSet_m4551 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_ObjectTrackerActivateDataSet_m4552 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_ObjectTrackerDeactivateDataSet_m4553 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_ObjectTrackerPersistExtendedTracking_m4554 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerResetExtendedTracking()
extern "C" int32_t VuforiaNativeIosWrapper_ObjectTrackerResetExtendedTracking_m4555 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::MarkerSetSize(System.Int32,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_MarkerSetSize_m4556 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___trackableIndex, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::MarkerTrackerStart()
extern "C" int32_t VuforiaNativeIosWrapper_MarkerTrackerStart_m4557 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::MarkerTrackerStop()
extern "C" void VuforiaNativeIosWrapper_MarkerTrackerStop_m4558 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::MarkerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_MarkerTrackerCreateMarker_m4559 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___id, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::MarkerTrackerDestroyMarker(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_MarkerTrackerDestroyMarker_m4560 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::InitPlatformNative()
extern "C" void VuforiaNativeIosWrapper_InitPlatformNative_m4561 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::InitFrameState(System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_InitFrameState_m4562 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::DeinitFrameState(System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_DeinitFrameState_m4563 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C" void VuforiaNativeIosWrapper_OnSurfaceChanged_m4564 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::OnPause()
extern "C" void VuforiaNativeIosWrapper_OnPause_m4565 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::OnResume()
extern "C" void VuforiaNativeIosWrapper_OnResume_m4566 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::HasSurfaceBeenRecreated()
extern "C" bool VuforiaNativeIosWrapper_HasSurfaceBeenRecreated_m4567 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_UpdateQCAR_m4568 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RendererEnd()
extern "C" void VuforiaNativeIosWrapper_RendererEnd_m4569 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_QcarGetBufferSize_m4570 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNativeIosWrapper_QcarAddCameraFrame_m4571 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_RendererSetVideoBackgroundCfg_m4572 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_RendererGetVideoBackgroundCfg_m4573 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_RendererGetVideoBackgroundTextureInfo_m4574 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___texInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_RendererSetVideoBackgroundTextureID_m4575 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t VuforiaNativeIosWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m4576 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererGetRecommendedFps(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_RendererGetRecommendedFps_m4577 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarSetHint(System.UInt32,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_QcarSetHint_m4578 (VuforiaNativeIosWrapper_t918 * __this, uint32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_GetProjectionGL_m4579 (VuforiaNativeIosWrapper_t918 * __this, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNativeIosWrapper_SetApplicationEnvironment_m4580 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___unityVersionMajor, int32_t ___unityVersionMinor, int32_t ___unityVersionChange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::SetStateBufferSize(System.Int32)
extern "C" void VuforiaNativeIosWrapper_SetStateBufferSize_m4581 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerStart()
extern "C" int32_t VuforiaNativeIosWrapper_SmartTerrainTrackerStart_m4582 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerStop()
extern "C" void VuforiaNativeIosWrapper_SmartTerrainTrackerStop_m4583 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool VuforiaNativeIosWrapper_SmartTerrainTrackerSetScaleToMillimeter_m4584 (VuforiaNativeIosWrapper_t918 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerInitBuilder()
extern "C" bool VuforiaNativeIosWrapper_SmartTerrainTrackerInitBuilder_m4585 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C" bool VuforiaNativeIosWrapper_SmartTerrainTrackerDeinitBuilder_m4586 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t VuforiaNativeIosWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m4587 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t VuforiaNativeIosWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m4588 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_SmartTerrainBuilderAddReconstruction_m4589 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_SmartTerrainBuilderRemoveReconstruction_m4590 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_SmartTerrainBuilderDestroyReconstruction_m4591 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionStart(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_ReconstructionStart_m4592 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionStop(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_ReconstructionStop_m4593 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_ReconstructionIsReconstructing_m4594 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionReset(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_ReconstructionReset_m4595 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void VuforiaNativeIosWrapper_ReconstructionSetNavMeshPadding_m4596 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___reconstruction, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool VuforiaNativeIosWrapper_ReconstructionFromTargetSetInitializationTarget_m4597 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_ReconstructionSetMaximumArea_m4598 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_ReconstructioFromEnvironmentGetReconstructionState_m4599 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderStartInit(System.String,System.String)
extern "C" int32_t VuforiaNativeIosWrapper_TargetFinderStartInit_m4600 (VuforiaNativeIosWrapper_t918 * __this, String_t* ___userKey, String_t* ___secretKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderGetInitState()
extern "C" int32_t VuforiaNativeIosWrapper_TargetFinderGetInitState_m4601 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderDeinit()
extern "C" int32_t VuforiaNativeIosWrapper_TargetFinderDeinit_m4602 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderStartRecognition()
extern "C" int32_t VuforiaNativeIosWrapper_TargetFinderStartRecognition_m4603 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderStop()
extern "C" int32_t VuforiaNativeIosWrapper_TargetFinderStop_m4604 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNativeIosWrapper_TargetFinderSetUIScanlineColor_m4605 (VuforiaNativeIosWrapper_t918 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNativeIosWrapper_TargetFinderSetUIPointColor_m4606 (VuforiaNativeIosWrapper_t918 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderUpdate(System.IntPtr,System.Int32)
extern "C" void VuforiaNativeIosWrapper_TargetFinderUpdate_m4607 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___targetFinderState, int32_t ___filterMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_TargetFinderGetResults_m4608 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_TargetFinderEnableTracking_m4609 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___searchResult, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void VuforiaNativeIosWrapper_TargetFinderGetImageTargets_m4610 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderClearTrackables()
extern "C" void VuforiaNativeIosWrapper_TargetFinderClearTrackables_m4611 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TextTrackerStart()
extern "C" int32_t VuforiaNativeIosWrapper_TextTrackerStart_m4612 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TextTrackerStop()
extern "C" void VuforiaNativeIosWrapper_TextTrackerStop_m4613 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_TextTrackerSetRegionOfInterest_m4614 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_TextTrackerGetRegionOfInterest_m4615 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_WordListLoadWordList_m4616 (VuforiaNativeIosWrapper_t918 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_WordListAddWordsFromFile_m4617 (VuforiaNativeIosWrapper_t918 * __this, String_t* ___path, int32_t ___storagetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListAddWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_WordListAddWordU_m4618 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListRemoveWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_WordListRemoveWordU_m4619 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListContainsWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_WordListContainsWordU_m4620 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListUnloadAllLists()
extern "C" int32_t VuforiaNativeIosWrapper_WordListUnloadAllLists_m4621 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListSetFilterMode(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_WordListSetFilterMode_m4622 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListGetFilterMode()
extern "C" int32_t VuforiaNativeIosWrapper_WordListGetFilterMode_m4623 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_WordListLoadFilterList_m4624 (VuforiaNativeIosWrapper_t918 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_WordListAddWordToFilterListU_m4625 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_WordListRemoveWordFromFilterListU_m4626 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListClearFilterList()
extern "C" int32_t VuforiaNativeIosWrapper_WordListClearFilterList_m4627 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListGetFilterListWordCount()
extern "C" int32_t VuforiaNativeIosWrapper_WordListGetFilterListWordCount_m4628 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::WordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t VuforiaNativeIosWrapper_WordListGetFilterListWordU_m4629 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_WordGetLetterMask_m4630 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___wordID, IntPtr_t ___letterMaskImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_WordGetLetterBoundingBoxes_m4631 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TrackerManagerInitTracker(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_TrackerManagerInitTracker_m4632 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_TrackerManagerDeinitTracker_m4633 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_VirtualButtonSetEnabled_m4634 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_VirtualButtonSetSensitivity_m4635 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_VirtualButtonSetAreaRectangle_m4636 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarInit(System.String)
extern "C" int32_t VuforiaNativeIosWrapper_QcarInit_m4637 (VuforiaNativeIosWrapper_t918 * __this, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarDeinit()
extern "C" int32_t VuforiaNativeIosWrapper_QcarDeinit_m4638 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_StartExtendedTracking_m4639 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_StopExtendedTracking_m4640 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearIsDeviceDetected()
extern "C" bool VuforiaNativeIosWrapper_EyewearIsDeviceDetected_m4641 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearSetHeadsetPresent(System.String)
extern "C" bool VuforiaNativeIosWrapper_EyewearSetHeadsetPresent_m4642 (VuforiaNativeIosWrapper_t918 * __this, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearSetHeadsetNotPresent()
extern "C" bool VuforiaNativeIosWrapper_EyewearSetHeadsetNotPresent_m4643 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearIsSeeThru()
extern "C" bool VuforiaNativeIosWrapper_EyewearIsSeeThru_m4644 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearGetScreenOrientation()
extern "C" int32_t VuforiaNativeIosWrapper_EyewearGetScreenOrientation_m4645 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearIsStereoCapable()
extern "C" bool VuforiaNativeIosWrapper_EyewearIsStereoCapable_m4646 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearIsStereoEnabled()
extern "C" bool VuforiaNativeIosWrapper_EyewearIsStereoEnabled_m4647 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearIsStereoGLOnly()
extern "C" bool VuforiaNativeIosWrapper_EyewearIsStereoGLOnly_m4648 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearSetStereo(System.Boolean)
extern "C" bool VuforiaNativeIosWrapper_EyewearSetStereo_m4649 (VuforiaNativeIosWrapper_t918 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearIsPredictiveTrackingEnabled()
extern "C" bool VuforiaNativeIosWrapper_EyewearIsPredictiveTrackingEnabled_m4650 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearSetPredictiveTracking(System.Boolean)
extern "C" bool VuforiaNativeIosWrapper_EyewearSetPredictiveTracking_m4651 (VuforiaNativeIosWrapper_t918 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::EyewearSetProjectionClippingPlanes(System.Single,System.Single)
extern "C" void VuforiaNativeIosWrapper_EyewearSetProjectionClippingPlanes_m4652 (VuforiaNativeIosWrapper_t918 * __this, float ___nearPlane, float ___farPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::EyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" void VuforiaNativeIosWrapper_EyewearGetProjectionMatrix_m4653 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetMaxCount()
extern "C" int32_t VuforiaNativeIosWrapper_EyewearCPMGetMaxCount_m4654 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetUsedCount()
extern "C" int32_t VuforiaNativeIosWrapper_EyewearCPMGetUsedCount_m4655 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C" bool VuforiaNativeIosWrapper_EyewearCPMIsProfileUsed_m4656 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetActiveProfile()
extern "C" int32_t VuforiaNativeIosWrapper_EyewearCPMGetActiveProfile_m4657 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C" bool VuforiaNativeIosWrapper_EyewearCPMSetActiveProfile_m4658 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_EyewearCPMGetProjectionMatrix_m4659 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_EyewearCPMSetProjectionMatrix_m4660 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t VuforiaNativeIosWrapper_EyewearCPMGetProfileName_m4661 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_EyewearCPMSetProfileName_m4662 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___profileID, IntPtr_t ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearCPMClearProfile(System.Int32)
extern "C" bool VuforiaNativeIosWrapper_EyewearCPMClearProfile_m4663 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" bool VuforiaNativeIosWrapper_EyewearUserCalibratorInit_m4664 (VuforiaNativeIosWrapper_t918 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C" float VuforiaNativeIosWrapper_EyewearUserCalibratorGetMinScaleHint_m4665 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C" float VuforiaNativeIosWrapper_EyewearUserCalibratorGetMaxScaleHint_m4666 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C" bool VuforiaNativeIosWrapper_EyewearUserCalibratorIsStereoStretched_m4667 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_EyewearUserCalibratorGetProjectionMatrix_m4668 (VuforiaNativeIosWrapper_t918 * __this, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerStart()
extern "C" int32_t VuforiaNativeIosWrapper_smartTerrainTrackerStart_m4669 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerStop()
extern "C" void VuforiaNativeIosWrapper_smartTerrainTrackerStop_m4670 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool VuforiaNativeIosWrapper_smartTerrainTrackerSetScaleToMillimeter_m4671 (Object_t * __this /* static, unused */, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerInitBuilder()
extern "C" bool VuforiaNativeIosWrapper_smartTerrainTrackerInitBuilder_m4672 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerDeinitBuilder()
extern "C" bool VuforiaNativeIosWrapper_smartTerrainTrackerDeinitBuilder_m4673 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t VuforiaNativeIosWrapper_smartTerrainBuilderCreateReconstructionFromTarget_m4674 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t VuforiaNativeIosWrapper_smartTerrainBuilderCreateReconstructionFromEnvironment_m4675 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_smartTerrainBuilderAddReconstruction_m4676 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_smartTerrainBuilderRemoveReconstruction_m4677 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_smartTerrainBuilderDestroyReconstruction_m4678 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::reconstructionStart(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_reconstructionStart_m4679 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::reconstructionStop(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_reconstructionStop_m4680 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::reconstructionIsReconstructing(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_reconstructionIsReconstructing_m4681 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::reconstructionReset(System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_reconstructionReset_m4682 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::reconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void VuforiaNativeIosWrapper_reconstructionSetNavMeshPadding_m4683 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::reconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool VuforiaNativeIosWrapper_reconstructionFromTargetSetInitializationTarget_m4684 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::reconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool VuforiaNativeIosWrapper_reconstructionSetMaximumArea_m4685 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_reconstructioFromEnvironmentGetReconstructionState_m4686 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceInitCamera(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_cameraDeviceInitCamera_m4687 (Object_t * __this /* static, unused */, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceDeinitCamera()
extern "C" int32_t VuforiaNativeIosWrapper_cameraDeviceDeinitCamera_m4688 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceStartCamera()
extern "C" int32_t VuforiaNativeIosWrapper_cameraDeviceStartCamera_m4689 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceStopCamera()
extern "C" int32_t VuforiaNativeIosWrapper_cameraDeviceStopCamera_m4690 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetNumVideoModes()
extern "C" int32_t VuforiaNativeIosWrapper_cameraDeviceGetNumVideoModes_m4691 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_cameraDeviceGetVideoMode_m4692 (Object_t * __this /* static, unused */, int32_t ___idx, IntPtr_t ___videoMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_cameraDeviceSelectVideoMode_m4693 (Object_t * __this /* static, unused */, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_cameraDeviceSetFlashTorchMode_m4694 (Object_t * __this /* static, unused */, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_cameraDeviceSetFocusMode_m4695 (Object_t * __this /* static, unused */, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_cameraDeviceSetCameraConfiguration_m4696 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_cameraDeviceGetCameraFieldOfViewRads_m4697 (Object_t * __this /* static, unused */, IntPtr_t ___fovVectorPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_qcarSetFrameFormat_m4698 (Object_t * __this /* static, unused */, int32_t ___format, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetExists(System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_dataSetExists_m4699 (Object_t * __this /* static, unused */, String_t* ___relativePath, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_dataSetLoad_m4700 (Object_t * __this /* static, unused */, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_dataSetGetNumTrackableType_m4701 (Object_t * __this /* static, unused */, int32_t ___trackableType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_dataSetGetTrackablesOfType_m4702 (Object_t * __this /* static, unused */, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_dataSetGetTrackableName_m4703 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t427 * ___trackableName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_dataSetCreateTrackable_m4704 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t427 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_dataSetDestroyTrackable_m4705 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_dataSetHasReachedTrackableLimit_m4706 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::getCameraThreadID()
extern "C" int32_t VuforiaNativeIosWrapper_getCameraThreadID_m4707 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_imageTargetBuilderBuild_m4708 (Object_t * __this /* static, unused */, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::frameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void VuforiaNativeIosWrapper_frameCounterGetBenchmarkingData_m4709 (Object_t * __this /* static, unused */, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderStartScan()
extern "C" void VuforiaNativeIosWrapper_imageTargetBuilderStartScan_m4710 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderStopScan()
extern "C" void VuforiaNativeIosWrapper_imageTargetBuilderStopScan_m4711 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderGetFrameQuality()
extern "C" int32_t VuforiaNativeIosWrapper_imageTargetBuilderGetFrameQuality_m4712 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t VuforiaNativeIosWrapper_imageTargetBuilderGetTrackableSource_m4713 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_imageTargetCreateVirtualButton_m4714 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNativeIosWrapper_imageTargetDestroyVirtualButton_m4715 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t VuforiaNativeIosWrapper_virtualButtonGetId_m4716 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t VuforiaNativeIosWrapper_imageTargetGetNumVirtualButtons_m4717 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t VuforiaNativeIosWrapper_imageTargetGetVirtualButtons_m4718 (Object_t * __this /* static, unused */, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_imageTargetGetVirtualButtonName_m4719 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t427 * ___vbName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_cylinderTargetGetDimensions_m4720 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_cylinderTargetSetSideLength_m4721 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_cylinderTargetSetTopDiameter_m4722 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_cylinderTargetSetBottomDiameter_m4723 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_objectTargetSetSize_m4724 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_objectTargetGetSize_m4725 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerStart()
extern "C" int32_t VuforiaNativeIosWrapper_objectTrackerStart_m4726 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::objectTrackerStop()
extern "C" void VuforiaNativeIosWrapper_objectTrackerStop_m4727 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::objectTrackerCreateDataSet()
extern "C" IntPtr_t VuforiaNativeIosWrapper_objectTrackerCreateDataSet_m4728 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_objectTrackerDestroyDataSet_m4729 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_objectTrackerActivateDataSet_m4730 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_objectTrackerDeactivateDataSet_m4731 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_objectTrackerPersistExtendedTracking_m4732 (Object_t * __this /* static, unused */, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerResetExtendedTracking()
extern "C" int32_t VuforiaNativeIosWrapper_objectTrackerResetExtendedTracking_m4733 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::markerSetSize(System.Int32,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_markerSetSize_m4734 (Object_t * __this /* static, unused */, int32_t ___trackableIndex, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::markerTrackerStart()
extern "C" int32_t VuforiaNativeIosWrapper_markerTrackerStart_m4735 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::markerTrackerStop()
extern "C" void VuforiaNativeIosWrapper_markerTrackerStop_m4736 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::markerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t VuforiaNativeIosWrapper_markerTrackerCreateMarker_m4737 (Object_t * __this /* static, unused */, int32_t ___id, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::markerTrackerDestroyMarker(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_markerTrackerDestroyMarker_m4738 (Object_t * __this /* static, unused */, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::initPlatformNative()
extern "C" void VuforiaNativeIosWrapper_initPlatformNative_m4739 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::initFrameState(System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_initFrameState_m4740 (Object_t * __this /* static, unused */, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::deinitFrameState(System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_deinitFrameState_m4741 (Object_t * __this /* static, unused */, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::onSurfaceChanged(System.Int32,System.Int32)
extern "C" void VuforiaNativeIosWrapper_onSurfaceChanged_m4742 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::onPause()
extern "C" void VuforiaNativeIosWrapper_onPause_m4743 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::onResume()
extern "C" void VuforiaNativeIosWrapper_onResume_m4744 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaNativeIosWrapper::hasSurfaceBeenRecreated()
extern "C" bool VuforiaNativeIosWrapper_hasSurfaceBeenRecreated_m4745 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::updateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_updateQCAR_m4746 (Object_t * __this /* static, unused */, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererEnd()
extern "C" void VuforiaNativeIosWrapper_rendererEnd_m4747 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_qcarGetBufferSize_m4748 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::qcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNativeIosWrapper_qcarAddCameraFrame_m4749 (Object_t * __this /* static, unused */, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_rendererSetVideoBackgroundCfg_m4750 (Object_t * __this /* static, unused */, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_rendererGetVideoBackgroundCfg_m4751 (Object_t * __this /* static, unused */, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void VuforiaNativeIosWrapper_rendererGetVideoBackgroundTextureInfo_m4752 (Object_t * __this /* static, unused */, IntPtr_t ___texInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_rendererSetVideoBackgroundTextureID_m4753 (Object_t * __this /* static, unused */, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t VuforiaNativeIosWrapper_rendererIsVideoBackgroundTextureInfoAvailable_m4754 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererGetRecommendedFps(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_rendererGetRecommendedFps_m4755 (Object_t * __this /* static, unused */, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarInit(System.String)
extern "C" int32_t VuforiaNativeIosWrapper_qcarInit_m4756 (Object_t * __this /* static, unused */, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarSetHint(System.UInt32,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_qcarSetHint_m4757 (Object_t * __this /* static, unused */, uint32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::getProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_getProjectionGL_m4758 (Object_t * __this /* static, unused */, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::setApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void VuforiaNativeIosWrapper_setApplicationEnvironment_m4759 (Object_t * __this /* static, unused */, int32_t ___unityVersionMajor, int32_t ___unityVersionMinor, int32_t ___unityVersionChange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::setStateBufferSize(System.Int32)
extern "C" void VuforiaNativeIosWrapper_setStateBufferSize_m4760 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderStartInit(System.String,System.String)
extern "C" int32_t VuforiaNativeIosWrapper_targetFinderStartInit_m4761 (Object_t * __this /* static, unused */, String_t* ___userKey, String_t* ___secretKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderGetInitState()
extern "C" int32_t VuforiaNativeIosWrapper_targetFinderGetInitState_m4762 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderDeinit()
extern "C" int32_t VuforiaNativeIosWrapper_targetFinderDeinit_m4763 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderStartRecognition()
extern "C" int32_t VuforiaNativeIosWrapper_targetFinderStartRecognition_m4764 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderStop()
extern "C" int32_t VuforiaNativeIosWrapper_targetFinderStop_m4765 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNativeIosWrapper_targetFinderSetUIScanlineColor_m4766 (Object_t * __this /* static, unused */, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void VuforiaNativeIosWrapper_targetFinderSetUIPointColor_m4767 (Object_t * __this /* static, unused */, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderUpdate(System.IntPtr,System.Int32)
extern "C" void VuforiaNativeIosWrapper_targetFinderUpdate_m4768 (Object_t * __this /* static, unused */, IntPtr_t ___targetFinderState, int32_t ___filterMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_targetFinderGetResults_m4769 (Object_t * __this /* static, unused */, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_targetFinderEnableTracking_m4770 (Object_t * __this /* static, unused */, IntPtr_t ___searchResult, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void VuforiaNativeIosWrapper_targetFinderGetImageTargets_m4771 (Object_t * __this /* static, unused */, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderClearTrackables()
extern "C" void VuforiaNativeIosWrapper_targetFinderClearTrackables_m4772 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::textTrackerStart()
extern "C" int32_t VuforiaNativeIosWrapper_textTrackerStart_m4773 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::textTrackerStop()
extern "C" void VuforiaNativeIosWrapper_textTrackerStop_m4774 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::textTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_textTrackerSetRegionOfInterest_m4775 (Object_t * __this /* static, unused */, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::textTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_textTrackerGetRegionOfInterest_m4776 (Object_t * __this /* static, unused */, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListLoadWordList(System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_wordListLoadWordList_m4777 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_wordListAddWordsFromFile_m4778 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListAddWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_wordListAddWordU_m4779 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListRemoveWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_wordListRemoveWordU_m4780 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListContainsWordU(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_wordListContainsWordU_m4781 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListUnloadAllLists()
extern "C" int32_t VuforiaNativeIosWrapper_wordListUnloadAllLists_m4782 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListSetFilterMode(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_wordListSetFilterMode_m4783 (Object_t * __this /* static, unused */, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListGetFilterMode()
extern "C" int32_t VuforiaNativeIosWrapper_wordListGetFilterMode_m4784 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_wordListAddWordToFilterListU_m4785 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_wordListRemoveWordFromFilterListU_m4786 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListClearFilterList()
extern "C" int32_t VuforiaNativeIosWrapper_wordListClearFilterList_m4787 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_wordListLoadFilterList_m4788 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListGetFilterListWordCount()
extern "C" int32_t VuforiaNativeIosWrapper_wordListGetFilterListWordCount_m4789 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::wordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t VuforiaNativeIosWrapper_wordListGetFilterListWordU_m4790 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_wordGetLetterMask_m4791 (Object_t * __this /* static, unused */, int32_t ___wordID, IntPtr_t ___letterMaskImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_wordGetLetterBoundingBoxes_m4792 (Object_t * __this /* static, unused */, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::trackerManagerInitTracker(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_trackerManagerInitTracker_m4793 (Object_t * __this /* static, unused */, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::trackerManagerDeinitTracker(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_trackerManagerDeinitTracker_m4794 (Object_t * __this /* static, unused */, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_virtualButtonSetEnabled_m4795 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_virtualButtonSetSensitivity_m4796 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_virtualButtonSetAreaRectangle_m4797 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarDeinit()
extern "C" int32_t VuforiaNativeIosWrapper_qcarDeinit_m4798 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::startExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_startExtendedTracking_m4799 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::stopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_stopExtendedTracking_m4800 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearIsDeviceDetected()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearIsDeviceDetected_m4801 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearSetHeadsetPresent(System.String)
extern "C" int32_t VuforiaNativeIosWrapper_eyewearSetHeadsetPresent_m4802 (Object_t * __this /* static, unused */, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearSetHeadsetNotPresent()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearSetHeadsetNotPresent_m4803 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearIsSeeThru()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearIsSeeThru_m4804 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearGetScreenOrientation()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearGetScreenOrientation_m4805 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearIsStereoCapable()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearIsStereoCapable_m4806 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearIsStereoEnabled()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearIsStereoEnabled_m4807 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearIsStereoGLOnly()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearIsStereoGLOnly_m4808 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearSetStereo(System.Boolean)
extern "C" int32_t VuforiaNativeIosWrapper_eyewearSetStereo_m4809 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearIsPredictiveTrackingEnabled()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearIsPredictiveTrackingEnabled_m4810 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearSetPredictiveTracking(System.Boolean)
extern "C" int32_t VuforiaNativeIosWrapper_eyewearSetPredictiveTracking_m4811 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::eyewearSetProjectionClippingPlanes(System.Single,System.Single)
extern "C" void VuforiaNativeIosWrapper_eyewearSetProjectionClippingPlanes_m4812 (Object_t * __this /* static, unused */, float ___nearPlane, float ___farPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::eyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" void VuforiaNativeIosWrapper_eyewearGetProjectionMatrix_m4813 (Object_t * __this /* static, unused */, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetMaxCount()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearCPMGetMaxCount_m4814 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetUsedCount()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearCPMGetUsedCount_m4815 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMIsProfileUsed(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_eyewearCPMIsProfileUsed_m4816 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetActiveProfile()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearCPMGetActiveProfile_m4817 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetActiveProfile(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_eyewearCPMSetActiveProfile_m4818 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_eyewearCPMGetProjectionMatrix_m4819 (Object_t * __this /* static, unused */, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_eyewearCPMSetProjectionMatrix_m4820 (Object_t * __this /* static, unused */, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t VuforiaNativeIosWrapper_eyewearCPMGetProfileName_m4821 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_eyewearCPMSetProfileName_m4822 (Object_t * __this /* static, unused */, int32_t ___profileID, IntPtr_t ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMClearProfile(System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_eyewearCPMClearProfile_m4823 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t VuforiaNativeIosWrapper_eyewearUserCalibratorInit_m4824 (Object_t * __this /* static, unused */, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorGetMinScaleHint()
extern "C" float VuforiaNativeIosWrapper_eyewearUserCalibratorGetMinScaleHint_m4825 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorGetMaxScaleHint()
extern "C" float VuforiaNativeIosWrapper_eyewearUserCalibratorGetMaxScaleHint_m4826 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorIsStereoStretched()
extern "C" int32_t VuforiaNativeIosWrapper_eyewearUserCalibratorIsStereoStretched_m4827 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t VuforiaNativeIosWrapper_eyewearUserCalibratorGetProjectionMatrix_m4828 (Object_t * __this /* static, unused */, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::.ctor()
extern "C" void VuforiaNativeIosWrapper__ctor_m4829 (VuforiaNativeIosWrapper_t918 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
