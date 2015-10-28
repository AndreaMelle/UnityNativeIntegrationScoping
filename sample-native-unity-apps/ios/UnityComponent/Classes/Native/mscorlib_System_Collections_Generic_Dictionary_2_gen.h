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
// System.String[]
struct StringU5BU5D_t669;
// abl.ABReference[]
struct ABReferenceU5BU5D_t2324;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2326;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t728;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,abl.ABReference,System.Collections.DictionaryEntry>
struct Transform_1_t2325;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.String,abl.ABReference>
struct  Dictionary_2_t16  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,abl.ABReference>::table
	Int32U5BU5D_t162* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,abl.ABReference>::linkSlots
	LinkU5BU5D_t2323* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,abl.ABReference>::keySlots
	StringU5BU5D_t669* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,abl.ABReference>::valueSlots
	ABReferenceU5BU5D_t2324* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,abl.ABReference>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,abl.ABReference>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,abl.ABReference>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,abl.ABReference>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,abl.ABReference>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,abl.ABReference>::serialization_info
	SerializationInfo_t728 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,abl.ABReference>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t16_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,abl.ABReference>::<>f__am$cacheB
	Transform_1_t2325 * ___U3CU3Ef__amU24cacheB_15;
};
