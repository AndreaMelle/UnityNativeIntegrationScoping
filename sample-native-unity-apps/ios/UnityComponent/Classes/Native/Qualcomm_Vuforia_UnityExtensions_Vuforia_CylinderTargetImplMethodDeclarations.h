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

// Vuforia.CylinderTargetImpl
struct CylinderTargetImpl_t822;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t812;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Vuforia.CylinderTargetImpl::.ctor(System.String,System.Int32,Vuforia.DataSet)
extern "C" void CylinderTargetImpl__ctor_m4180 (CylinderTargetImpl_t822 * __this, String_t* ___name, int32_t ___id, DataSet_t812 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetImpl::SetSize(UnityEngine.Vector3)
extern "C" void CylinderTargetImpl_SetSize_m4181 (CylinderTargetImpl_t822 * __this, Vector3_t130  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetImpl::GetSideLength()
extern "C" float CylinderTargetImpl_GetSideLength_m4182 (CylinderTargetImpl_t822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetImpl::GetTopDiameter()
extern "C" float CylinderTargetImpl_GetTopDiameter_m4183 (CylinderTargetImpl_t822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetImpl::GetBottomDiameter()
extern "C" float CylinderTargetImpl_GetBottomDiameter_m4184 (CylinderTargetImpl_t822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetImpl::SetSideLength(System.Single)
extern "C" bool CylinderTargetImpl_SetSideLength_m4185 (CylinderTargetImpl_t822 * __this, float ___sideLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetImpl::SetTopDiameter(System.Single)
extern "C" bool CylinderTargetImpl_SetTopDiameter_m4186 (CylinderTargetImpl_t822 * __this, float ___topDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetImpl::SetBottomDiameter(System.Single)
extern "C" bool CylinderTargetImpl_SetBottomDiameter_m4187 (CylinderTargetImpl_t822 * __this, float ___bottomDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetImpl::ScaleCylinder(System.Single)
extern "C" void CylinderTargetImpl_ScaleCylinder_m4188 (CylinderTargetImpl_t822 * __this, float ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
