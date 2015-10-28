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

// System.IO.Compression.DeflateStream/ReadMethod
struct ReadMethod_t1148;
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

// System.Void System.IO.Compression.DeflateStream/ReadMethod::.ctor(System.Object,System.IntPtr)
extern "C" void ReadMethod__ctor_m6229 (ReadMethod_t1148 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream/ReadMethod::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ReadMethod_Invoke_m6230 (ReadMethod_t1148 * __this, ByteU5BU5D_t836* ___array, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_ReadMethod_t1148(Il2CppObject* delegate, ByteU5BU5D_t836* ___array, int32_t ___offset, int32_t ___count);
// System.IAsyncResult System.IO.Compression.DeflateStream/ReadMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * ReadMethod_BeginInvoke_m6231 (ReadMethod_t1148 * __this, ByteU5BU5D_t836* ___array, int32_t ___offset, int32_t ___count, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream/ReadMethod::EndInvoke(System.IAsyncResult)
extern "C" int32_t ReadMethod_EndInvoke_m6232 (ReadMethod_t1148 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
