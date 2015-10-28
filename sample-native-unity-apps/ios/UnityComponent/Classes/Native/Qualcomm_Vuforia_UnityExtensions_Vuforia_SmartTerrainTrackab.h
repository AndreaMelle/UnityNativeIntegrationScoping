#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t809;
// UnityEngine.MeshFilter
struct MeshFilter_t153;
// UnityEngine.MeshCollider
struct MeshCollider_t576;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour.h"

// Vuforia.SmartTerrainTrackableBehaviour
struct  SmartTerrainTrackableBehaviour_t808  : public TrackableBehaviour_t24
{
	// Vuforia.SmartTerrainTrackable Vuforia.SmartTerrainTrackableBehaviour::mSmartTerrainTrackable
	Object_t * ___mSmartTerrainTrackable_9;
	// System.Boolean Vuforia.SmartTerrainTrackableBehaviour::mDisableAutomaticUpdates
	bool ___mDisableAutomaticUpdates_10;
	// UnityEngine.MeshFilter Vuforia.SmartTerrainTrackableBehaviour::mMeshFilterToUpdate
	MeshFilter_t153 * ___mMeshFilterToUpdate_11;
	// UnityEngine.MeshCollider Vuforia.SmartTerrainTrackableBehaviour::mMeshColliderToUpdate
	MeshCollider_t576 * ___mMeshColliderToUpdate_12;
};
