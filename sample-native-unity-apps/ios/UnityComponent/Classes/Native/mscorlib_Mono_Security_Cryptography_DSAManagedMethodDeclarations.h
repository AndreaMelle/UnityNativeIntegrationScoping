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

// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t1665;
// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t1664;
// System.Byte[]
struct ByteU5BU5D_t836;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1204;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.DSAManaged::.ctor(System.Int32)
extern "C" void DSAManaged__ctor_m10173 (DSAManaged_t1665 * __this, int32_t ___dwKeySize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::add_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler)
extern "C" void DSAManaged_add_KeyGenerated_m10174 (DSAManaged_t1665 * __this, KeyGeneratedEventHandler_t1664 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::remove_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler)
extern "C" void DSAManaged_remove_KeyGenerated_m10175 (DSAManaged_t1665 * __this, KeyGeneratedEventHandler_t1664 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Finalize()
extern "C" void DSAManaged_Finalize_m10176 (DSAManaged_t1665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Generate()
extern "C" void DSAManaged_Generate_m10177 (DSAManaged_t1665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::GenerateKeyPair()
extern "C" void DSAManaged_GenerateKeyPair_m10178 (DSAManaged_t1665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::add(System.Byte[],System.Byte[],System.Int32)
extern "C" void DSAManaged_add_m10179 (DSAManaged_t1665 * __this, ByteU5BU5D_t836* ___a, ByteU5BU5D_t836* ___b, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::GenerateParams(System.Int32)
extern "C" void DSAManaged_GenerateParams_m10180 (DSAManaged_t1665 * __this, int32_t ___keyLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.DSAManaged::get_Random()
extern "C" RandomNumberGenerator_t1204 * DSAManaged_get_Random_m10181 (DSAManaged_t1665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.DSAManaged::get_KeySize()
extern "C" int32_t DSAManaged_get_KeySize_m10182 (DSAManaged_t1665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.DSAManaged::get_PublicOnly()
extern "C" bool DSAManaged_get_PublicOnly_m10183 (DSAManaged_t1665 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.DSAManaged::NormalizeArray(System.Byte[])
extern "C" ByteU5BU5D_t836* DSAManaged_NormalizeArray_m10184 (DSAManaged_t1665 * __this, ByteU5BU5D_t836* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.Cryptography.DSAManaged::ExportParameters(System.Boolean)
extern "C" DSAParameters_t1438  DSAManaged_ExportParameters_m10185 (DSAManaged_t1665 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::ImportParameters(System.Security.Cryptography.DSAParameters)
extern "C" void DSAManaged_ImportParameters_m10186 (DSAManaged_t1665 * __this, DSAParameters_t1438  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.DSAManaged::CreateSignature(System.Byte[])
extern "C" ByteU5BU5D_t836* DSAManaged_CreateSignature_m10187 (DSAManaged_t1665 * __this, ByteU5BU5D_t836* ___rgbHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.DSAManaged::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool DSAManaged_VerifySignature_m10188 (DSAManaged_t1665 * __this, ByteU5BU5D_t836* ___rgbHash, ByteU5BU5D_t836* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Dispose(System.Boolean)
extern "C" void DSAManaged_Dispose_m10189 (DSAManaged_t1665 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
