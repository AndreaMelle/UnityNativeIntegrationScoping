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

// UnityEngine.WWW
struct WWW_t6;
// System.String
struct String_t;
// UnityEngine.AssetBundle
struct AssetBundle_t19;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Hash128.h"

// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.Hash128,System.UInt32)
extern "C" void WWW__ctor_m2862 (WWW_t6 * __this, String_t* ___url, Hash128_t548  ___hash, uint32_t ___crc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C" void WWW_Dispose_m235 (WWW_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C" void WWW_Finalize_m2863 (WWW_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C" void WWW_DestroyWWW_m2864 (WWW_t6 * __this, bool ___cancel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
extern "C" String_t* WWW_get_error_m230 (WWW_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AssetBundle UnityEngine.WWW::get_assetBundle()
extern "C" AssetBundle_t19 * WWW_get_assetBundle_m234 (WWW_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::INTERNAL_CALL_WWW(UnityEngine.WWW,System.String,UnityEngine.Hash128&,System.UInt32)
extern "C" void WWW_INTERNAL_CALL_WWW_m2865 (Object_t * __this /* static, unused */, WWW_t6 * ___self, String_t* ___url, Hash128_t548 * ___hash, uint32_t ___crc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,System.Int32,System.UInt32)
extern "C" WWW_t6 * WWW_LoadFromCacheOrDownload_m229 (Object_t * __this /* static, unused */, String_t* ___url, int32_t ___version, uint32_t ___crc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,UnityEngine.Hash128,System.UInt32)
extern "C" WWW_t6 * WWW_LoadFromCacheOrDownload_m2866 (Object_t * __this /* static, unused */, String_t* ___url, Hash128_t548  ___hash, uint32_t ___crc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
