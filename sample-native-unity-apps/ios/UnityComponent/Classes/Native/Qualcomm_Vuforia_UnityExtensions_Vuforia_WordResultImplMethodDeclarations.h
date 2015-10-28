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

// Vuforia.WordResultImpl
struct WordResultImpl_t915;
// Vuforia.Word
struct Word_t916;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_OrientedBoundingBox.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"

// System.Void Vuforia.WordResultImpl::.ctor(Vuforia.Word)
extern "C" void WordResultImpl__ctor_m4481 (WordResultImpl_t915 * __this, Object_t * ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Word Vuforia.WordResultImpl::get_Word()
extern "C" Object_t * WordResultImpl_get_Word_m4482 (WordResultImpl_t915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.WordResultImpl::get_Position()
extern "C" Vector3_t130  WordResultImpl_get_Position_m4483 (WordResultImpl_t915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Vuforia.WordResultImpl::get_Orientation()
extern "C" Quaternion_t131  WordResultImpl_get_Orientation_m4484 (WordResultImpl_t915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox Vuforia.WordResultImpl::get_Obb()
extern "C" OrientedBoundingBox_t816  WordResultImpl_get_Obb_m4485 (WordResultImpl_t915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableBehaviour/Status Vuforia.WordResultImpl::get_CurrentStatus()
extern "C" int32_t WordResultImpl_get_CurrentStatus_m4486 (WordResultImpl_t915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetPose(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" void WordResultImpl_SetPose_m4487 (WordResultImpl_t915 * __this, Vector3_t130  ___position, Quaternion_t131  ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetObb(Vuforia.OrientedBoundingBox)
extern "C" void WordResultImpl_SetObb_m4488 (WordResultImpl_t915 * __this, OrientedBoundingBox_t816  ___obb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordResultImpl::SetStatus(Vuforia.TrackableBehaviour/Status)
extern "C" void WordResultImpl_SetStatus_m4489 (WordResultImpl_t915 * __this, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
