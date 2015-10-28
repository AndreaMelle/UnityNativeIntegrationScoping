#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t162;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2323;
// Vuforia.Prop[]
struct PropU5BU5D_t3021;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2457;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t728;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.Prop,System.Collections.DictionaryEntry>
struct Transform_1_t3022;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>
struct  Dictionary_2_t928  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::table
	Int32U5BU5D_t162* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::linkSlots
	LinkU5BU5D_t2323* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::keySlots
	Int32U5BU5D_t162* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::valueSlots
	PropU5BU5D_t3021* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::serialization_info
	SerializationInfo_t728 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t928_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Prop>::<>f__am$cacheB
	Transform_1_t3022 * ___U3CU3Ef__amU24cacheB_15;
};
