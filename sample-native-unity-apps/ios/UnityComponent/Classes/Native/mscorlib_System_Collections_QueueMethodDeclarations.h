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

// System.Collections.Queue
struct Queue_t1175;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Object[]
struct ObjectU5BU5D_t146;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Queue::.ctor()
extern "C" void Queue__ctor_m8047 (Queue_t1175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::.ctor(System.Int32)
extern "C" void Queue__ctor_m7934 (Queue_t1175 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::.ctor(System.Int32,System.Single)
extern "C" void Queue__ctor_m10730 (Queue_t1175 * __this, int32_t ___capacity, float ___growFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Queue::get_Count()
extern "C" int32_t Queue_get_Count_m10731 (Queue_t1175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Queue::get_IsSynchronized()
extern "C" bool Queue_get_IsSynchronized_m10732 (Queue_t1175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::get_SyncRoot()
extern "C" Object_t * Queue_get_SyncRoot_m10733 (Queue_t1175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::CopyTo(System.Array,System.Int32)
extern "C" void Queue_CopyTo_m10734 (Queue_t1175 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Queue::GetEnumerator()
extern "C" Object_t * Queue_GetEnumerator_m10735 (Queue_t1175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::Clone()
extern "C" Object_t * Queue_Clone_m10736 (Queue_t1175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::Clear()
extern "C" void Queue_Clear_m10737 (Queue_t1175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::Dequeue()
extern "C" Object_t * Queue_Dequeue_m10738 (Queue_t1175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::Enqueue(System.Object)
extern "C" void Queue_Enqueue_m10739 (Queue_t1175 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue::Peek()
extern "C" Object_t * Queue_Peek_m10740 (Queue_t1175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.Queue::ToArray()
extern "C" ObjectU5BU5D_t146* Queue_ToArray_m10741 (Queue_t1175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::grow()
extern "C" void Queue_grow_m10742 (Queue_t1175 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
