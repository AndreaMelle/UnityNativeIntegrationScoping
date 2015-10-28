#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Vuforia.DataSetImpl>
struct List_1_t843;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_t844;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t826;
// Vuforia.TargetFinder
struct TargetFinder_t845;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_ObjectTracker.h"

// Vuforia.ObjectTrackerImpl
struct  ObjectTrackerImpl_t842  : public ObjectTracker_t790
{
	// System.Collections.Generic.List`1<Vuforia.DataSetImpl> Vuforia.ObjectTrackerImpl::mActiveDataSets
	List_1_t843 * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.ObjectTrackerImpl::mDataSets
	List_1_t844 * ___mDataSets_2;
	// Vuforia.ImageTargetBuilder Vuforia.ObjectTrackerImpl::mImageTargetBuilder
	ImageTargetBuilder_t826 * ___mImageTargetBuilder_3;
	// Vuforia.TargetFinder Vuforia.ObjectTrackerImpl::mTargetFinder
	TargetFinder_t845 * ___mTargetFinder_4;
};
