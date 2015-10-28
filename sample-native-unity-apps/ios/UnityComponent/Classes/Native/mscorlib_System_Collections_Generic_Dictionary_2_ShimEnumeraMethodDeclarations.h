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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t2343;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2327;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14518_gshared (ShimEnumerator_t2343 * __this, Dictionary_2_t2327 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m14518(__this, ___host, method) (( void (*) (ShimEnumerator_t2343 *, Dictionary_2_t2327 *, const MethodInfo*))ShimEnumerator__ctor_m14518_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14519_gshared (ShimEnumerator_t2343 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m14519(__this, method) (( bool (*) (ShimEnumerator_t2343 *, const MethodInfo*))ShimEnumerator_MoveNext_m14519_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1388  ShimEnumerator_get_Entry_m14520_gshared (ShimEnumerator_t2343 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m14520(__this, method) (( DictionaryEntry_t1388  (*) (ShimEnumerator_t2343 *, const MethodInfo*))ShimEnumerator_get_Entry_m14520_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14521_gshared (ShimEnumerator_t2343 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m14521(__this, method) (( Object_t * (*) (ShimEnumerator_t2343 *, const MethodInfo*))ShimEnumerator_get_Key_m14521_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14522_gshared (ShimEnumerator_t2343 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m14522(__this, method) (( Object_t * (*) (ShimEnumerator_t2343 *, const MethodInfo*))ShimEnumerator_get_Value_m14522_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14523_gshared (ShimEnumerator_t2343 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m14523(__this, method) (( Object_t * (*) (ShimEnumerator_t2343 *, const MethodInfo*))ShimEnumerator_get_Current_m14523_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m14524_gshared (ShimEnumerator_t2343 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m14524(__this, method) (( void (*) (ShimEnumerator_t2343 *, const MethodInfo*))ShimEnumerator_Reset_m14524_gshared)(__this, method)
