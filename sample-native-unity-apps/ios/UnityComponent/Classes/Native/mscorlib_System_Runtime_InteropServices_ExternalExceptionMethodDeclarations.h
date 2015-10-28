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

// System.Runtime.InteropServices.ExternalException
struct ExternalException_t1145;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t728;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.InteropServices.ExternalException::.ctor()
extern "C" void ExternalException__ctor_m11970 (ExternalException_t1145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.ExternalException::.ctor(System.String)
extern "C" void ExternalException__ctor_m7903 (ExternalException_t1145 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.ExternalException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ExternalException__ctor_m7904 (ExternalException_t1145 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
