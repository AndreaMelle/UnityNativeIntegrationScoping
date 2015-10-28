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

// abl.ABMetadata
struct ABMetadata_t5;
// System.String
struct String_t;
// System.IO.StreamReader
struct StreamReader_t104;

#include "codegen/il2cpp-codegen.h"

// System.Void abl.ABMetadata::.ctor(System.String,System.UInt32,System.String,System.Int32)
extern "C" void ABMetadata__ctor_m38 (ABMetadata_t5 * __this, String_t* ___etagIn, uint32_t ___crcIn, String_t* ___bundlenameIn, int32_t ___versionIn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void abl.ABMetadata::.cctor()
extern "C" void ABMetadata__cctor_m39 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean abl.ABMetadata::TryReadMetadataForCachedAssetBundle(System.String,abl.ABMetadata&)
extern "C" bool ABMetadata_TryReadMetadataForCachedAssetBundle_m40 (Object_t * __this /* static, unused */, String_t* ___bundlename, ABMetadata_t5 ** ___abMeta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean abl.ABMetadata::TryReadMetadataForCachedAssetBundle(System.IO.StreamReader,abl.ABMetadata&)
extern "C" bool ABMetadata_TryReadMetadataForCachedAssetBundle_m41 (Object_t * __this /* static, unused */, StreamReader_t104 * ___reader, ABMetadata_t5 ** ___abMeta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void abl.ABMetadata::WriteMetadataForCachedAssetBundle(abl.ABMetadata)
extern "C" void ABMetadata_WriteMetadataForCachedAssetBundle_m42 (Object_t * __this /* static, unused */, ABMetadata_t5 * ___abMeta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
