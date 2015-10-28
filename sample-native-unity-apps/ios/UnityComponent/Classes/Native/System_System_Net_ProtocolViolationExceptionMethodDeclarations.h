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

// System.Net.ProtocolViolationException
struct ProtocolViolationException_t1245;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t728;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.ProtocolViolationException::.ctor()
extern "C" void ProtocolViolationException__ctor_m6882 (ProtocolViolationException_t1245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ProtocolViolationException::.ctor(System.String)
extern "C" void ProtocolViolationException__ctor_m6883 (ProtocolViolationException_t1245 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ProtocolViolationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ProtocolViolationException__ctor_m6884 (ProtocolViolationException_t1245 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ProtocolViolationException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ProtocolViolationException_System_Runtime_Serialization_ISerializable_GetObjectData_m6885 (ProtocolViolationException_t1245 * __this, SerializationInfo_t728 * ___info, StreamingContext_t729  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ProtocolViolationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ProtocolViolationException_GetObjectData_m6886 (ProtocolViolationException_t1245 * __this, SerializationInfo_t728 * ___serializationInfo, StreamingContext_t729  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
