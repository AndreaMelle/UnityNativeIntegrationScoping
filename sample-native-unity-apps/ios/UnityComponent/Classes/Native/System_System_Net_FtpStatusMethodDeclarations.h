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

// System.Net.FtpStatus
struct FtpStatus_t1224;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_FtpStatusCode.h"

// System.Void System.Net.FtpStatus::.ctor(System.Net.FtpStatusCode,System.String)
extern "C" void FtpStatus__ctor_m6673 (FtpStatus_t1224 * __this, int32_t ___statusCode, String_t* ___statusDescription, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatusCode System.Net.FtpStatus::get_StatusCode()
extern "C" int32_t FtpStatus_get_StatusCode_m6674 (FtpStatus_t1224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpStatus::get_StatusDescription()
extern "C" String_t* FtpStatus_get_StatusDescription_m6675 (FtpStatus_t1224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
