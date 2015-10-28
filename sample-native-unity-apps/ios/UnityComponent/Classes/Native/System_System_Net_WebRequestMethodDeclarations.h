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

// System.Net.WebRequest
struct WebRequest_t118;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t728;
// System.String
struct String_t;
// System.Exception
struct Exception_t107;
// System.Net.ICredentials
struct ICredentials_t1213;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t119;
// System.Net.IWebProxy
struct IWebProxy_t1214;
// System.Uri
struct Uri_t1192;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t113;
// System.Net.IWebRequestCreate
struct IWebRequestCreate_t1393;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebRequest::.ctor()
extern "C" void WebRequest__ctor_m7104 (WebRequest_t118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebRequest__ctor_m7105 (WebRequest_t118 * __this, SerializationInfo_t728 * ___serializationInfo, StreamingContext_t729  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.cctor()
extern "C" void WebRequest__cctor_m7106 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m7107 (WebRequest_t118 * __this, SerializationInfo_t728 * ___serializationInfo, StreamingContext_t729  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddDynamicPrefix(System.String,System.String)
extern "C" void WebRequest_AddDynamicPrefix_m7108 (Object_t * __this /* static, unused */, String_t* ___protocol, String_t* ___implementor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebRequest::GetMustImplement()
extern "C" Exception_t107 * WebRequest_GetMustImplement_m7109 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebRequest::get_ContentLength()
extern "C" int64_t WebRequest_get_ContentLength_m7110 (WebRequest_t118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.WebRequest::get_Credentials()
extern "C" Object_t * WebRequest_get_Credentials_m7111 (WebRequest_t118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebRequest::get_Headers()
extern "C" WebHeaderCollection_t119 * WebRequest_get_Headers_m7112 (WebRequest_t118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebRequest::get_Method()
extern "C" String_t* WebRequest_get_Method_m7113 (WebRequest_t118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_Method(System.String)
extern "C" void WebRequest_set_Method_m7114 (WebRequest_t118 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_Proxy()
extern "C" Object_t * WebRequest_get_Proxy_m7115 (WebRequest_t118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebRequest::get_RequestUri()
extern "C" Uri_t1192 * WebRequest_get_RequestUri_m7116 (WebRequest_t118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_DefaultWebProxy()
extern "C" Object_t * WebRequest_get_DefaultWebProxy_m7117 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::GetDefaultWebProxy()
extern "C" Object_t * WebRequest_GetDefaultWebProxy_m7118 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::Abort()
extern "C" void WebRequest_Abort_m7119 (WebRequest_t118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C" Object_t * WebRequest_BeginGetResponse_m7120 (WebRequest_t118 * __this, AsyncCallback_t34 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebRequest::Create(System.String)
extern "C" WebRequest_t118 * WebRequest_Create_m267 (Object_t * __this /* static, unused */, String_t* ___requestUriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebRequest::Create(System.Uri)
extern "C" WebRequest_t118 * WebRequest_Create_m7121 (Object_t * __this /* static, unused */, Uri_t1192 * ___requestUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebRequest::EndGetResponse(System.IAsyncResult)
extern "C" WebResponse_t113 * WebRequest_EndGetResponse_m7122 (WebRequest_t118 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebRequest::GetResponse()
extern "C" WebResponse_t113 * WebRequest_GetResponse_m7123 (WebRequest_t118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebRequest_GetObjectData_m7124 (WebRequest_t118 * __this, SerializationInfo_t728 * ___serializationInfo, StreamingContext_t729  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebRequestCreate System.Net.WebRequest::GetCreator(System.String)
extern "C" Object_t * WebRequest_GetCreator_m7125 (Object_t * __this /* static, unused */, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddPrefix(System.String,System.Type)
extern "C" void WebRequest_AddPrefix_m7126 (Object_t * __this /* static, unused */, String_t* ___prefix, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
