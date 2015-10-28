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

// Vuforia.ObjectTargetImpl
struct ObjectTargetImpl_t796;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t812;
// Vuforia.DataSetImpl
struct DataSetImpl_t797;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Vuforia.ObjectTargetImpl::.ctor(System.String,System.Int32,Vuforia.DataSet)
extern "C" void ObjectTargetImpl__ctor_m4015 (ObjectTargetImpl_t796 * __this, String_t* ___name, int32_t ___id, DataSet_t812 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.ObjectTargetImpl::GetSize()
extern "C" Vector3_t130  ObjectTargetImpl_GetSize_m4016 (ObjectTargetImpl_t796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetImpl::SetSize(UnityEngine.Vector3)
extern "C" void ObjectTargetImpl_SetSize_m4017 (ObjectTargetImpl_t796 * __this, Vector3_t130  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetImpl::StartExtendedTracking()
extern "C" bool ObjectTargetImpl_StartExtendedTracking_m4018 (ObjectTargetImpl_t796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetImpl::StopExtendedTracking()
extern "C" bool ObjectTargetImpl_StopExtendedTracking_m4019 (ObjectTargetImpl_t796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSetImpl Vuforia.ObjectTargetImpl::get_DataSet()
extern "C" DataSetImpl_t797 * ObjectTargetImpl_get_DataSet_m4020 (ObjectTargetImpl_t796 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
