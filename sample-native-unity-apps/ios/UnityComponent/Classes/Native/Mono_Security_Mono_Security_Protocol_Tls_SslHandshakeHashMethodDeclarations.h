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

// Mono.Security.Protocol.Tls.SslHandshakeHash
struct SslHandshakeHash_t1544;
// System.Byte[]
struct ByteU5BU5D_t836;
// System.Security.Cryptography.RSA
struct RSA_t1395;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::.ctor(System.Byte[])
extern "C" void SslHandshakeHash__ctor_m8831 (SslHandshakeHash_t1544 * __this, ByteU5BU5D_t836* ___secret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::Initialize()
extern "C" void SslHandshakeHash_Initialize_m8832 (SslHandshakeHash_t1544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::HashFinal()
extern "C" ByteU5BU5D_t836* SslHandshakeHash_HashFinal_m8833 (SslHandshakeHash_t1544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void SslHandshakeHash_HashCore_m8834 (SslHandshakeHash_t1544 * __this, ByteU5BU5D_t836* ___array, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::CreateSignature(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t836* SslHandshakeHash_CreateSignature_m8835 (SslHandshakeHash_t1544 * __this, RSA_t1395 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::initializePad()
extern "C" void SslHandshakeHash_initializePad_m8836 (SslHandshakeHash_t1544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
