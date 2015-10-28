#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.Trackable
struct Trackable_t782;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ReconstructionImpl.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// Vuforia.ReconstructionFromTargetImpl
struct  ReconstructionFromTargetImpl_t800  : public ReconstructionImpl_t792
{
	// UnityEngine.Vector3 Vuforia.ReconstructionFromTargetImpl::mOccluderMin
	Vector3_t130  ___mOccluderMin_5;
	// UnityEngine.Vector3 Vuforia.ReconstructionFromTargetImpl::mOccluderMax
	Vector3_t130  ___mOccluderMax_6;
	// UnityEngine.Vector3 Vuforia.ReconstructionFromTargetImpl::mOccluderOffset
	Vector3_t130  ___mOccluderOffset_7;
	// UnityEngine.Quaternion Vuforia.ReconstructionFromTargetImpl::mOccluderRotation
	Quaternion_t131  ___mOccluderRotation_8;
	// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::mInitializationTarget
	Object_t * ___mInitializationTarget_9;
	// System.Boolean Vuforia.ReconstructionFromTargetImpl::mCanAutoSetInitializationTarget
	bool ___mCanAutoSetInitializationTarget_10;
};
