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

// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t1434;
// System.Security.Cryptography.CspParameters
struct CspParameters_t1575;
// System.Byte[]
struct ByteU5BU5D_t836;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1392;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor()
extern "C" void RSACryptoServiceProvider__ctor_m12782 (RSACryptoServiceProvider_t1434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Security.Cryptography.CspParameters)
extern "C" void RSACryptoServiceProvider__ctor_m9057 (RSACryptoServiceProvider_t1434 * __this, CspParameters_t1575 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Int32)
extern "C" void RSACryptoServiceProvider__ctor_m8073 (RSACryptoServiceProvider_t1434 * __this, int32_t ___dwKeySize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.cctor()
extern "C" void RSACryptoServiceProvider__cctor_m12783 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Common(System.Int32,System.Security.Cryptography.CspParameters)
extern "C" void RSACryptoServiceProvider_Common_m12784 (RSACryptoServiceProvider_t1434 * __this, int32_t ___dwKeySize, CspParameters_t1575 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Finalize()
extern "C" void RSACryptoServiceProvider_Finalize_m12785 (RSACryptoServiceProvider_t1434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RSACryptoServiceProvider::get_KeySize()
extern "C" int32_t RSACryptoServiceProvider_get_KeySize_m12786 (RSACryptoServiceProvider_t1434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::get_PublicOnly()
extern "C" bool RSACryptoServiceProvider_get_PublicOnly_m8059 (RSACryptoServiceProvider_t1434 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::DecryptValue(System.Byte[])
extern "C" ByteU5BU5D_t836* RSACryptoServiceProvider_DecryptValue_m12787 (RSACryptoServiceProvider_t1434 * __this, ByteU5BU5D_t836* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::EncryptValue(System.Byte[])
extern "C" ByteU5BU5D_t836* RSACryptoServiceProvider_EncryptValue_m12788 (RSACryptoServiceProvider_t1434 * __this, ByteU5BU5D_t836* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSACryptoServiceProvider::ExportParameters(System.Boolean)
extern "C" RSAParameters_t1436  RSACryptoServiceProvider_ExportParameters_m12789 (RSACryptoServiceProvider_t1434 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.RSAParameters)
extern "C" void RSACryptoServiceProvider_ImportParameters_m12790 (RSACryptoServiceProvider_t1434 * __this, RSAParameters_t1436  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Dispose(System.Boolean)
extern "C" void RSACryptoServiceProvider_Dispose_m12791 (RSACryptoServiceProvider_t1434 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
extern "C" void RSACryptoServiceProvider_OnKeyGenerated_m12792 (RSACryptoServiceProvider_t1434 * __this, Object_t * ___sender, EventArgs_t1392 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
