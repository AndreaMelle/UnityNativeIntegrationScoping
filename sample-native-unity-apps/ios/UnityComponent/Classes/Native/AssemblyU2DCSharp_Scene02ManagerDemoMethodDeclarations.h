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

// Scene02ManagerDemo
struct Scene02ManagerDemo_t29;
// UnityEngine.GameObject
struct GameObject_t26;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"

// System.Void Scene02ManagerDemo::.ctor()
extern "C" void Scene02ManagerDemo__ctor_m72 (Scene02ManagerDemo_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Scene02ManagerDemo::GetSceneOrientation()
extern "C" int32_t Scene02ManagerDemo_GetSceneOrientation_m73 (Scene02ManagerDemo_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Scene02ManagerDemo::doAwake()
extern "C" void Scene02ManagerDemo_doAwake_m74 (Scene02ManagerDemo_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Scene02ManagerDemo::doStart()
extern "C" void Scene02ManagerDemo_doStart_m75 (Scene02ManagerDemo_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Scene02ManagerDemo::applyObjectVisibilityRule()
extern "C" void Scene02ManagerDemo_applyObjectVisibilityRule_m76 (Scene02ManagerDemo_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Scene02ManagerDemo::Update()
extern "C" void Scene02ManagerDemo_Update_m77 (Scene02ManagerDemo_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Scene02ManagerDemo::OnTrackingFound()
extern "C" void Scene02ManagerDemo_OnTrackingFound_m78 (Scene02ManagerDemo_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Scene02ManagerDemo::OnTrackingLost()
extern "C" void Scene02ManagerDemo_OnTrackingLost_m79 (Scene02ManagerDemo_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Scene02ManagerDemo::onSceneUnload()
extern "C" void Scene02ManagerDemo_onSceneUnload_m80 (Scene02ManagerDemo_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Scene02ManagerDemo::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern "C" void Scene02ManagerDemo_OnTrackableStateChanged_m81 (Scene02ManagerDemo_t29 * __this, int32_t ___previousStatus, int32_t ___newStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Scene02ManagerDemo::<doStart>m__9(System.Boolean,UnityEngine.GameObject)
extern "C" void Scene02ManagerDemo_U3CdoStartU3Em__9_m82 (Scene02ManagerDemo_t29 * __this, bool ___success, GameObject_t26 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
