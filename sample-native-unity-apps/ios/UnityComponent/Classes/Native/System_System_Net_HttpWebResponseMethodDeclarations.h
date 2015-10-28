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

// System.Net.HttpWebResponse
struct HttpWebResponse_t110;
// System.Uri
struct Uri_t1192;
// System.String
struct String_t;
// System.Net.WebConnectionData
struct WebConnectionData_t1256;
// System.Net.CookieContainer
struct CookieContainer_t1196;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t728;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t119;
// System.IO.Stream
struct Stream_t112;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_System_Net_HttpStatusCode.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.HttpWebResponse::.ctor(System.Uri,System.String,System.Net.WebConnectionData,System.Net.CookieContainer)
extern "C" void HttpWebResponse__ctor_m6798 (HttpWebResponse_t110 * __this, Uri_t1192 * ___uri, String_t* ___method, WebConnectionData_t1256 * ___data, CookieContainer_t1196 * ___container, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebResponse__ctor_m6799 (HttpWebResponse_t110 * __this, SerializationInfo_t728 * ___serializationInfo, StreamingContext_t729  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m6800 (HttpWebResponse_t110 * __this, SerializationInfo_t728 * ___serializationInfo, StreamingContext_t729  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.IDisposable.Dispose()
extern "C" void HttpWebResponse_System_IDisposable_Dispose_m6801 (HttpWebResponse_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.HttpWebResponse::get_ContentLength()
extern "C" int64_t HttpWebResponse_get_ContentLength_m6802 (HttpWebResponse_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpWebResponse::get_Headers()
extern "C" WebHeaderCollection_t119 * HttpWebResponse_get_Headers_m6803 (HttpWebResponse_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpStatusCode System.Net.HttpWebResponse::get_StatusCode()
extern "C" int32_t HttpWebResponse_get_StatusCode_m237 (HttpWebResponse_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::get_StatusDescription()
extern "C" String_t* HttpWebResponse_get_StatusDescription_m6804 (HttpWebResponse_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::GetResponseHeader(System.String)
extern "C" String_t* HttpWebResponse_GetResponseHeader_m238 (HttpWebResponse_t110 * __this, String_t* ___headerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::ReadAll()
extern "C" void HttpWebResponse_ReadAll_m6805 (HttpWebResponse_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.HttpWebResponse::GetResponseStream()
extern "C" Stream_t112 * HttpWebResponse_GetResponseStream_m6806 (HttpWebResponse_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebResponse_GetObjectData_m6807 (HttpWebResponse_t110 * __this, SerializationInfo_t728 * ___serializationInfo, StreamingContext_t729  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Close()
extern "C" void HttpWebResponse_Close_m6808 (HttpWebResponse_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Dispose(System.Boolean)
extern "C" void HttpWebResponse_Dispose_m6809 (HttpWebResponse_t110 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::CheckDisposed()
extern "C" void HttpWebResponse_CheckDisposed_m6810 (HttpWebResponse_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::FillCookies()
extern "C" void HttpWebResponse_FillCookies_m6811 (HttpWebResponse_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie(System.String)
extern "C" void HttpWebResponse_SetCookie_m6812 (HttpWebResponse_t110 * __this, String_t* ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie2(System.String)
extern "C" void HttpWebResponse_SetCookie2_m6813 (HttpWebResponse_t110 * __this, String_t* ___cookies_str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.HttpWebResponse::TryParseCookieExpires(System.String)
extern "C" DateTime_t615  HttpWebResponse_TryParseCookieExpires_m6814 (HttpWebResponse_t110 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
