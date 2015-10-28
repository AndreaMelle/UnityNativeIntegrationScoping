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

// System.Net.CookieCollection
struct CookieCollection_t1194;
// System.Collections.Generic.IList`1<System.Net.Cookie>
struct IList_1_t1389;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t103;
// System.Net.Cookie
struct Cookie_t1191;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.CookieCollection::.ctor()
extern "C" void CookieCollection__ctor_m6516 (CookieCollection_t1194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::.cctor()
extern "C" void CookieCollection__cctor_m6517 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Net.Cookie> System.Net.CookieCollection::get_List()
extern "C" Object_t* CookieCollection_get_List_m6518 (CookieCollection_t1194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieCollection::get_Count()
extern "C" int32_t CookieCollection_get_Count_m6519 (CookieCollection_t1194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieCollection::get_IsSynchronized()
extern "C" bool CookieCollection_get_IsSynchronized_m6520 (CookieCollection_t1194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.CookieCollection::get_SyncRoot()
extern "C" Object_t * CookieCollection_get_SyncRoot_m6521 (CookieCollection_t1194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::CopyTo(System.Array,System.Int32)
extern "C" void CookieCollection_CopyTo_m6522 (CookieCollection_t1194 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.CookieCollection::GetEnumerator()
extern "C" Object_t * CookieCollection_GetEnumerator_m6523 (CookieCollection_t1194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::Add(System.Net.Cookie)
extern "C" void CookieCollection_Add_m6524 (CookieCollection_t1194 * __this, Cookie_t1191 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieCollection::Sort()
extern "C" void CookieCollection_Sort_m6525 (CookieCollection_t1194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieCollection::SearchCookie(System.Net.Cookie)
extern "C" int32_t CookieCollection_SearchCookie_m6526 (CookieCollection_t1194 * __this, Cookie_t1191 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Cookie System.Net.CookieCollection::get_Item(System.Int32)
extern "C" Cookie_t1191 * CookieCollection_get_Item_m6527 (CookieCollection_t1194 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
