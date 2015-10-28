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

// System.Net.FtpWebResponse
struct FtpWebResponse_t1217;
// System.Net.FtpWebRequest
struct FtpWebRequest_t1222;
// System.Uri
struct Uri_t1192;
// System.String
struct String_t;
// System.Net.FtpStatus
struct FtpStatus_t1224;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t119;
// System.IO.Stream
struct Stream_t112;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_FtpStatusCode.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Boolean)
extern "C" void FtpWebResponse__ctor_m6731 (FtpWebResponse_t1217 * __this, FtpWebRequest_t1222 * ___request, Uri_t1192 * ___uri, String_t* ___method, bool ___keepAlive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatusCode,System.String)
extern "C" void FtpWebResponse__ctor_m6732 (FtpWebResponse_t1217 * __this, FtpWebRequest_t1222 * ___request, Uri_t1192 * ___uri, String_t* ___method, int32_t ___statusCode, String_t* ___statusDescription, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatus)
extern "C" void FtpWebResponse__ctor_m6733 (FtpWebResponse_t1217 * __this, FtpWebRequest_t1222 * ___request, Uri_t1192 * ___uri, String_t* ___method, FtpStatus_t1224 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpWebResponse::get_ContentLength()
extern "C" int64_t FtpWebResponse_get_ContentLength_m6734 (FtpWebResponse_t1217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FtpWebResponse::get_Headers()
extern "C" WebHeaderCollection_t119 * FtpWebResponse_get_Headers_m6735 (FtpWebResponse_t1217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_LastModified(System.DateTime)
extern "C" void FtpWebResponse_set_LastModified_m6736 (FtpWebResponse_t1217 * __this, DateTime_t615  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_BannerMessage(System.String)
extern "C" void FtpWebResponse_set_BannerMessage_m6737 (FtpWebResponse_t1217 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_WelcomeMessage(System.String)
extern "C" void FtpWebResponse_set_WelcomeMessage_m6738 (FtpWebResponse_t1217 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::Close()
extern "C" void FtpWebResponse_Close_m6739 (FtpWebResponse_t1217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FtpWebResponse::GetResponseStream()
extern "C" Stream_t112 * FtpWebResponse_GetResponseStream_m6740 (FtpWebResponse_t1217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_Stream(System.IO.Stream)
extern "C" void FtpWebResponse_set_Stream_m6741 (FtpWebResponse_t1217 * __this, Stream_t112 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::UpdateStatus(System.Net.FtpStatus)
extern "C" void FtpWebResponse_UpdateStatus_m6742 (FtpWebResponse_t1217 * __this, FtpStatus_t1224 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::CheckDisposed()
extern "C" void FtpWebResponse_CheckDisposed_m6743 (FtpWebResponse_t1217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebResponse::IsFinal()
extern "C" bool FtpWebResponse_IsFinal_m6744 (FtpWebResponse_t1217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
