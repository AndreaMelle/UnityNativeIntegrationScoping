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

// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t24;
// Vuforia.Trackable
struct Trackable_t782;
// System.String
struct String_t;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t978;
// UnityEngine.Renderer
struct Renderer_t126;
// UnityEngine.Transform
struct Transform_t27;
// UnityEngine.GameObject
struct GameObject_t26;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::get_CurrentStatus()
extern "C" int32_t TrackableBehaviour_get_CurrentStatus_m3886 (TrackableBehaviour_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.TrackableBehaviour::get_Trackable()
extern "C" Object_t * TrackableBehaviour_get_Trackable_m3887 (TrackableBehaviour_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TrackableBehaviour::get_TrackableName()
extern "C" String_t* TrackableBehaviour_get_TrackableName_m3888 (TrackableBehaviour_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::RegisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C" void TrackableBehaviour_RegisterTrackableEventHandler_m295 (TrackableBehaviour_t24 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::UnregisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C" bool TrackableBehaviour_UnregisterTrackableEventHandler_m3889 (TrackableBehaviour_t24 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnTrackerUpdate(Vuforia.TrackableBehaviour/Status)
extern "C" void TrackableBehaviour_OnTrackerUpdate_m3890 (TrackableBehaviour_t24 * __this, int32_t ___newStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnFrameIndexUpdate(System.Int32)
extern "C" void TrackableBehaviour_OnFrameIndexUpdate_m3891 (TrackableBehaviour_t24 * __this, int32_t ___newFrameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::Start()
extern "C" void TrackableBehaviour_Start_m3892 (TrackableBehaviour_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnDisable()
extern "C" void TrackableBehaviour_OnDisable_m3893 (TrackableBehaviour_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.CorrectScale()
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_CorrectScale_m3894 (TrackableBehaviour_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::CorrectScaleImpl()
extern "C" bool TrackableBehaviour_CorrectScaleImpl_m3895 (TrackableBehaviour_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetNameForTrackable(System.String)
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetNameForTrackable_m3896 (TrackableBehaviour_t24 * __this, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_PreviousScale()
extern "C" Vector3_t130  TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_PreviousScale_m3897 (TrackableBehaviour_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetPreviousScale(UnityEngine.Vector3)
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetPreviousScale_m3898 (TrackableBehaviour_t24 * __this, Vector3_t130  ___previousScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_PreserveChildSize()
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_PreserveChildSize_m3899 (TrackableBehaviour_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetPreserveChildSize(System.Boolean)
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetPreserveChildSize_m3900 (TrackableBehaviour_t24 * __this, bool ___preserveChildSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_InitializedInEditor()
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_InitializedInEditor_m3901 (TrackableBehaviour_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetInitializedInEditor(System.Boolean)
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetInitializedInEditor_m3902 (TrackableBehaviour_t24 * __this, bool ___initializedInEditor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.UnregisterTrackable()
extern "C" void TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_UnregisterTrackable_m3903 (TrackableBehaviour_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Renderer Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.GetRenderer()
extern "C" Renderer_t126 * TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_GetRenderer_m3904 (TrackableBehaviour_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::.ctor()
extern "C" void TrackableBehaviour__ctor_m3905 (TrackableBehaviour_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m3906 (TrackableBehaviour_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m3907 (TrackableBehaviour_t24 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t27 * TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m3908 (TrackableBehaviour_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t26 * TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m3909 (TrackableBehaviour_t24 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
