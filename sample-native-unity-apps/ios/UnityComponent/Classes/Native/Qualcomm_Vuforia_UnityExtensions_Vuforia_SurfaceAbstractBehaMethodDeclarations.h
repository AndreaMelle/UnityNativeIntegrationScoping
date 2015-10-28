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

// Vuforia.SurfaceAbstractBehaviour
struct SurfaceAbstractBehaviour_t77;
// Vuforia.Surface
struct Surface_t106;
// UnityEngine.MeshFilter
struct MeshFilter_t153;
// UnityEngine.MeshCollider
struct MeshCollider_t576;
// UnityEngine.Transform
struct Transform_t27;
// UnityEngine.GameObject
struct GameObject_t26;

#include "codegen/il2cpp-codegen.h"

// Vuforia.Surface Vuforia.SurfaceAbstractBehaviour::get_Surface()
extern "C" Object_t * SurfaceAbstractBehaviour_get_Surface_m4104 (SurfaceAbstractBehaviour_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void SurfaceAbstractBehaviour_InternalUnregisterTrackable_m4105 (SurfaceAbstractBehaviour_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorSurfaceBehaviour.InitializeSurface(Vuforia.Surface)
extern "C" void SurfaceAbstractBehaviour_Vuforia_IEditorSurfaceBehaviour_InitializeSurface_m4106 (SurfaceAbstractBehaviour_t77 * __this, Object_t * ___surface, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorSurfaceBehaviour.SetMeshFilterToUpdate(UnityEngine.MeshFilter)
extern "C" void SurfaceAbstractBehaviour_Vuforia_IEditorSurfaceBehaviour_SetMeshFilterToUpdate_m4107 (SurfaceAbstractBehaviour_t77 * __this, MeshFilter_t153 * ___meshFilterToUpdate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshFilter Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorSurfaceBehaviour.get_MeshFilterToUpdate()
extern "C" MeshFilter_t153 * SurfaceAbstractBehaviour_Vuforia_IEditorSurfaceBehaviour_get_MeshFilterToUpdate_m4108 (SurfaceAbstractBehaviour_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorSurfaceBehaviour.SetMeshColliderToUpdate(UnityEngine.MeshCollider)
extern "C" void SurfaceAbstractBehaviour_Vuforia_IEditorSurfaceBehaviour_SetMeshColliderToUpdate_m4109 (SurfaceAbstractBehaviour_t77 * __this, MeshCollider_t576 * ___meshColliderToUpdate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshCollider Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorSurfaceBehaviour.get_MeshColliderToUpdate()
extern "C" MeshCollider_t576 * SurfaceAbstractBehaviour_Vuforia_IEditorSurfaceBehaviour_get_MeshColliderToUpdate_m4110 (SurfaceAbstractBehaviour_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::.ctor()
extern "C" void SurfaceAbstractBehaviour__ctor_m407 (SurfaceAbstractBehaviour_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool SurfaceAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m4111 (SurfaceAbstractBehaviour_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void SurfaceAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m4112 (SurfaceAbstractBehaviour_t77 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t27 * SurfaceAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m4113 (SurfaceAbstractBehaviour_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.SurfaceAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t26 * SurfaceAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m4114 (SurfaceAbstractBehaviour_t77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
