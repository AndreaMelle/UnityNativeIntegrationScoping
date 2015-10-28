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

// Vuforia.ObjectTrackerImpl
struct ObjectTrackerImpl_t842;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t826;
// Vuforia.TargetFinder
struct TargetFinder_t845;
// Vuforia.DataSet
struct DataSet_t812;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet>
struct IEnumerable_1_t982;

#include "codegen/il2cpp-codegen.h"

// Vuforia.ImageTargetBuilder Vuforia.ObjectTrackerImpl::get_ImageTargetBuilder()
extern "C" ImageTargetBuilder_t826 * ObjectTrackerImpl_get_ImageTargetBuilder_m4277 (ObjectTrackerImpl_t842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TargetFinder Vuforia.ObjectTrackerImpl::get_TargetFinder()
extern "C" TargetFinder_t845 * ObjectTrackerImpl_get_TargetFinder_m4278 (ObjectTrackerImpl_t842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::.ctor()
extern "C" void ObjectTrackerImpl__ctor_m4279 (ObjectTrackerImpl_t842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::Start()
extern "C" bool ObjectTrackerImpl_Start_m4280 (ObjectTrackerImpl_t842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::Stop()
extern "C" void ObjectTrackerImpl_Stop_m4281 (ObjectTrackerImpl_t842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSet Vuforia.ObjectTrackerImpl::CreateDataSet()
extern "C" DataSet_t812 * ObjectTrackerImpl_CreateDataSet_m4282 (ObjectTrackerImpl_t842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::DestroyDataSet(Vuforia.DataSet,System.Boolean)
extern "C" bool ObjectTrackerImpl_DestroyDataSet_m4283 (ObjectTrackerImpl_t842 * __this, DataSet_t812 * ___dataSet, bool ___destroyTrackables, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::ActivateDataSet(Vuforia.DataSet)
extern "C" bool ObjectTrackerImpl_ActivateDataSet_m4284 (ObjectTrackerImpl_t842 * __this, DataSet_t812 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::DeactivateDataSet(Vuforia.DataSet)
extern "C" bool ObjectTrackerImpl_DeactivateDataSet_m4285 (ObjectTrackerImpl_t842 * __this, DataSet_t812 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::GetActiveDataSets()
extern "C" Object_t* ObjectTrackerImpl_GetActiveDataSets_m4286 (ObjectTrackerImpl_t842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::GetDataSets()
extern "C" Object_t* ObjectTrackerImpl_GetDataSets_m4287 (ObjectTrackerImpl_t842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTrackerImpl::DestroyAllDataSets(System.Boolean)
extern "C" void ObjectTrackerImpl_DestroyAllDataSets_m4288 (ObjectTrackerImpl_t842 * __this, bool ___destroyTrackables, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::PersistExtendedTracking(System.Boolean)
extern "C" bool ObjectTrackerImpl_PersistExtendedTracking_m4289 (ObjectTrackerImpl_t842 * __this, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTrackerImpl::ResetExtendedTracking()
extern "C" bool ObjectTrackerImpl_ResetExtendedTracking_m4290 (ObjectTrackerImpl_t842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
