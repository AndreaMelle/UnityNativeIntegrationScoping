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

// System.Collections.Generic.LinkedListNode`1<System.Int32>
struct LinkedListNode_1_t1039;
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t878;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m22669_gshared (LinkedListNode_1_t1039 * __this, LinkedList_1_t878 * ___list, int32_t ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m22669(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t1039 *, LinkedList_1_t878 *, int32_t, const MethodInfo*))LinkedListNode_1__ctor_m22669_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m22670_gshared (LinkedListNode_1_t1039 * __this, LinkedList_1_t878 * ___list, int32_t ___value, LinkedListNode_1_t1039 * ___previousNode, LinkedListNode_1_t1039 * ___nextNode, const MethodInfo* method);
#define LinkedListNode_1__ctor_m22670(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t1039 *, LinkedList_1_t878 *, int32_t, LinkedListNode_1_t1039 *, LinkedListNode_1_t1039 *, const MethodInfo*))LinkedListNode_1__ctor_m22670_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::Detach()
extern "C" void LinkedListNode_1_Detach_m22671_gshared (LinkedListNode_1_t1039 * __this, const MethodInfo* method);
#define LinkedListNode_1_Detach_m22671(__this, method) (( void (*) (LinkedListNode_1_t1039 *, const MethodInfo*))LinkedListNode_1_Detach_m22671_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Int32>::get_List()
extern "C" LinkedList_1_t878 * LinkedListNode_1_get_List_m22672_gshared (LinkedListNode_1_t1039 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_List_m22672(__this, method) (( LinkedList_1_t878 * (*) (LinkedListNode_1_t1039 *, const MethodInfo*))LinkedListNode_1_get_List_m22672_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Int32>::get_Next()
extern "C" LinkedListNode_1_t1039 * LinkedListNode_1_get_Next_m6030_gshared (LinkedListNode_1_t1039 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Next_m6030(__this, method) (( LinkedListNode_1_t1039 * (*) (LinkedListNode_1_t1039 *, const MethodInfo*))LinkedListNode_1_get_Next_m6030_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Int32>::get_Value()
extern "C" int32_t LinkedListNode_1_get_Value_m5887_gshared (LinkedListNode_1_t1039 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Value_m5887(__this, method) (( int32_t (*) (LinkedListNode_1_t1039 *, const MethodInfo*))LinkedListNode_1_get_Value_m5887_gshared)(__this, method)
