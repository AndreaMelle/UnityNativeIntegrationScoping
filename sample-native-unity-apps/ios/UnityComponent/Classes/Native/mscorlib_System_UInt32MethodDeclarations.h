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

// System.IFormatProvider
struct IFormatProvider_t2243;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t107;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_Decimal.h"
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Boolean System.UInt32::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool UInt32_System_IConvertible_ToBoolean_m9190 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.UInt32::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t UInt32_System_IConvertible_ToByte_m9191 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.UInt32::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t UInt32_System_IConvertible_ToChar_m9192 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.UInt32::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t615  UInt32_System_IConvertible_ToDateTime_m9193 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.UInt32::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t1597  UInt32_System_IConvertible_ToDecimal_m9194 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.UInt32::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double UInt32_System_IConvertible_ToDouble_m9195 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.UInt32::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t UInt32_System_IConvertible_ToInt16_m9196 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt32::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t UInt32_System_IConvertible_ToInt32_m9197 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.UInt32::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t UInt32_System_IConvertible_ToInt64_m9198 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.UInt32::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t UInt32_System_IConvertible_ToSByte_m9199 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.UInt32::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float UInt32_System_IConvertible_ToSingle_m9200 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UInt32::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * UInt32_System_IConvertible_ToType_m9201 (uint32_t* __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.UInt32::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t UInt32_System_IConvertible_ToUInt16_m9202 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UInt32::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t UInt32_System_IConvertible_ToUInt32_m9203 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UInt32::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t UInt32_System_IConvertible_ToUInt64_m9204 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt32::CompareTo(System.Object)
extern "C" int32_t UInt32_CompareTo_m9205 (uint32_t* __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::Equals(System.Object)
extern "C" bool UInt32_Equals_m9206 (uint32_t* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt32::GetHashCode()
extern "C" int32_t UInt32_GetHashCode_m9207 (uint32_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt32::CompareTo(System.UInt32)
extern "C" int32_t UInt32_CompareTo_m9208 (uint32_t* __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::Equals(System.UInt32)
extern "C" bool UInt32_Equals_m9209 (uint32_t* __this, uint32_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::Parse(System.String,System.Boolean,System.UInt32&,System.Exception&)
extern "C" bool UInt32_Parse_m9210 (Object_t * __this /* static, unused */, String_t* ___s, bool ___tryParse, uint32_t* ___result, Exception_t107 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.UInt32&,System.Exception&)
extern "C" bool UInt32_Parse_m9211 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, bool ___tryParse, uint32_t* ___result, Exception_t107 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UInt32::Parse(System.String)
extern "C" uint32_t UInt32_Parse_m8014 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UInt32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" uint32_t UInt32_Parse_m9212 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UInt32::Parse(System.String,System.IFormatProvider)
extern "C" uint32_t UInt32_Parse_m9213 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::TryParse(System.String,System.UInt32&)
extern "C" bool UInt32_TryParse_m243 (Object_t * __this /* static, unused */, String_t* ___s, uint32_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt32&)
extern "C" bool UInt32_TryParse_m9214 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, uint32_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt32::ToString()
extern "C" String_t* UInt32_ToString_m288 (uint32_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt32::ToString(System.IFormatProvider)
extern "C" String_t* UInt32_ToString_m9215 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt32::ToString(System.String)
extern "C" String_t* UInt32_ToString_m9216 (uint32_t* __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt32::ToString(System.String,System.IFormatProvider)
extern "C" String_t* UInt32_ToString_m9217 (uint32_t* __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
