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

// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t1159;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t101;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1156;
// System.String[]
struct StringU5BU5D_t669;
// System.IAsyncResult
struct IAsyncResult_t33;
// System.AsyncCallback
struct AsyncCallback_t34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"

// System.Void System.Net.Security.LocalCertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void LocalCertificateSelectionCallback__ctor_m7857 (LocalCertificateSelectionCallback_t1159 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::Invoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern "C" X509Certificate_t101 * LocalCertificateSelectionCallback_Invoke_m7858 (LocalCertificateSelectionCallback_t1159 * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t1156 * ___localCertificates, X509Certificate_t101 * ___remoteCertificate, StringU5BU5D_t669* ___acceptableIssuers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" X509Certificate_t101 * pinvoke_delegate_wrapper_LocalCertificateSelectionCallback_t1159(Il2CppObject* delegate, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t1156 * ___localCertificates, X509Certificate_t101 * ___remoteCertificate, StringU5BU5D_t669* ___acceptableIssuers);
// System.IAsyncResult System.Net.Security.LocalCertificateSelectionCallback::BeginInvoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.AsyncCallback,System.Object)
extern "C" Object_t * LocalCertificateSelectionCallback_BeginInvoke_m7859 (LocalCertificateSelectionCallback_t1159 * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t1156 * ___localCertificates, X509Certificate_t101 * ___remoteCertificate, StringU5BU5D_t669* ___acceptableIssuers, AsyncCallback_t34 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" X509Certificate_t101 * LocalCertificateSelectionCallback_EndInvoke_m7860 (LocalCertificateSelectionCallback_t1159 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
