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

// abl.ABManager
struct ABManager_t9;
// UnityEngine.AssetBundle
struct AssetBundle_t19;
// System.String
struct String_t;
// System.Action`2<System.Boolean,UnityEngine.AssetBundle>
struct Action_2_t7;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// abl.ABMetadata
struct ABMetadata_t5;
// abl.MainThreadAction
struct MainThreadAction_t1;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t101;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t102;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void abl.ABManager::.ctor()
extern "C" void ABManager__ctor_m19 (ABManager_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void abl.ABManager::.cctor()
extern "C" void ABManager__cctor_m20 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean abl.ABManager::IsMainThread()
extern "C" bool ABManager_IsMainThread_m21 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void abl.ABManager::Awake()
extern "C" void ABManager_Awake_m22 (ABManager_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void abl.ABManager::OnEnable()
extern "C" void ABManager_OnEnable_m23 (ABManager_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void abl.ABManager::OnDisable()
extern "C" void ABManager_OnDisable_m24 (ABManager_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void abl.ABManager::Update()
extern "C" void ABManager_Update_m25 (ABManager_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AssetBundle abl.ABManager::getAssetBundle(System.String)
extern "C" AssetBundle_t19 * ABManager_getAssetBundle_m26 (ABManager_t9 * __this, String_t* ___bundlename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void abl.ABManager::downloadAssetBundle(System.String,System.Action`2<System.Boolean,UnityEngine.AssetBundle>)
extern "C" void ABManager_downloadAssetBundle_m27 (ABManager_t9 * __this, String_t* ___bundlename, Action_2_t7 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator abl.ABManager::downloadAssetBundleCoroutine(abl.ABMetadata,System.String,System.Action`2<System.Boolean,UnityEngine.AssetBundle>)
extern "C" Object_t * ABManager_downloadAssetBundleCoroutine_m28 (ABManager_t9 * __this, ABMetadata_t5 * ___abMeta, String_t* ___url, Action_2_t7 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void abl.ABManager::Unload(System.String)
extern "C" void ABManager_Unload_m29 (ABManager_t9 * __this, String_t* ___bundlename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void abl.ABManager::UnloadAllAndClear()
extern "C" void ABManager_UnloadAllAndClear_m30 (ABManager_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String abl.ABManager::fullUrlForPlatform(System.String)
extern "C" String_t* ABManager_fullUrlForPlatform_m31 (ABManager_t9 * __this, String_t* ___bundlename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean abl.ABManager::isArch32()
extern "C" bool ABManager_isArch32_m32 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean abl.ABManager::isArch64()
extern "C" bool ABManager_isArch64_m33 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void abl.ABManager::ProcessRequests()
extern "C" void ABManager_ProcessRequests_m34 (ABManager_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void abl.ABManager::ExecuteOnMainThread(abl.MainThreadAction)
extern "C" void ABManager_ExecuteOnMainThread_m35 (ABManager_t9 * __this, MainThreadAction_t1 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// abl.MainThreadAction abl.ABManager::DequeueMainThreadOperation()
extern "C" MainThreadAction_t1 * ABManager_DequeueMainThreadOperation_m36 (ABManager_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean abl.ABManager::<ABManager>m__0(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C" bool ABManager_U3CABManagerU3Em__0_m37 (Object_t * __this /* static, unused */, Object_t * ___p1, X509Certificate_t101 * ___p2, X509Chain_t102 * ___p3, int32_t ___p4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
