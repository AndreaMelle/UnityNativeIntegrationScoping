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

// Vuforia.SmartTerrainBuilderImpl
struct SmartTerrainBuilderImpl_t891;
// System.Collections.Generic.IEnumerable`1<Vuforia.ReconstructionAbstractBehaviour>
struct IEnumerable_1_t988;
// Vuforia.ReconstructionAbstractBehaviour
struct ReconstructionAbstractBehaviour_t72;
// Vuforia.Reconstruction
struct Reconstruction_t930;
// Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[]
struct SmartTerrainRevisionDataU5BU5D_t985;
// Vuforia.VuforiaManagerImpl/SurfaceData[]
struct SurfaceDataU5BU5D_t986;
// Vuforia.VuforiaManagerImpl/PropData[]
struct PropDataU5BU5D_t987;

#include "codegen/il2cpp-codegen.h"

// System.Boolean Vuforia.SmartTerrainBuilderImpl::Init()
extern "C" bool SmartTerrainBuilderImpl_Init_m4412 (SmartTerrainBuilderImpl_t891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::Deinit()
extern "C" bool SmartTerrainBuilderImpl_Deinit_m4413 (SmartTerrainBuilderImpl_t891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.ReconstructionAbstractBehaviour> Vuforia.SmartTerrainBuilderImpl::GetReconstructions()
extern "C" Object_t* SmartTerrainBuilderImpl_GetReconstructions_m4414 (SmartTerrainBuilderImpl_t891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::AddReconstruction(Vuforia.ReconstructionAbstractBehaviour)
extern "C" bool SmartTerrainBuilderImpl_AddReconstruction_m4415 (SmartTerrainBuilderImpl_t891 * __this, ReconstructionAbstractBehaviour_t72 * ___reconstructionBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::RemoveReconstruction(Vuforia.ReconstructionAbstractBehaviour)
extern "C" bool SmartTerrainBuilderImpl_RemoveReconstruction_m4416 (SmartTerrainBuilderImpl_t891 * __this, ReconstructionAbstractBehaviour_t72 * ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::DestroyReconstruction(Vuforia.Reconstruction)
extern "C" bool SmartTerrainBuilderImpl_DestroyReconstruction_m4417 (SmartTerrainBuilderImpl_t891 * __this, Object_t * ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainBuilderImpl::UpdateSmartTerrainData(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/SurfaceData[],Vuforia.VuforiaManagerImpl/PropData[])
extern "C" void SmartTerrainBuilderImpl_UpdateSmartTerrainData_m4418 (SmartTerrainBuilderImpl_t891 * __this, SmartTerrainRevisionDataU5BU5D_t985* ___smartTerrainRevisions, SurfaceDataU5BU5D_t986* ___updatedSurfaces, PropDataU5BU5D_t987* ___updatedProps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainBuilderImpl::.ctor()
extern "C" void SmartTerrainBuilderImpl__ctor_m4419 (SmartTerrainBuilderImpl_t891 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
