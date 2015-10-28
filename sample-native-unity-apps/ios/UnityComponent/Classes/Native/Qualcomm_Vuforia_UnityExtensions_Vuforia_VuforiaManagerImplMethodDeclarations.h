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

// Vuforia.VuforiaManagerImpl
struct VuforiaManagerImpl_t874;
// Vuforia.WorldCenterTrackableBehaviour
struct WorldCenterTrackableBehaviour_t879;
// UnityEngine.Transform
struct Transform_t27;
// Vuforia.StateManagerImpl
struct StateManagerImpl_t932;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaAbstractBeha_0.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__11.h"

// System.Void Vuforia.VuforiaManagerImpl::set_WorldCenterMode(Vuforia.VuforiaAbstractBehaviour/WorldCenterMode)
extern "C" void VuforiaManagerImpl_set_WorldCenterMode_m4334 (VuforiaManagerImpl_t874 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaAbstractBehaviour/WorldCenterMode Vuforia.VuforiaManagerImpl::get_WorldCenterMode()
extern "C" int32_t VuforiaManagerImpl_get_WorldCenterMode_m4335 (VuforiaManagerImpl_t874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_WorldCenter(Vuforia.WorldCenterTrackableBehaviour)
extern "C" void VuforiaManagerImpl_set_WorldCenter_m4336 (VuforiaManagerImpl_t874 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WorldCenterTrackableBehaviour Vuforia.VuforiaManagerImpl::get_WorldCenter()
extern "C" Object_t * VuforiaManagerImpl_get_WorldCenter_m4337 (VuforiaManagerImpl_t874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_ARCameraTransform(UnityEngine.Transform)
extern "C" void VuforiaManagerImpl_set_ARCameraTransform_m4338 (VuforiaManagerImpl_t874 * __this, Transform_t27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_ARCameraTransform()
extern "C" Transform_t27 * VuforiaManagerImpl_get_ARCameraTransform_m4339 (VuforiaManagerImpl_t874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_CentralAnchorPoint(UnityEngine.Transform)
extern "C" void VuforiaManagerImpl_set_CentralAnchorPoint_m4340 (VuforiaManagerImpl_t874 * __this, Transform_t27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_CentralAnchorPoint()
extern "C" Transform_t27 * VuforiaManagerImpl_get_CentralAnchorPoint_m4341 (VuforiaManagerImpl_t874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_ParentAnchorPoint(UnityEngine.Transform)
extern "C" void VuforiaManagerImpl_set_ParentAnchorPoint_m4342 (VuforiaManagerImpl_t874 * __this, Transform_t27 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.VuforiaManagerImpl::get_ParentAnchorPoint()
extern "C" Transform_t27 * VuforiaManagerImpl_get_ParentAnchorPoint_m4343 (VuforiaManagerImpl_t874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::get_Initialized()
extern "C" bool VuforiaManagerImpl_get_Initialized_m4344 (VuforiaManagerImpl_t874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaManagerImpl::get_CurrentFrameIndex()
extern "C" int32_t VuforiaManagerImpl_get_CurrentFrameIndex_m4345 (VuforiaManagerImpl_t874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::set_VideoBackgroundTextureSet(System.Boolean)
extern "C" void VuforiaManagerImpl_set_VideoBackgroundTextureSet_m4346 (VuforiaManagerImpl_t874 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::get_VideoBackgroundTextureSet()
extern "C" bool VuforiaManagerImpl_get_VideoBackgroundTextureSet_m4347 (VuforiaManagerImpl_t874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::Init()
extern "C" bool VuforiaManagerImpl_Init_m4348 (VuforiaManagerImpl_t874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::Deinit()
extern "C" void VuforiaManagerImpl_Deinit_m4349 (VuforiaManagerImpl_t874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaManagerImpl::Update(UnityEngine.ScreenOrientation,System.Boolean)
extern "C" bool VuforiaManagerImpl_Update_m4350 (VuforiaManagerImpl_t874 * __this, int32_t ___counterRotation, bool ___reapplyOldState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::StartRendering()
extern "C" void VuforiaManagerImpl_StartRendering_m4351 (VuforiaManagerImpl_t874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::FinishRendering()
extern "C" void VuforiaManagerImpl_FinishRendering_m4352 (VuforiaManagerImpl_t874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::Pause(System.Boolean)
extern "C" void VuforiaManagerImpl_Pause_m4353 (VuforiaManagerImpl_t874 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::SetStatesToDiscard()
extern "C" void VuforiaManagerImpl_SetStatesToDiscard_m4354 (VuforiaManagerImpl_t874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::InitializeTrackableContainer(System.Int32)
extern "C" void VuforiaManagerImpl_InitializeTrackableContainer_m4355 (VuforiaManagerImpl_t874 * __this, int32_t ___numTrackableResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateTrackers(Vuforia.VuforiaManagerImpl/FrameState)
extern "C" void VuforiaManagerImpl_UpdateTrackers_m4356 (VuforiaManagerImpl_t874 * __this, FrameState_t871  ___frameState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateSmartTerrain(Vuforia.VuforiaManagerImpl/FrameState,Vuforia.StateManagerImpl)
extern "C" void VuforiaManagerImpl_UpdateSmartTerrain_m4357 (VuforiaManagerImpl_t874 * __this, FrameState_t871  ___frameState, StateManagerImpl_t932 * ___stateManager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateTrackablesEditor()
extern "C" void VuforiaManagerImpl_UpdateTrackablesEditor_m4358 (VuforiaManagerImpl_t874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateWordTrackables(Vuforia.VuforiaManagerImpl/FrameState)
extern "C" void VuforiaManagerImpl_UpdateWordTrackables_m4359 (VuforiaManagerImpl_t874 * __this, FrameState_t871  ___frameState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateImageContainer()
extern "C" void VuforiaManagerImpl_UpdateImageContainer_m4360 (VuforiaManagerImpl_t874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::UpdateCameraFrame()
extern "C" void VuforiaManagerImpl_UpdateCameraFrame_m4361 (VuforiaManagerImpl_t874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::InjectCameraFrame()
extern "C" void VuforiaManagerImpl_InjectCameraFrame_m4362 (VuforiaManagerImpl_t874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaManagerImpl::.ctor()
extern "C" void VuforiaManagerImpl__ctor_m4363 (VuforiaManagerImpl_t874 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
