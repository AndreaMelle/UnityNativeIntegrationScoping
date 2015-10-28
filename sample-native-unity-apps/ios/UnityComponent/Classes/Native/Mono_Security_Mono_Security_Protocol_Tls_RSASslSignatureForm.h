#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.RSA
struct RSA_t1395;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1203;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t307;

#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureFor.h"

// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct  RSASslSignatureFormatter_t1538  : public AsymmetricSignatureFormatter_t1539
{
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureFormatter::key
	RSA_t1395 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureFormatter::hash
	HashAlgorithm_t1203 * ___hash_1;
};
struct RSASslSignatureFormatter_t1538_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureFormatter::<>f__switch$map16
	Dictionary_2_t307 * ___U3CU3Ef__switchU24map16_2;
};
