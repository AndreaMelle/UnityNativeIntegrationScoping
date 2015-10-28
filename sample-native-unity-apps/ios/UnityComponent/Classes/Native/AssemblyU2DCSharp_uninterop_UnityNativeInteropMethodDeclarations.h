#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// uninterop.UnityNativeInterop
struct UnityNativeInterop_t35;
// uninterop.UnityNativeInterop/OnSceneUnloadRequestEvent
struct OnSceneUnloadRequestEvent_t31;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"

// System.Void uninterop.UnityNativeInterop::.ctor()
extern "C" void UnityNativeInterop__ctor_m91 (UnityNativeInterop_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void uninterop.UnityNativeInterop::.cctor()
extern "C" void UnityNativeInterop__cctor_m92 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void uninterop.UnityNativeInterop::add_OnSceneUnloadRequest(uninterop.UnityNativeInterop/OnSceneUnloadRequestEvent)
extern "C" void UnityNativeInterop_add_OnSceneUnloadRequest_m93 (Object_t * __this /* static, unused */, OnSceneUnloadRequestEvent_t31 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void uninterop.UnityNativeInterop::remove_OnSceneUnloadRequest(uninterop.UnityNativeInterop/OnSceneUnloadRequestEvent)
extern "C" void UnityNativeInterop_remove_OnSceneUnloadRequest_m94 (Object_t * __this /* static, unused */, OnSceneUnloadRequestEvent_t31 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation uninterop.UnityNativeInterop::get_currentOrientation()
extern "C" int32_t UnityNativeInterop_get_currentOrientation_m95 (UnityNativeInterop_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void uninterop.UnityNativeInterop::Awake()
extern "C" void UnityNativeInterop_Awake_m96 (UnityNativeInterop_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void uninterop.UnityNativeInterop::ChooseOrientationForScene(UnityEngine.ScreenOrientation)
extern "C" void UnityNativeInterop_ChooseOrientationForScene_m97 (Object_t * __this /* static, unused */, int32_t ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void uninterop.UnityNativeInterop::NotifySceneLoaded()
extern "C" void UnityNativeInterop_NotifySceneLoaded_m98 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void uninterop.UnityNativeInterop::NotifySceneWantsToEnd()
extern "C" void UnityNativeInterop_NotifySceneWantsToEnd_m99 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void uninterop.UnityNativeInterop::onNativeRequestedScene(System.String)
extern "C" void UnityNativeInterop_onNativeRequestedScene_m100 (Object_t * __this /* static, unused */, String_t* ___scenename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void uninterop.UnityNativeInterop::onNativeRequestedUnload()
extern "C" void UnityNativeInterop_onNativeRequestedUnload_m101 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void uninterop.UnityNativeInterop::RequestSceneFromNative(System.String)
extern "C" void UnityNativeInterop_RequestSceneFromNative_m102 (UnityNativeInterop_t35 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void uninterop.UnityNativeInterop::RequestUnloadFromNative(System.String)
extern "C" void UnityNativeInterop_RequestUnloadFromNative_m103 (UnityNativeInterop_t35 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void uninterop.UnityNativeInterop::OnApplicationPause(System.Boolean)
extern "C" void UnityNativeInterop_OnApplicationPause_m104 (UnityNativeInterop_t35 * __this, bool ___paused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void uninterop.UnityNativeInterop::onUnityInit(System.String)
extern "C" void UnityNativeInterop_onUnityInit_m105 (Object_t * __this /* static, unused */, String_t* ___unityGameObjectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void uninterop.UnityNativeInterop::onUnitySceneUnloaded(System.String)
extern "C" void UnityNativeInterop_onUnitySceneUnloaded_m106 (Object_t * __this /* static, unused */, String_t* ___scenename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void uninterop.UnityNativeInterop::onUnitySceneLoaded(System.String)
extern "C" void UnityNativeInterop_onUnitySceneLoaded_m107 (Object_t * __this /* static, unused */, String_t* ___scenename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void uninterop.UnityNativeInterop::onUnityWantsToUnloadScene(System.String)
extern "C" void UnityNativeInterop_onUnityWantsToUnloadScene_m108 (Object_t * __this /* static, unused */, String_t* ___scenename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void uninterop.UnityNativeInterop::onUnityRequestsOrientation(System.Int32)
extern "C" void UnityNativeInterop_onUnityRequestsOrientation_m109 (Object_t * __this /* static, unused */, int32_t ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void uninterop.UnityNativeInterop::CallUnityInit()
extern "C" void UnityNativeInterop_CallUnityInit_m110 (UnityNativeInterop_t35 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void uninterop.UnityNativeInterop::CallUnitySceneUnloaded(System.String)
extern "C" void UnityNativeInterop_CallUnitySceneUnloaded_m111 (UnityNativeInterop_t35 * __this, String_t* ___scenename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void uninterop.UnityNativeInterop::CallUnitySceneLoaded(System.String)
extern "C" void UnityNativeInterop_CallUnitySceneLoaded_m112 (UnityNativeInterop_t35 * __this, String_t* ___scenename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void uninterop.UnityNativeInterop::CallUnityWantsToUnloadScene(System.String)
extern "C" void UnityNativeInterop_CallUnityWantsToUnloadScene_m113 (UnityNativeInterop_t35 * __this, String_t* ___scenename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
