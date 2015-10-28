#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.Prop
struct Prop_t105;
// UnityEngine.BoxCollider
struct BoxCollider_t575;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_SmartTerrainTrackab.h"

// Vuforia.PropAbstractBehaviour
struct  PropAbstractBehaviour_t71  : public SmartTerrainTrackableBehaviour_t808
{
	// Vuforia.Prop Vuforia.PropAbstractBehaviour::mProp
	Object_t * ___mProp_13;
	// UnityEngine.BoxCollider Vuforia.PropAbstractBehaviour::mBoxColliderToUpdate
	BoxCollider_t575 * ___mBoxColliderToUpdate_14;
};
