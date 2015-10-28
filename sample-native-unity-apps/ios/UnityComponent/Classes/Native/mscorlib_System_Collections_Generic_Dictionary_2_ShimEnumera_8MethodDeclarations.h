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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t3173;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t3160;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m26455_gshared (ShimEnumerator_t3173 * __this, Dictionary_2_t3160 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m26455(__this, ___host, method) (( void (*) (ShimEnumerator_t3173 *, Dictionary_2_t3160 *, const MethodInfo*))ShimEnumerator__ctor_m26455_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m26456_gshared (ShimEnumerator_t3173 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m26456(__this, method) (( bool (*) (ShimEnumerator_t3173 *, const MethodInfo*))ShimEnumerator_MoveNext_m26456_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t1388  ShimEnumerator_get_Entry_m26457_gshared (ShimEnumerator_t3173 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m26457(__this, method) (( DictionaryEntry_t1388  (*) (ShimEnumerator_t3173 *, const MethodInfo*))ShimEnumerator_get_Entry_m26457_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m26458_gshared (ShimEnumerator_t3173 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m26458(__this, method) (( Object_t * (*) (ShimEnumerator_t3173 *, const MethodInfo*))ShimEnumerator_get_Key_m26458_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m26459_gshared (ShimEnumerator_t3173 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m26459(__this, method) (( Object_t * (*) (ShimEnumerator_t3173 *, const MethodInfo*))ShimEnumerator_get_Value_m26459_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m26460_gshared (ShimEnumerator_t3173 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m26460(__this, method) (( Object_t * (*) (ShimEnumerator_t3173 *, const MethodInfo*))ShimEnumerator_get_Current_m26460_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::Reset()
extern "C" void ShimEnumerator_Reset_m26461_gshared (ShimEnumerator_t3173 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m26461(__this, method) (( void (*) (ShimEnumerator_t3173 *, const MethodInfo*))ShimEnumerator_Reset_m26461_gshared)(__this, method)
