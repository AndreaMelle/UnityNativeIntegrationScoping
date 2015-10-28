#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t26;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t27;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t24;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t28;

#include "AssemblyU2DCSharp_IScene.h"

// Scene02ManagerDemo
struct  Scene02ManagerDemo_t29  : public IScene_t22
{
	// UnityEngine.GameObject Scene02ManagerDemo::wolf
	GameObject_t26 * ___wolf_3;
	// System.Single Scene02ManagerDemo::mSpinSpeed
	float ___mSpinSpeed_4;
	// System.String Scene02ManagerDemo::myAssetBundleName
	String_t* ___myAssetBundleName_5;
	// UnityEngine.Transform Scene02ManagerDemo::mObjectsParent
	Transform_t27 * ___mObjectsParent_6;
	// System.Boolean Scene02ManagerDemo::isBeingTracked
	bool ___isBeingTracked_7;
	// Vuforia.TrackableBehaviour Scene02ManagerDemo::mTrackableBehaviour
	TrackableBehaviour_t24 * ___mTrackableBehaviour_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Scene02ManagerDemo::mARObjects
	List_1_t28 * ___mARObjects_9;
};
