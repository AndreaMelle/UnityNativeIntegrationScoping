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

// System.Net.WebResponse
struct WebResponse_t113;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t728;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t119;
// System.Exception
struct Exception_t107;
// System.IO.Stream
struct Stream_t112;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebResponse::.ctor()
extern "C" void WebResponse__ctor_m7127 (WebResponse_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebResponse__ctor_m7128 (WebResponse_t113 * __this, SerializationInfo_t728 * ___serializationInfo, StreamingContext_t729  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.IDisposable.Dispose()
extern "C" void WebResponse_System_IDisposable_Dispose_m7129 (WebResponse_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m7130 (WebResponse_t113 * __this, SerializationInfo_t728 * ___serializationInfo, StreamingContext_t729  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebResponse::get_ContentLength()
extern "C" int64_t WebResponse_get_ContentLength_m7131 (WebResponse_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebResponse::get_Headers()
extern "C" WebHeaderCollection_t119 * WebResponse_get_Headers_m7132 (WebResponse_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebResponse::GetMustImplement()
extern "C" Exception_t107 * WebResponse_GetMustImplement_m7133 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::Close()
extern "C" void WebResponse_Close_m7134 (WebResponse_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebResponse::GetResponseStream()
extern "C" Stream_t112 * WebResponse_GetResponseStream_m7135 (WebResponse_t113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebResponse_GetObjectData_m7136 (WebResponse_t113 * __this, SerializationInfo_t728 * ___serializationInfo, StreamingContext_t729  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
