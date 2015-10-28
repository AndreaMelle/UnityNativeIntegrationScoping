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

// System.IO.Compression.DeflateStream/WriteMethod
struct WriteMethod_t1149;
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

// System.Void System.IO.Compression.DeflateStream/WriteMethod::.ctor(System.Object,System.IntPtr)
extern "C" void WriteMethod__ctor_m6233 (WriteMethod_t1149 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream/WriteMethod::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C" void WriteMethod_Invoke_m6234 (WriteMethod_t1149 * __this, ByteU5BU5D_t836* ___array, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_WriteMethod_t1149(Il2CppObject* delegate, ByteU5BU5D_t836* ___array, int32_t ___offset, int32_t ___count);
// System.IAsyncResult System.IO.Compression.DeflateStream/WriteMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * WriteMethod_BeginInvoke_m6235 (WriteMethod_t1149 * __this, ByteU5BU5D_t836* ___array, int32_t ___offset, int32_t ___count, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.Compression.DeflateStream/WriteMethod::EndInvoke(System.IAsyncResult)
extern "C" void WriteMethod_EndInvoke_m6236 (WriteMethod_t1149 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
