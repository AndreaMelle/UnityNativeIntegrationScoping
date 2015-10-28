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

// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t1390;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.ValidationResult::.ctor(System.Boolean,System.Boolean,System.Int32)
extern "C" void ValidationResult__ctor_m8027 (ValidationResult_t1390 * __this, bool ___trusted, bool ___user_denied, int32_t ___error_code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ValidationResult::get_Trusted()
extern "C" bool ValidationResult_get_Trusted_m8792 (ValidationResult_t1390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.ValidationResult::get_ErrorCode()
extern "C" int32_t ValidationResult_get_ErrorCode_m8793 (ValidationResult_t1390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
