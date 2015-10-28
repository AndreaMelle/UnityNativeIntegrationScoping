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

// System.String
struct String_t;
// Vuforia.VuforiaRuntimeUtilities
struct VuforiaRuntimeUtilities_t151;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vec.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_OrientedBoundingBox.h"

// System.String Vuforia.VuforiaRuntimeUtilities::StripFileNameFromPath(System.String)
extern "C" String_t* VuforiaRuntimeUtilities_StripFileNameFromPath_m5631 (Object_t * __this /* static, unused */, String_t* ___fullPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaRuntimeUtilities::StripStreamingAssetsFromPath(System.String)
extern "C" String_t* VuforiaRuntimeUtilities_StripStreamingAssetsFromPath_m5632 (Object_t * __this /* static, unused */, String_t* ___fullPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuforiaRuntimeUtilities::StripExtensionFromPath(System.String)
extern "C" String_t* VuforiaRuntimeUtilities_StripExtensionFromPath_m5633 (Object_t * __this /* static, unused */, String_t* ___fullPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.VuforiaRuntimeUtilities::get_ScreenOrientation()
extern "C" int32_t VuforiaRuntimeUtilities_get_ScreenOrientation_m5634 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::get_IsLandscapeOrientation()
extern "C" bool VuforiaRuntimeUtilities_get_IsLandscapeOrientation_m5635 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::get_IsPortraitOrientation()
extern "C" bool VuforiaRuntimeUtilities_get_IsPortraitOrientation_m5636 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::ForceDisableTrackables()
extern "C" void VuforiaRuntimeUtilities_ForceDisableTrackables_m5637 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsPlayMode()
extern "C" bool VuforiaRuntimeUtilities_IsPlayMode_m422 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRuntimeUtilities::IsVuforiaEnabled()
extern "C" bool VuforiaRuntimeUtilities_IsVuforiaEnabled_m396 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRuntimeUtilities::ScreenSpaceToCameraFrameCoordinates(UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C" Vec2I_t883  VuforiaRuntimeUtilities_ScreenSpaceToCameraFrameCoordinates_m5638 (Object_t * __this /* static, unused */, Vector2_t211  ___screenSpaceCoordinate, Rect_t137  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t788  ___videoModeData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.VuforiaRuntimeUtilities::CameraFrameToScreenSpaceCoordinates(UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C" Vector2_t211  VuforiaRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m5639 (Object_t * __this /* static, unused */, Vector2_t211  ___cameraFrameCoordinate, Rect_t137  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t788  ___videoModeData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox Vuforia.VuforiaRuntimeUtilities::CameraFrameToScreenSpaceCoordinates(Vuforia.OrientedBoundingBox,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C" OrientedBoundingBox_t816  VuforiaRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m5640 (Object_t * __this /* static, unused */, OrientedBoundingBox_t816  ___cameraFrameObb, Rect_t137  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t788  ___videoModeData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::SelectRectTopLeftAndBottomRightForLandscapeLeft(UnityEngine.Rect,System.Boolean,UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C" void VuforiaRuntimeUtilities_SelectRectTopLeftAndBottomRightForLandscapeLeft_m5641 (Object_t * __this /* static, unused */, Rect_t137  ___screenSpaceRect, bool ___isMirrored, Vector2_t211 * ___topLeft, Vector2_t211 * ___bottomRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.VuforiaRuntimeUtilities::CalculateRectFromLandscapeLeftCorners(UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" Rect_t137  VuforiaRuntimeUtilities_CalculateRectFromLandscapeLeftCorners_m5642 (Object_t * __this /* static, unused */, Vector2_t211  ___topLeft, Vector2_t211  ___bottomRight, bool ___isMirrored, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::DisableSleepMode()
extern "C" void VuforiaRuntimeUtilities_DisableSleepMode_m5643 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::ResetSleepMode()
extern "C" void VuforiaRuntimeUtilities_ResetSleepMode_m5644 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::PrepareCoordinateConversion(System.Boolean,System.Single&,System.Single&,System.Single&,System.Single&,System.Boolean&)
extern "C" void VuforiaRuntimeUtilities_PrepareCoordinateConversion_m5645 (Object_t * __this /* static, unused */, bool ___isTextureMirrored, float* ___prefixX, float* ___prefixY, float* ___inversionMultiplierX, float* ___inversionMultiplierY, bool* ___isPortrait, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::.ctor()
extern "C" void VuforiaRuntimeUtilities__ctor_m5646 (VuforiaRuntimeUtilities_t151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRuntimeUtilities::.cctor()
extern "C" void VuforiaRuntimeUtilities__cctor_m5647 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
