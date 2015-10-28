#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.Queue`1<abl.MainThreadAction>
struct Queue_1_t14;
// System.Collections.Generic.Queue`1<abl.ABManager/ABRequest>
struct Queue_1_t15;
// System.Threading.Thread
struct Thread_t17;
// System.Collections.Generic.Dictionary`2<System.String,abl.ABReference>
struct Dictionary_2_t16;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t18;

#include "AssemblyU2DCSharp_Singleton_1_gen.h"

// abl.ABManager
struct  ABManager_t9  : public Singleton_1_t13
{
	// System.Collections.Generic.Queue`1<abl.MainThreadAction> abl.ABManager::_mainThreadCallbacks
	Queue_1_t14 * ____mainThreadCallbacks_8;
	// System.Collections.Generic.Queue`1<abl.ABManager/ABRequest> abl.ABManager::mRequestQueue
	Queue_1_t15 * ___mRequestQueue_9;
	// System.Boolean abl.ABManager::mIsExecutingRequest
	bool ___mIsExecutingRequest_10;
	// System.Boolean abl.ABManager::mHasStarted
	bool ___mHasStarted_11;
	// System.Collections.Generic.Dictionary`2<System.String,abl.ABReference> abl.ABManager::mBundleReferences
	Dictionary_2_t16 * ___mBundleReferences_13;
};
struct ABManager_t9_StaticFields{
	// System.String abl.ABManager::miOSOutputDir
	String_t* ___miOSOutputDir_4;
	// System.String abl.ABManager::mUrlBase
	String_t* ___mUrlBase_5;
	// System.String abl.ABManager::mManifestSuffix
	String_t* ___mManifestSuffix_6;
	// System.Object abl.ABManager::_mainThreadCallbackLock
	Object_t * ____mainThreadCallbackLock_7;
	// System.Threading.Thread abl.ABManager::_mainThread
	Thread_t17 * ____mainThread_12;
	// System.Net.Security.RemoteCertificateValidationCallback abl.ABManager::<>f__am$cacheA
	RemoteCertificateValidationCallback_t18 * ___U3CU3Ef__amU24cacheA_14;
};
