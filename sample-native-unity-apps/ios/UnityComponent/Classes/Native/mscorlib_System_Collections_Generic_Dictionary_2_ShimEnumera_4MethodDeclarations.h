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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>
struct ShimEnumerator_t2967;
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t2954;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m23079_gshared (ShimEnumerator_t2967 * __this, Dictionary_2_t2954 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m23079(__this, ___host, method) (( void (*) (ShimEnumerator_t2967 *, Dictionary_2_t2954 *, const MethodInfo*))ShimEnumerator__ctor_m23079_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m23080_gshared (ShimEnumerator_t2967 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m23080(__this, method) (( bool (*) (ShimEnumerator_t2967 *, const MethodInfo*))ShimEnumerator_MoveNext_m23080_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Entry()
extern "C" DictionaryEntry_t1388  ShimEnumerator_get_Entry_m23081_gshared (ShimEnumerator_t2967 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m23081(__this, method) (( DictionaryEntry_t1388  (*) (ShimEnumerator_t2967 *, const MethodInfo*))ShimEnumerator_get_Entry_m23081_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m23082_gshared (ShimEnumerator_t2967 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m23082(__this, method) (( Object_t * (*) (ShimEnumerator_t2967 *, const MethodInfo*))ShimEnumerator_get_Key_m23082_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m23083_gshared (ShimEnumerator_t2967 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m23083(__this, method) (( Object_t * (*) (ShimEnumerator_t2967 *, const MethodInfo*))ShimEnumerator_get_Value_m23083_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m23084_gshared (ShimEnumerator_t2967 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m23084(__this, method) (( Object_t * (*) (ShimEnumerator_t2967 *, const MethodInfo*))ShimEnumerator_get_Current_m23084_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::Reset()
extern "C" void ShimEnumerator_Reset_m23085_gshared (ShimEnumerator_t2967 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m23085(__this, method) (( void (*) (ShimEnumerator_t2967 *, const MethodInfo*))ShimEnumerator_Reset_m23085_gshared)(__this, method)
