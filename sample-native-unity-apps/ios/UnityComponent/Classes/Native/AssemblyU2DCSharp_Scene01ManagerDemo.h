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

// Scene01ManagerDemo
struct  Scene01ManagerDemo_t25  : public IScene_t22
{
	// UnityEngine.GameObject Scene01ManagerDemo::bear
	GameObject_t26 * ___bear_3;
	// UnityEngine.GameObject Scene01ManagerDemo::deer
	GameObject_t26 * ___deer_4;
	// System.Single Scene01ManagerDemo::mSpinSpeed
	float ___mSpinSpeed_5;
	// System.String Scene01ManagerDemo::myAssetBundleName
	String_t* ___myAssetBundleName_6;
	// UnityEngine.Transform Scene01ManagerDemo::mObjectsParent
	Transform_t27 * ___mObjectsParent_7;
	// System.Boolean Scene01ManagerDemo::isBeingTracked
	bool ___isBeingTracked_8;
	// Vuforia.TrackableBehaviour Scene01ManagerDemo::mTrackableBehaviour
	TrackableBehaviour_t24 * ___mTrackableBehaviour_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Scene01ManagerDemo::mARObjects
	List_1_t28 * ___mARObjects_10;
};
