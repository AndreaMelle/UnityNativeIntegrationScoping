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

// System.Net.DigestClient
struct DigestClient_t1205;
// System.Collections.Hashtable
struct Hashtable_t1127;
// System.Net.Authorization
struct Authorization_t1185;
// System.String
struct String_t;
// System.Net.WebRequest
struct WebRequest_t118;
// System.Net.ICredentials
struct ICredentials_t1213;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.DigestClient::.ctor()
extern "C" void DigestClient__ctor_m6573 (DigestClient_t1205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestClient::.cctor()
extern "C" void DigestClient__cctor_m6574 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Net.DigestClient::get_Cache()
extern "C" Hashtable_t1127 * DigestClient_get_Cache_m6575 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestClient::CheckExpired(System.Int32)
extern "C" void DigestClient_CheckExpired_m6576 (Object_t * __this /* static, unused */, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1185 * DigestClient_Authenticate_m6577 (DigestClient_t1205 * __this, String_t* ___challenge, WebRequest_t118 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t1185 * DigestClient_PreAuthenticate_m6578 (DigestClient_t1205 * __this, WebRequest_t118 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestClient::get_AuthenticationType()
extern "C" String_t* DigestClient_get_AuthenticationType_m6579 (DigestClient_t1205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
