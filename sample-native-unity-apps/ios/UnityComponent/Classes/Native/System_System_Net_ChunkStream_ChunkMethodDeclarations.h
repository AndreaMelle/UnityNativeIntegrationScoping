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

// System.Net.ChunkStream/Chunk
struct Chunk_t1189;
// System.Byte[]
struct ByteU5BU5D_t836;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.ChunkStream/Chunk::.ctor(System.Byte[])
extern "C" void Chunk__ctor_m6458 (Chunk_t1189 * __this, ByteU5BU5D_t836* ___chunk, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkStream/Chunk::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t Chunk_Read_m6459 (Chunk_t1189 * __this, ByteU5BU5D_t836* ___buffer, int32_t ___offset, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
