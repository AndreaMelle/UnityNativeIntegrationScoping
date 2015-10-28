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

// Vuforia.SurfaceImpl
struct SurfaceImpl_t890;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t809;
// UnityEngine.Mesh
struct Mesh_t160;
// System.Int32[]
struct Int32U5BU5D_t162;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void Vuforia.SurfaceImpl::.ctor(System.Int32,Vuforia.SmartTerrainTrackable)
extern "C" void SurfaceImpl__ctor_m4404 (SurfaceImpl_t890 * __this, int32_t ___id, Object_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetID(System.Int32)
extern "C" void SurfaceImpl_SetID_m4405 (SurfaceImpl_t890 * __this, int32_t ___trackableID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetMesh(System.Int32,UnityEngine.Mesh,UnityEngine.Mesh,System.Int32[])
extern "C" void SurfaceImpl_SetMesh_m4406 (SurfaceImpl_t890 * __this, int32_t ___meshRev, Mesh_t160 * ___mesh, Mesh_t160 * ___navMesh, Int32U5BU5D_t162* ___meshBoundaries, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetBoundingBox(UnityEngine.Rect)
extern "C" void SurfaceImpl_SetBoundingBox_m4407 (SurfaceImpl_t890 * __this, Rect_t137  ___boundingBox, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.SurfaceImpl::GetNavMesh()
extern "C" Mesh_t160 * SurfaceImpl_GetNavMesh_m4408 (SurfaceImpl_t890 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Vuforia.SurfaceImpl::GetMeshBoundaries()
extern "C" Int32U5BU5D_t162* SurfaceImpl_GetMeshBoundaries_m4409 (SurfaceImpl_t890 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.SurfaceImpl::get_BoundingBox()
extern "C" Rect_t137  SurfaceImpl_get_BoundingBox_m4410 (SurfaceImpl_t890 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.SurfaceImpl::GetArea()
extern "C" float SurfaceImpl_GetArea_m4411 (SurfaceImpl_t890 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
