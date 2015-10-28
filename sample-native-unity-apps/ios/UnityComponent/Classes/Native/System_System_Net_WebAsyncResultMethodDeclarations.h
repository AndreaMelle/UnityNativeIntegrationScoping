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

// System.Net.WebAsyncResult
struct WebAsyncResult_t1238;
// System.AsyncCallback
struct AsyncCallback_t34;
// System.Object
struct Object_t;
// System.Net.HttpWebRequest
struct HttpWebRequest_t12;
// System.Byte[]
struct ByteU5BU5D_t836;
// System.Exception
struct Exception_t107;
// System.IO.Stream
struct Stream_t112;
// System.Net.HttpWebResponse
struct HttpWebResponse_t110;
// System.Threading.WaitHandle
struct WaitHandle_t1169;
// System.IAsyncResult
struct IAsyncResult_t33;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.WebAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void WebAsyncResult__ctor_m6939 (WebAsyncResult_t1238 * __this, AsyncCallback_t34 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::.ctor(System.Net.HttpWebRequest,System.AsyncCallback,System.Object)
extern "C" void WebAsyncResult__ctor_m6940 (WebAsyncResult_t1238 * __this, HttpWebRequest_t12 * ___request, AsyncCallback_t34 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32)
extern "C" void WebAsyncResult__ctor_m6941 (WebAsyncResult_t1238 * __this, AsyncCallback_t34 * ___cb, Object_t * ___state, ByteU5BU5D_t836* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Exception)
extern "C" void WebAsyncResult_SetCompleted_m6942 (WebAsyncResult_t1238 * __this, bool ___synch, Exception_t107 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::Reset()
extern "C" void WebAsyncResult_Reset_m6943 (WebAsyncResult_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Int32)
extern "C" void WebAsyncResult_SetCompleted_m6944 (WebAsyncResult_t1238 * __this, bool ___synch, int32_t ___nbytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.IO.Stream)
extern "C" void WebAsyncResult_SetCompleted_m6945 (WebAsyncResult_t1238 * __this, bool ___synch, Stream_t112 * ___writeStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::SetCompleted(System.Boolean,System.Net.HttpWebResponse)
extern "C" void WebAsyncResult_SetCompleted_m6946 (WebAsyncResult_t1238 * __this, bool ___synch, HttpWebResponse_t110 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::DoCallback()
extern "C" void WebAsyncResult_DoCallback_m6947 (WebAsyncResult_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::WaitUntilComplete()
extern "C" void WebAsyncResult_WaitUntilComplete_m6948 (WebAsyncResult_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
extern "C" bool WebAsyncResult_WaitUntilComplete_m6949 (WebAsyncResult_t1238 * __this, int32_t ___timeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.WebAsyncResult::get_AsyncState()
extern "C" Object_t * WebAsyncResult_get_AsyncState_m6950 (WebAsyncResult_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.WebAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1169 * WebAsyncResult_get_AsyncWaitHandle_m6951 (WebAsyncResult_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::get_IsCompleted()
extern "C" bool WebAsyncResult_get_IsCompleted_m6952 (WebAsyncResult_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebAsyncResult::get_GotException()
extern "C" bool WebAsyncResult_get_GotException_m6953 (WebAsyncResult_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebAsyncResult::get_Exception()
extern "C" Exception_t107 * WebAsyncResult_get_Exception_m6954 (WebAsyncResult_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_NBytes()
extern "C" int32_t WebAsyncResult_get_NBytes_m6955 (WebAsyncResult_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::set_NBytes(System.Int32)
extern "C" void WebAsyncResult_set_NBytes_m6956 (WebAsyncResult_t1238 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebAsyncResult::get_InnerAsyncResult()
extern "C" Object_t * WebAsyncResult_get_InnerAsyncResult_m6957 (WebAsyncResult_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebAsyncResult::set_InnerAsyncResult(System.IAsyncResult)
extern "C" void WebAsyncResult_set_InnerAsyncResult_m6958 (WebAsyncResult_t1238 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpWebResponse System.Net.WebAsyncResult::get_Response()
extern "C" HttpWebResponse_t110 * WebAsyncResult_get_Response_m6959 (WebAsyncResult_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebAsyncResult::get_Buffer()
extern "C" ByteU5BU5D_t836* WebAsyncResult_get_Buffer_m6960 (WebAsyncResult_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_Offset()
extern "C" int32_t WebAsyncResult_get_Offset_m6961 (WebAsyncResult_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebAsyncResult::get_Size()
extern "C" int32_t WebAsyncResult_get_Size_m6962 (WebAsyncResult_t1238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
