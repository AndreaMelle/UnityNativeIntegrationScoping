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

// System.Net.ServicePointManager/ChainValidationHelper
struct ChainValidationHelper_t1250;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t1390;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1391;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t102;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t1278;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1280;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void System.Net.ServicePointManager/ChainValidationHelper::.ctor(System.Object)
extern "C" void ChainValidationHelper__ctor_m6914 (ChainValidationHelper_t1250 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager/ChainValidationHelper::.cctor()
extern "C" void ChainValidationHelper__cctor_m6915 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ServicePointManager/ChainValidationHelper::get_Host()
extern "C" String_t* ChainValidationHelper_get_Host_m6916 (ChainValidationHelper_t1250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult System.Net.ServicePointManager/ChainValidationHelper::ValidateChain(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t1390 * ChainValidationHelper_ValidateChain_m6917 (ChainValidationHelper_t1250 * __this, X509CertificateCollection_t1391 * ___certs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager/ChainValidationHelper::GetStatusFromChain(System.Security.Cryptography.X509Certificates.X509Chain)
extern "C" int32_t ChainValidationHelper_GetStatusFromChain_m6918 (Object_t * __this /* static, unused */, X509Chain_t102 * ___chain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.SslPolicyErrors System.Net.ServicePointManager/ChainValidationHelper::GetErrorsFromChain(System.Security.Cryptography.X509Certificates.X509Chain)
extern "C" int32_t ChainValidationHelper_GetErrorsFromChain_m6919 (Object_t * __this /* static, unused */, X509Chain_t102 * ___chain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckCertificateUsage(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool ChainValidationHelper_CheckCertificateUsage_m6920 (Object_t * __this /* static, unused */, X509Certificate2_t1278 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckServerIdentity(Mono.Security.X509.X509Certificate,System.String)
extern "C" bool ChainValidationHelper_CheckServerIdentity_m6921 (Object_t * __this /* static, unused */, X509Certificate_t1280 * ___cert, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckDomainName(System.String,System.String)
extern "C" bool ChainValidationHelper_CheckDomainName_m6922 (Object_t * __this /* static, unused */, String_t* ___subjectName, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::Match(System.String,System.String)
extern "C" bool ChainValidationHelper_Match_m6923 (Object_t * __this /* static, unused */, String_t* ___hostname, String_t* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
