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

// UnityEngine.Object
struct Object_t117;
struct Object_t117_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t500;
struct AsyncOperation_t500_marshaled;

#include "codegen/il2cpp-codegen.h"

// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C" Object_t117 * Resources_Load_m334 (Object_t * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Resources::UnloadUnusedAssets()
extern "C" AsyncOperation_t500 * Resources_UnloadUnusedAssets_m330 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
