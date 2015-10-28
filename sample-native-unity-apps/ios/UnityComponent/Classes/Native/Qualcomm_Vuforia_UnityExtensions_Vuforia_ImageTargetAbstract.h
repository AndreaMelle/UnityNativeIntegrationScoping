#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ImageTarget
struct ImageTarget_t951;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour>
struct Dictionary_2_t956;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_DataSetTrackableBeh.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ImageTargetType.h"

// Vuforia.ImageTargetAbstractBehaviour
struct  ImageTargetAbstractBehaviour_t56  : public DataSetTrackableBehaviour_t783
{
	// System.Single Vuforia.ImageTargetAbstractBehaviour::mAspectRatio
	float ___mAspectRatio_20;
	// Vuforia.ImageTargetType Vuforia.ImageTargetAbstractBehaviour::mImageTargetType
	int32_t ___mImageTargetType_21;
	// Vuforia.ImageTarget Vuforia.ImageTargetAbstractBehaviour::mImageTarget
	Object_t * ___mImageTarget_22;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButtonAbstractBehaviour> Vuforia.ImageTargetAbstractBehaviour::mVirtualButtonBehaviours
	Dictionary_2_t956 * ___mVirtualButtonBehaviours_23;
};
