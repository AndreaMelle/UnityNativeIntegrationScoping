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

// System.Net.FtpDataStream/ReadDelegate
struct ReadDelegate_t1220;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t836;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte.h"

// System.Void System.Net.FtpDataStream/ReadDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void ReadDelegate__ctor_m6644 (ReadDelegate_t1220 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpDataStream/ReadDelegate::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ReadDelegate_Invoke_m6645 (ReadDelegate_t1220 * __this, ByteU5BU5D_t836* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_ReadDelegate_t1220(Il2CppObject* delegate, ByteU5BU5D_t836* ___buffer, int32_t ___offset, int32_t ___size);
// System.IAsyncResult System.Net.FtpDataStream/ReadDelegate::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * ReadDelegate_BeginInvoke_m6646 (ReadDelegate_t1220 * __this, ByteU5BU5D_t836* ___buffer, int32_t ___offset, int32_t ___size, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpDataStream/ReadDelegate::EndInvoke(System.IAsyncResult)
extern "C" int32_t ReadDelegate_EndInvoke_m6647 (ReadDelegate_t1220 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
