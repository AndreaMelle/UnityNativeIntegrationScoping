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

// System.InvalidOperationException
struct InvalidOperationException_t1246;
// System.String
struct String_t;
// System.Exception
struct Exception_t107;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t728;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.InvalidOperationException::.ctor()
extern "C" void InvalidOperationException__ctor_m7887 (InvalidOperationException_t1246 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" void InvalidOperationException__ctor_m7880 (InvalidOperationException_t1246 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
extern "C" void InvalidOperationException__ctor_m8050 (InvalidOperationException_t1246 * __this, String_t* ___message, Exception_t107 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void InvalidOperationException__ctor_m8022 (InvalidOperationException_t1246 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
