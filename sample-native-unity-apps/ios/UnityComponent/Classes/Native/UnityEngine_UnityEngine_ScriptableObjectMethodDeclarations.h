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

// UnityEngine.ScriptableObject
struct ScriptableObject_t508;
struct ScriptableObject_t508_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" void ScriptableObject__ctor_m2465 (ScriptableObject_t508 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C" void ScriptableObject_Internal_CreateScriptableObject_m2466 (Object_t * __this /* static, unused */, ScriptableObject_t508 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
extern "C" ScriptableObject_t508 * ScriptableObject_CreateInstance_m2467 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C" ScriptableObject_t508 * ScriptableObject_CreateInstance_m2468 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C" ScriptableObject_t508 * ScriptableObject_CreateInstanceFromType_m2469 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void ScriptableObject_t508_marshal(const ScriptableObject_t508& unmarshaled, ScriptableObject_t508_marshaled& marshaled);
extern "C" void ScriptableObject_t508_marshal_back(const ScriptableObject_t508_marshaled& marshaled, ScriptableObject_t508& unmarshaled);
extern "C" void ScriptableObject_t508_marshal_cleanup(ScriptableObject_t508_marshaled& marshaled);
