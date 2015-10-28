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

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct TripleDESCryptoServiceProvider_t2076;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1466;
// System.Byte[]
struct ByteU5BU5D_t836;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::.ctor()
extern "C" void TripleDESCryptoServiceProvider__ctor_m12923 (TripleDESCryptoServiceProvider_t2076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateIV()
extern "C" void TripleDESCryptoServiceProvider_GenerateIV_m12924 (TripleDESCryptoServiceProvider_t2076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateKey()
extern "C" void TripleDESCryptoServiceProvider_GenerateKey_m12925 (TripleDESCryptoServiceProvider_t2076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * TripleDESCryptoServiceProvider_CreateDecryptor_m12926 (TripleDESCryptoServiceProvider_t2076 * __this, ByteU5BU5D_t836* ___rgbKey, ByteU5BU5D_t836* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * TripleDESCryptoServiceProvider_CreateEncryptor_m12927 (TripleDESCryptoServiceProvider_t2076 * __this, ByteU5BU5D_t836* ___rgbKey, ByteU5BU5D_t836* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
