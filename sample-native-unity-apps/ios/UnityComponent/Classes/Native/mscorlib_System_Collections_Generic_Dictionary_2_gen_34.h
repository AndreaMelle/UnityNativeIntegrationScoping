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
// Vuforia.Image/PIXEL_FORMAT[]
struct PIXEL_FORMATU5BU5D_t2867;
// System.Object[]
struct ObjectU5BU5D_t146;
// System.Collections.Generic.IEqualityComparer`1<Vuforia.Image/PIXEL_FORMAT>
struct IEqualityComparer_1_t2870;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t728;
// System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t2872;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct  Dictionary_2_t2871  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::table
	Int32U5BU5D_t162* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::linkSlots
	LinkU5BU5D_t2323* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::keySlots
	PIXEL_FORMATU5BU5D_t2867* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::valueSlots
	ObjectU5BU5D_t146* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::serialization_info
	SerializationInfo_t728 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t2871_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::<>f__am$cacheB
	Transform_1_t2872 * ___U3CU3Ef__amU24cacheB_15;
};
