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

// Vuforia.ReconstructionFromTargetImpl
struct ReconstructionFromTargetImpl_t800;
// Vuforia.CylinderTarget
struct CylinderTarget_t810;
// Vuforia.ImageTarget
struct ImageTarget_t951;
// Vuforia.MultiTarget
struct MultiTarget_t958;
// Vuforia.Trackable
struct Trackable_t782;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void Vuforia.ReconstructionFromTargetImpl::.ctor(System.IntPtr)
extern "C" void ReconstructionFromTargetImpl__ctor_m4041 (ReconstructionFromTargetImpl_t800 * __this, IntPtr_t ___nativeReconstructionPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.CylinderTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m4042 (ReconstructionFromTargetImpl_t800 * __this, Object_t * ___cylinderTarget, Vector3_t130  ___occluderMin, Vector3_t130  ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.CylinderTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m4043 (ReconstructionFromTargetImpl_t800 * __this, Object_t * ___cylinderTarget, Vector3_t130  ___occluderMin, Vector3_t130  ___occluderMax, Vector3_t130  ___offsetToOccluderOrigin, Quaternion_t131  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.ImageTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m4044 (ReconstructionFromTargetImpl_t800 * __this, Object_t * ___imageTarget, Vector3_t130  ___occluderMin, Vector3_t130  ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.ImageTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m4045 (ReconstructionFromTargetImpl_t800 * __this, Object_t * ___imageTarget, Vector3_t130  ___occluderMin, Vector3_t130  ___occluderMax, Vector3_t130  ___offsetToOccluderOrigin, Quaternion_t131  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.MultiTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m4046 (ReconstructionFromTargetImpl_t800 * __this, Object_t * ___multiTarget, Vector3_t130  ___occluderMin, Vector3_t130  ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.MultiTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m4047 (ReconstructionFromTargetImpl_t800 * __this, Object_t * ___multiTarget, Vector3_t130  ___occluderMin, Vector3_t130  ___occluderMax, Vector3_t130  ___offsetToOccluderOrigin, Quaternion_t131  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::GetInitializationTarget(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Object_t * ReconstructionFromTargetImpl_GetInitializationTarget_m4048 (ReconstructionFromTargetImpl_t800 * __this, Vector3_t130 * ___occluderMin, Vector3_t130 * ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::GetInitializationTarget(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" Object_t * ReconstructionFromTargetImpl_GetInitializationTarget_m4049 (ReconstructionFromTargetImpl_t800 * __this, Vector3_t130 * ___occluderMin, Vector3_t130 * ___occluderMax, Vector3_t130 * ___offsetToOccluderOrigin, Quaternion_t131 * ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::Reset()
extern "C" bool ReconstructionFromTargetImpl_Reset_m4050 (ReconstructionFromTargetImpl_t800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::Start()
extern "C" bool ReconstructionFromTargetImpl_Start_m4051 (ReconstructionFromTargetImpl_t800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(System.IntPtr,Vuforia.Trackable,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m4052 (ReconstructionFromTargetImpl_t800 * __this, IntPtr_t ___datasetPtr, Object_t * ___trackable, Vector3_t130  ___occluderMin, Vector3_t130  ___occluderMax, Vector3_t130  ___offsetToOccluderOrigin, Quaternion_t131  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::get_CanAutoSetInitializationTarget()
extern "C" bool ReconstructionFromTargetImpl_get_CanAutoSetInitializationTarget_m4053 (ReconstructionFromTargetImpl_t800 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionFromTargetImpl::set_CanAutoSetInitializationTarget(System.Boolean)
extern "C" void ReconstructionFromTargetImpl_set_CanAutoSetInitializationTarget_m4054 (ReconstructionFromTargetImpl_t800 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
