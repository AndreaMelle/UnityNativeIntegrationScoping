#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.DataSetImpl
struct DataSetImpl_t797;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableImpl.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.ObjectTargetImpl
struct  ObjectTargetImpl_t796  : public TrackableImpl_t795
{
	// UnityEngine.Vector3 Vuforia.ObjectTargetImpl::mSize
	Vector3_t130  ___mSize_2;
	// Vuforia.DataSetImpl Vuforia.ObjectTargetImpl::mDataSet
	DataSetImpl_t797 * ___mDataSet_3;
};
