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

// System.Net.BasicClient
struct BasicClient_t1187;
// System.Net.Authorization
struct Authorization_t1185;
// System.String
struct String_t;
// System.Net.WebRequest
struct WebRequest_t118;
// System.Net.ICredentials
struct ICredentials_t1213;
// System.Byte[]
struct ByteU5BU5D_t836;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.BasicClient::.ctor()
extern "C" void BasicClient__ctor_m6452 (BasicClient_t1187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1185 * BasicClient_Authenticate_m6453 (BasicClient_t1187 * __this, String_t* ___challenge, WebRequest_t118 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.BasicClient::GetBytes(System.String)
extern "C" ByteU5BU5D_t836* BasicClient_GetBytes_m6454 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::InternalAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1185 * BasicClient_InternalAuthenticate_m6455 (Object_t * __this /* static, unused */, WebRequest_t118 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.BasicClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1185 * BasicClient_PreAuthenticate_m6456 (BasicClient_t1187 * __this, WebRequest_t118 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.BasicClient::get_AuthenticationType()
extern "C" String_t* BasicClient_get_AuthenticationType_m6457 (BasicClient_t1187 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
