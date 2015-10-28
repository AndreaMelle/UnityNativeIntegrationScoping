﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.KeepAliveAbstractBehaviour
struct KeepAliveAbstractBehaviour_t62;
// System.Collections.Generic.List`1<Vuforia.ILoadLevelEventHandler>
struct List_1_t923;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Vuforia.KeepAliveAbstractBehaviour
struct  KeepAliveAbstractBehaviour_t62  : public MonoBehaviour_t21
{
	// System.Boolean Vuforia.KeepAliveAbstractBehaviour::mKeepARCameraAlive
	bool ___mKeepARCameraAlive_2;
	// System.Boolean Vuforia.KeepAliveAbstractBehaviour::mKeepTrackableBehavioursAlive
	bool ___mKeepTrackableBehavioursAlive_3;
	// System.Boolean Vuforia.KeepAliveAbstractBehaviour::mKeepTextRecoBehaviourAlive
	bool ___mKeepTextRecoBehaviourAlive_4;
	// System.Boolean Vuforia.KeepAliveAbstractBehaviour::mKeepUDTBuildingBehaviourAlive
	bool ___mKeepUDTBuildingBehaviourAlive_5;
	// System.Boolean Vuforia.KeepAliveAbstractBehaviour::mKeepCloudRecoBehaviourAlive
	bool ___mKeepCloudRecoBehaviourAlive_6;
	// System.Boolean Vuforia.KeepAliveAbstractBehaviour::mKeepSmartTerrainAlive
	bool ___mKeepSmartTerrainAlive_7;
	// System.Collections.Generic.List`1<Vuforia.ILoadLevelEventHandler> Vuforia.KeepAliveAbstractBehaviour::mHandlers
	List_1_t923 * ___mHandlers_9;
};
struct KeepAliveAbstractBehaviour_t62_StaticFields{
	// Vuforia.KeepAliveAbstractBehaviour Vuforia.KeepAliveAbstractBehaviour::sKeepAliveBehaviour
	KeepAliveAbstractBehaviour_t62 * ___sKeepAliveBehaviour_8;
};
