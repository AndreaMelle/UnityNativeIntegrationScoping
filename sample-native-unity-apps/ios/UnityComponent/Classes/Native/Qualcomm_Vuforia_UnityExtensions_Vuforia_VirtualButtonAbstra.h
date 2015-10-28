#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t26;
// System.Collections.Generic.List`1<Vuforia.IVirtualButtonEventHandler>
struct List_1_t973;
// Vuforia.VirtualButton
struct VirtualButton_t949;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VirtualButton_Sensi.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// Vuforia.VirtualButtonAbstractBehaviour
struct  VirtualButtonAbstractBehaviour_t90  : public MonoBehaviour_t21
{
	// System.String Vuforia.VirtualButtonAbstractBehaviour::mName
	String_t* ___mName_3;
	// Vuforia.VirtualButton/Sensitivity Vuforia.VirtualButtonAbstractBehaviour::mSensitivity
	int32_t ___mSensitivity_4;
	// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::mHasUpdatedPose
	bool ___mHasUpdatedPose_5;
	// UnityEngine.Matrix4x4 Vuforia.VirtualButtonAbstractBehaviour::mPrevTransform
	Matrix4x4_t164  ___mPrevTransform_6;
	// UnityEngine.GameObject Vuforia.VirtualButtonAbstractBehaviour::mPrevParent
	GameObject_t26 * ___mPrevParent_7;
	// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::mSensitivityDirty
	bool ___mSensitivityDirty_8;
	// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::mPreviouslyEnabled
	bool ___mPreviouslyEnabled_9;
	// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::mPressed
	bool ___mPressed_10;
	// System.Collections.Generic.List`1<Vuforia.IVirtualButtonEventHandler> Vuforia.VirtualButtonAbstractBehaviour::mHandlers
	List_1_t973 * ___mHandlers_11;
	// UnityEngine.Vector2 Vuforia.VirtualButtonAbstractBehaviour::mLeftTop
	Vector2_t211  ___mLeftTop_12;
	// UnityEngine.Vector2 Vuforia.VirtualButtonAbstractBehaviour::mRightBottom
	Vector2_t211  ___mRightBottom_13;
	// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::mUnregisterOnDestroy
	bool ___mUnregisterOnDestroy_14;
	// Vuforia.VirtualButton Vuforia.VirtualButtonAbstractBehaviour::mVirtualButton
	VirtualButton_t949 * ___mVirtualButton_15;
};
