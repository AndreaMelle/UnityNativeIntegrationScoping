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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2470;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2458;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m16126_gshared (ShimEnumerator_t2470 * __this, Dictionary_2_t2458 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m16126(__this, ___host, method) (( void (*) (ShimEnumerator_t2470 *, Dictionary_2_t2458 *, const MethodInfo*))ShimEnumerator__ctor_m16126_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m16127_gshared (ShimEnumerator_t2470 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m16127(__this, method) (( bool (*) (ShimEnumerator_t2470 *, const MethodInfo*))ShimEnumerator_MoveNext_m16127_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1388  ShimEnumerator_get_Entry_m16128_gshared (ShimEnumerator_t2470 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m16128(__this, method) (( DictionaryEntry_t1388  (*) (ShimEnumerator_t2470 *, const MethodInfo*))ShimEnumerator_get_Entry_m16128_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m16129_gshared (ShimEnumerator_t2470 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m16129(__this, method) (( Object_t * (*) (ShimEnumerator_t2470 *, const MethodInfo*))ShimEnumerator_get_Key_m16129_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m16130_gshared (ShimEnumerator_t2470 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m16130(__this, method) (( Object_t * (*) (ShimEnumerator_t2470 *, const MethodInfo*))ShimEnumerator_get_Value_m16130_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m16131_gshared (ShimEnumerator_t2470 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m16131(__this, method) (( Object_t * (*) (ShimEnumerator_t2470 *, const MethodInfo*))ShimEnumerator_get_Current_m16131_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m16132_gshared (ShimEnumerator_t2470 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m16132(__this, method) (( void (*) (ShimEnumerator_t2470 *, const MethodInfo*))ShimEnumerator_Reset_m16132_gshared)(__this, method)
