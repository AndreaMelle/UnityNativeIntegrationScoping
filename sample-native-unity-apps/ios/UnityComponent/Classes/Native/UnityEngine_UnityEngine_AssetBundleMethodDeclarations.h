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

// UnityEngine.AssetBundle
struct AssetBundle_t19;
// UnityEngine.Object
struct Object_t117;
struct Object_t117_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t501;
// UnityEngine.Object[]
struct ObjectU5BU5D_t711;

#include "codegen/il2cpp-codegen.h"

// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
extern "C" Object_t117 * AssetBundle_LoadAsset_m2454 (AssetBundle_t19 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern "C" Object_t117 * AssetBundle_LoadAsset_Internal_m2455 (AssetBundle_t19 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AssetBundleRequest UnityEngine.AssetBundle::LoadAssetAsync(System.String,System.Type)
extern "C" AssetBundleRequest_t501 * AssetBundle_LoadAssetAsync_m2456 (AssetBundle_t19 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AssetBundleRequest UnityEngine.AssetBundle::LoadAssetAsync_Internal(System.String,System.Type)
extern "C" AssetBundleRequest_t501 * AssetBundle_LoadAssetAsync_Internal_m2457 (AssetBundle_t19 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)
extern "C" ObjectU5BU5D_t711* AssetBundle_LoadAssetWithSubAssets_Internal_m2458 (AssetBundle_t19 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AssetBundleRequest UnityEngine.AssetBundle::LoadAssetWithSubAssetsAsync_Internal(System.String,System.Type)
extern "C" AssetBundleRequest_t501 * AssetBundle_LoadAssetWithSubAssetsAsync_Internal_m2459 (AssetBundle_t19 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AssetBundleRequest UnityEngine.AssetBundle::LoadAllAssetsAsync(System.Type)
extern "C" AssetBundleRequest_t501 * AssetBundle_LoadAllAssetsAsync_m2460 (AssetBundle_t19 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AssetBundle::Unload(System.Boolean)
extern "C" void AssetBundle_Unload_m269 (AssetBundle_t19 * __this, bool ___unloadAllLoadedObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
