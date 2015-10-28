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

// System.Net.FtpWebRequest
struct FtpWebRequest_t1222;
// System.Uri
struct Uri_t1192;
// System.Exception
struct Exception_t107;
// System.Net.ICredentials
struct ICredentials_t1213;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t119;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t1214;
// System.Net.ServicePoint
struct ServicePoint_t1227;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t113;
// System.Net.FtpStatus
struct FtpStatus_t1224;
// System.Net.Sockets.Socket
struct Socket_t1164;
// System.String[]
struct StringU5BU5D_t669;
// System.IO.Stream
struct Stream_t112;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t101;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t102;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_FtpWebRequest_RequestState.h"
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void System.Net.FtpWebRequest::.ctor(System.Uri)
extern "C" void FtpWebRequest__ctor_m6676 (FtpWebRequest_t1222 * __this, Uri_t1192 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::.cctor()
extern "C" void FtpWebRequest__cctor_m6677 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpWebRequest::GetMustImplement()
extern "C" Exception_t107 * FtpWebRequest_GetMustImplement_m6678 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpWebRequest::get_ContentLength()
extern "C" int64_t FtpWebRequest_get_ContentLength_m6679 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.FtpWebRequest::get_Credentials()
extern "C" Object_t * FtpWebRequest_get_Credentials_m6680 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::get_EnableSsl()
extern "C" bool FtpWebRequest_get_EnableSsl_m6681 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FtpWebRequest::get_Headers()
extern "C" WebHeaderCollection_t119 * FtpWebRequest_get_Headers_m6682 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::get_Method()
extern "C" String_t* FtpWebRequest_get_Method_m6683 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_Method(System.String)
extern "C" void FtpWebRequest_set_Method_m6684 (FtpWebRequest_t1222 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.FtpWebRequest::get_Proxy()
extern "C" Object_t * FtpWebRequest_get_Proxy_m6685 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.FtpWebRequest::get_ReadWriteTimeout()
extern "C" int32_t FtpWebRequest_get_ReadWriteTimeout_m6686 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.FtpWebRequest::get_RequestUri()
extern "C" Uri_t1192 * FtpWebRequest_get_RequestUri_m6687 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.FtpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t1227 * FtpWebRequest_get_ServicePoint_m6688 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::get_DataType()
extern "C" String_t* FtpWebRequest_get_DataType_m6689 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebRequest/RequestState System.Net.FtpWebRequest::get_State()
extern "C" int32_t FtpWebRequest_get_State_m6690 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::set_State(System.Net.FtpWebRequest/RequestState)
extern "C" void FtpWebRequest_set_State_m6691 (FtpWebRequest_t1222 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::Abort()
extern "C" void FtpWebRequest_Abort_m6692 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.FtpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C" Object_t * FtpWebRequest_BeginGetResponse_m6693 (FtpWebRequest_t1222 * __this, AsyncCallback_t34 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FtpWebRequest::EndGetResponse(System.IAsyncResult)
extern "C" WebResponse_t113 * FtpWebRequest_EndGetResponse_m6694 (FtpWebRequest_t1222 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.FtpWebRequest::GetResponse()
extern "C" WebResponse_t113 * FtpWebRequest_GetResponse_m6695 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.FtpWebRequest::GetServicePoint()
extern "C" ServicePoint_t1227 * FtpWebRequest_GetServicePoint_m6696 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ResolveHost()
extern "C" void FtpWebRequest_ResolveHost_m6697 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessRequest()
extern "C" void FtpWebRequest_ProcessRequest_m6698 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetType()
extern "C" void FtpWebRequest_SetType_m6699 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::GetRemoteFolderPath(System.Uri)
extern "C" String_t* FtpWebRequest_GetRemoteFolderPath_m6700 (FtpWebRequest_t1222 * __this, Uri_t1192 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CWDAndSetFileName(System.Uri)
extern "C" void FtpWebRequest_CWDAndSetFileName_m6701 (FtpWebRequest_t1222 * __this, Uri_t1192 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessMethod()
extern "C" void FtpWebRequest_ProcessMethod_m6702 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseControlConnection()
extern "C" void FtpWebRequest_CloseControlConnection_m6703 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseDataConnection()
extern "C" void FtpWebRequest_CloseDataConnection_m6704 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CloseConnection()
extern "C" void FtpWebRequest_CloseConnection_m6705 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::ProcessSimpleMethod()
extern "C" void FtpWebRequest_ProcessSimpleMethod_m6706 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::UploadData()
extern "C" void FtpWebRequest_UploadData_m6707 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::DownloadData()
extern "C" void FtpWebRequest_DownloadData_m6708 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckRequestStarted()
extern "C" void FtpWebRequest_CheckRequestStarted_m6709 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OpenControlConnection()
extern "C" void FtpWebRequest_OpenControlConnection_m6710 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebRequest::GetInitialPath(System.Net.FtpStatus)
extern "C" String_t* FtpWebRequest_GetInitialPath_m6711 (Object_t * __this /* static, unused */, FtpStatus_t1224 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.FtpWebRequest::SetupPassiveConnection(System.String)
extern "C" Socket_t1164 * FtpWebRequest_SetupPassiveConnection_m6712 (FtpWebRequest_t1222 * __this, String_t* ___statusDescription, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpWebRequest::CreateExceptionFromResponse(System.Net.FtpStatus)
extern "C" Exception_t107 * FtpWebRequest_CreateExceptionFromResponse_m6713 (FtpWebRequest_t1222 * __this, FtpStatus_t1224 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetTransferCompleted()
extern "C" void FtpWebRequest_SetTransferCompleted_m6714 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OperationCompleted()
extern "C" void FtpWebRequest_OperationCompleted_m6715 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::SetCompleteWithError(System.Exception)
extern "C" void FtpWebRequest_SetCompleteWithError_m6716 (FtpWebRequest_t1222 * __this, Exception_t107 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.FtpWebRequest::InitDataConnection()
extern "C" Socket_t1164 * FtpWebRequest_InitDataConnection_m6717 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::OpenDataConnection()
extern "C" void FtpWebRequest_OpenDataConnection_m6718 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::Authenticate()
extern "C" void FtpWebRequest_Authenticate_m6719 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::SendCommand(System.String,System.String[])
extern "C" FtpStatus_t1224 * FtpWebRequest_SendCommand_m6720 (FtpWebRequest_t1222 * __this, String_t* ___command, StringU5BU5D_t669* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::SendCommand(System.Boolean,System.String,System.String[])
extern "C" FtpStatus_t1224 * FtpWebRequest_SendCommand_m6721 (FtpWebRequest_t1222 * __this, bool ___waitResponse, String_t* ___command, StringU5BU5D_t669* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::ServiceNotAvailable()
extern "C" FtpStatus_t1224 * FtpWebRequest_ServiceNotAvailable_m6722 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatus System.Net.FtpWebRequest::GetResponseStatus()
extern "C" FtpStatus_t1224 * FtpWebRequest_GetResponseStatus_m6723 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::InitiateSecureConnection(System.IO.Stream&)
extern "C" void FtpWebRequest_InitiateSecureConnection_m6724 (FtpWebRequest_t1222 * __this, Stream_t112 ** ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::ChangeToSSLSocket(System.IO.Stream&)
extern "C" bool FtpWebRequest_ChangeToSSLSocket_m6725 (FtpWebRequest_t1222 * __this, Stream_t112 ** ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::InFinalState()
extern "C" bool FtpWebRequest_InFinalState_m6726 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::InProgress()
extern "C" bool FtpWebRequest_InProgress_m6727 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckIfAborted()
extern "C" void FtpWebRequest_CheckIfAborted_m6728 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::CheckFinalState()
extern "C" void FtpWebRequest_CheckFinalState_m6729 (FtpWebRequest_t1222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::<callback>m__B(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C" bool FtpWebRequest_U3CcallbackU3Em__B_m6730 (Object_t * __this /* static, unused */, Object_t * ___sender, X509Certificate_t101 * ___certificate, X509Chain_t102 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
