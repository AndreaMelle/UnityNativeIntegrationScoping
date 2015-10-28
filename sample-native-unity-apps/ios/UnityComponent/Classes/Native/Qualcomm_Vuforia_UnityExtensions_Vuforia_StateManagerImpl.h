#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour>
struct Dictionary_2_t933;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t385;
// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>
struct List_1_t934;
// Vuforia.WordManagerImpl
struct WordManagerImpl_t907;
// UnityEngine.GameObject
struct GameObject_t26;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_StateManager.h"

// Vuforia.StateManagerImpl
struct  StateManagerImpl_t932  : public StateManager_t931
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::mTrackableBehaviours
	Dictionary_2_t933 * ___mTrackableBehaviours_0;
	// System.Collections.Generic.List`1<System.Int32> Vuforia.StateManagerImpl::mAutomaticallyCreatedBehaviours
	List_1_t385 * ___mAutomaticallyCreatedBehaviours_1;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::mBehavioursMarkedForDeletion
	List_1_t934 * ___mBehavioursMarkedForDeletion_2;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::mActiveTrackableBehaviours
	List_1_t934 * ___mActiveTrackableBehaviours_3;
	// Vuforia.WordManagerImpl Vuforia.StateManagerImpl::mWordManager
	WordManagerImpl_t907 * ___mWordManager_4;
	// UnityEngine.GameObject Vuforia.StateManagerImpl::mCameraPositioningHelper
	GameObject_t26 * ___mCameraPositioningHelper_5;
};
