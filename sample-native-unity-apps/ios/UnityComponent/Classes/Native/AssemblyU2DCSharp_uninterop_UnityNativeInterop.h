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
// uninterop.UnityNativeInterop/OnSceneUnloadRequestEvent
struct OnSceneUnloadRequestEvent_t31;

#include "AssemblyU2DCSharp_Singleton_1_gen_0.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"

// uninterop.UnityNativeInterop
struct  UnityNativeInterop_t35  : public Singleton_1_t36
{
	// UnityEngine.ScreenOrientation uninterop.UnityNativeInterop::_currentOrientation
	int32_t ____currentOrientation_5;
};
struct UnityNativeInterop_t35_StaticFields{
	// System.String uninterop.UnityNativeInterop::dummySceneName
	String_t* ___dummySceneName_4;
	// uninterop.UnityNativeInterop/OnSceneUnloadRequestEvent uninterop.UnityNativeInterop::OnSceneUnloadRequest
	OnSceneUnloadRequestEvent_t31 * ___OnSceneUnloadRequest_6;
};
