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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2792;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__15.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m20660_gshared (Enumerator_t2799 * __this, Dictionary_2_t2792 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m20660(__this, ___dictionary, method) (( void (*) (Enumerator_t2799 *, Dictionary_2_t2792 *, const MethodInfo*))Enumerator__ctor_m20660_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m20661_gshared (Enumerator_t2799 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m20661(__this, method) (( Object_t * (*) (Enumerator_t2799 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m20661_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m20662_gshared (Enumerator_t2799 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m20662(__this, method) (( void (*) (Enumerator_t2799 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m20662_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1388  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20663_gshared (Enumerator_t2799 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20663(__this, method) (( DictionaryEntry_t1388  (*) (Enumerator_t2799 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m20663_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20664_gshared (Enumerator_t2799 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20664(__this, method) (( Object_t * (*) (Enumerator_t2799 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m20664_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20665_gshared (Enumerator_t2799 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20665(__this, method) (( Object_t * (*) (Enumerator_t2799 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m20665_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m20666_gshared (Enumerator_t2799 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m20666(__this, method) (( bool (*) (Enumerator_t2799 *, const MethodInfo*))Enumerator_MoveNext_m20666_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t2794  Enumerator_get_Current_m20667_gshared (Enumerator_t2799 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m20667(__this, method) (( KeyValuePair_2_t2794  (*) (Enumerator_t2799 *, const MethodInfo*))Enumerator_get_Current_m20667_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m20668_gshared (Enumerator_t2799 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m20668(__this, method) (( Object_t * (*) (Enumerator_t2799 *, const MethodInfo*))Enumerator_get_CurrentKey_m20668_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m20669_gshared (Enumerator_t2799 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m20669(__this, method) (( int32_t (*) (Enumerator_t2799 *, const MethodInfo*))Enumerator_get_CurrentValue_m20669_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Reset()
extern "C" void Enumerator_Reset_m20670_gshared (Enumerator_t2799 * __this, const MethodInfo* method);
#define Enumerator_Reset_m20670(__this, method) (( void (*) (Enumerator_t2799 *, const MethodInfo*))Enumerator_Reset_m20670_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m20671_gshared (Enumerator_t2799 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m20671(__this, method) (( void (*) (Enumerator_t2799 *, const MethodInfo*))Enumerator_VerifyState_m20671_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m20672_gshared (Enumerator_t2799 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m20672(__this, method) (( void (*) (Enumerator_t2799 *, const MethodInfo*))Enumerator_VerifyCurrent_m20672_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m20673_gshared (Enumerator_t2799 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m20673(__this, method) (( void (*) (Enumerator_t2799 *, const MethodInfo*))Enumerator_Dispose_m20673_gshared)(__this, method)
