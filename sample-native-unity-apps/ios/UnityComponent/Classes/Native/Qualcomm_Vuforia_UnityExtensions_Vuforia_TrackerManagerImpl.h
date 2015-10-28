#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ObjectTracker
struct ObjectTracker_t790;
// Vuforia.MarkerTracker
struct MarkerTracker_t847;
// Vuforia.TextTracker
struct TextTracker_t896;
// Vuforia.SmartTerrainTracker
struct SmartTerrainTracker_t894;
// Vuforia.StateManager
struct StateManager_t931;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackerManager.h"

// Vuforia.TrackerManagerImpl
struct  TrackerManagerImpl_t947  : public TrackerManager_t946
{
	// Vuforia.ObjectTracker Vuforia.TrackerManagerImpl::mObjectTracker
	ObjectTracker_t790 * ___mObjectTracker_1;
	// Vuforia.MarkerTracker Vuforia.TrackerManagerImpl::mMarkerTracker
	MarkerTracker_t847 * ___mMarkerTracker_2;
	// Vuforia.TextTracker Vuforia.TrackerManagerImpl::mTextTracker
	TextTracker_t896 * ___mTextTracker_3;
	// Vuforia.SmartTerrainTracker Vuforia.TrackerManagerImpl::mSmartTerrainTracker
	SmartTerrainTracker_t894 * ___mSmartTerrainTracker_4;
	// Vuforia.StateManager Vuforia.TrackerManagerImpl::mStateManager
	StateManager_t931 * ___mStateManager_5;
};
