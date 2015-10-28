﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Array
struct Array_t;
// System.Byte[]
struct ByteU5BU5D_t836;
// System.Char[]
struct CharU5BU5D_t306;
// System.Single[]
struct SingleU5BU5D_t585;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.InteropServices.Marshal::.cctor()
extern "C" void Marshal__cctor_m11984 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.IntPtr)
extern "C" IntPtr_t Marshal_AllocHGlobal_m11985 (Object_t * __this /* static, unused */, IntPtr_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
extern "C" IntPtr_t Marshal_AllocHGlobal_m5775 (Object_t * __this /* static, unused */, int32_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_to_unmanaged(System.Array,System.Int32,System.IntPtr,System.Int32)
extern "C" void Marshal_copy_to_unmanaged_m11986 (Object_t * __this /* static, unused */, Array_t * ___source, int32_t ___startIndex, IntPtr_t ___destination, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
extern "C" void Marshal_copy_from_unmanaged_m11987 (Object_t * __this /* static, unused */, IntPtr_t ___source, int32_t ___startIndex, Array_t * ___destination, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
extern "C" void Marshal_Copy_m5846 (Object_t * __this /* static, unused */, ByteU5BU5D_t836* ___source, int32_t ___startIndex, IntPtr_t ___destination, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C" void Marshal_Copy_m5843 (Object_t * __this /* static, unused */, IntPtr_t ___source, ByteU5BU5D_t836* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
extern "C" void Marshal_Copy_m11988 (Object_t * __this /* static, unused */, IntPtr_t ___source, CharU5BU5D_t306* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Single[],System.Int32,System.Int32)
extern "C" void Marshal_Copy_m5776 (Object_t * __this /* static, unused */, IntPtr_t ___source, SingleU5BU5D_t585* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
extern "C" void Marshal_FreeHGlobal_m5777 (Object_t * __this /* static, unused */, IntPtr_t ___hglobal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
extern "C" int32_t Marshal_GetLastWin32Error_m7902 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
extern "C" String_t* Marshal_PtrToStringAnsi_m6047 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringUni(System.IntPtr)
extern "C" String_t* Marshal_PtrToStringUni_m5778 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
extern "C" Object_t * Marshal_PtrToStructure_m5818 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, Type_t * ___structureType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Runtime.InteropServices.Marshal::ReadByte(System.IntPtr,System.Int32)
extern "C" uint8_t Marshal_ReadByte_m11989 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, int32_t ___ofs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::ReadInt32(System.IntPtr)
extern "C" int32_t Marshal_ReadInt32_m6048 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::ReadInt32(System.IntPtr,System.Int32)
extern "C" int32_t Marshal_ReadInt32_m11990 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, int32_t ___ofs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
extern "C" int32_t Marshal_SizeOf_m5774 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::StringToHGlobalUni(System.String)
extern "C" IntPtr_t Marshal_StringToHGlobalUni_m5779 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr(System.Object,System.IntPtr,System.Boolean)
extern "C" void Marshal_StructureToPtr_m5785 (Object_t * __this /* static, unused */, Object_t * ___structure, IntPtr_t ___ptr, bool ___fDeleteOld, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::WriteByte(System.IntPtr,System.Int32,System.Byte)
extern "C" void Marshal_WriteByte_m11991 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, int32_t ___ofs, uint8_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
