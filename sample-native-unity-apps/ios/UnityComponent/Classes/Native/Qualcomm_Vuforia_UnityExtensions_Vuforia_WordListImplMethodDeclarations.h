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

// Vuforia.WordListImpl
struct WordListImpl_t917;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaUnity_Storag.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordFilterMode.h"

// System.Boolean Vuforia.WordListImpl::LoadWordListFile(System.String)
extern "C" bool WordListImpl_LoadWordListFile_m4491 (WordListImpl_t917 * __this, String_t* ___relativePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::LoadWordListFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C" bool WordListImpl_LoadWordListFile_m4492 (WordListImpl_t917 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WordListImpl::AddWordsFromFile(System.String)
extern "C" int32_t WordListImpl_AddWordsFromFile_m4493 (WordListImpl_t917 * __this, String_t* ___relativePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WordListImpl::AddWordsFromFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C" int32_t WordListImpl_AddWordsFromFile_m4494 (WordListImpl_t917 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::AddWord(System.String)
extern "C" bool WordListImpl_AddWord_m4495 (WordListImpl_t917 * __this, String_t* ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::RemoveWord(System.String)
extern "C" bool WordListImpl_RemoveWord_m4496 (WordListImpl_t917 * __this, String_t* ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::ContainsWord(System.String)
extern "C" bool WordListImpl_ContainsWord_m4497 (WordListImpl_t917 * __this, String_t* ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::UnloadAllLists()
extern "C" bool WordListImpl_UnloadAllLists_m4498 (WordListImpl_t917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordFilterMode Vuforia.WordListImpl::GetFilterMode()
extern "C" int32_t WordListImpl_GetFilterMode_m4499 (WordListImpl_t917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::SetFilterMode(Vuforia.WordFilterMode)
extern "C" bool WordListImpl_SetFilterMode_m4500 (WordListImpl_t917 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::LoadFilterListFile(System.String)
extern "C" bool WordListImpl_LoadFilterListFile_m4501 (WordListImpl_t917 * __this, String_t* ___relativePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::LoadFilterListFile(System.String,Vuforia.VuforiaUnity/StorageType)
extern "C" bool WordListImpl_LoadFilterListFile_m4502 (WordListImpl_t917 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::AddWordToFilterList(System.String)
extern "C" bool WordListImpl_AddWordToFilterList_m4503 (WordListImpl_t917 * __this, String_t* ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::RemoveWordFromFilterList(System.String)
extern "C" bool WordListImpl_RemoveWordFromFilterList_m4504 (WordListImpl_t917 * __this, String_t* ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordListImpl::ClearFilterList()
extern "C" bool WordListImpl_ClearFilterList_m4505 (WordListImpl_t917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WordListImpl::GetFilterListWordCount()
extern "C" int32_t WordListImpl_GetFilterListWordCount_m4506 (WordListImpl_t917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.WordListImpl::GetFilterListWord(System.Int32)
extern "C" String_t* WordListImpl_GetFilterListWord_m4507 (WordListImpl_t917 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordListImpl::.ctor()
extern "C" void WordListImpl__ctor_m4508 (WordListImpl_t917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
