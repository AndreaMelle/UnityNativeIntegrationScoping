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
// System.Type[]
struct TypeU5BU5D_t720;
// System.UInt16[]
struct UInt16U5BU5D_t1243;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t2953;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t728;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.UInt16,System.Collections.DictionaryEntry>
struct Transform_1_t2952;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>
struct  Dictionary_2_t901  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::table
	Int32U5BU5D_t162* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::linkSlots
	LinkU5BU5D_t2323* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::keySlots
	TypeU5BU5D_t720* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::valueSlots
	UInt16U5BU5D_t1243* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::serialization_info
	SerializationInfo_t728 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t901_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Type,System.UInt16>::<>f__am$cacheB
	Transform_1_t2952 * ___U3CU3Ef__amU24cacheB_15;
};
