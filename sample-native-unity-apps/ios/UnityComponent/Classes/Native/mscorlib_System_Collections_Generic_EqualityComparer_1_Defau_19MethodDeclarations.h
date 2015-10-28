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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t3273;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m27325_gshared (DefaultComparer_t3273 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m27325(__this, method) (( void (*) (DefaultComparer_t3273 *, const MethodInfo*))DefaultComparer__ctor_m27325_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m27326_gshared (DefaultComparer_t3273 * __this, DateTime_t615  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m27326(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3273 *, DateTime_t615 , const MethodInfo*))DefaultComparer_GetHashCode_m27326_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m27327_gshared (DefaultComparer_t3273 * __this, DateTime_t615  ___x, DateTime_t615  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m27327(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3273 *, DateTime_t615 , DateTime_t615 , const MethodInfo*))DefaultComparer_Equals_m27327_gshared)(__this, ___x, ___y, method)
