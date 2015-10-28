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

// System.Text.UTF7Encoding/UTF7Decoder
struct UTF7Decoder_t2121;
// System.Byte[]
struct ByteU5BU5D_t836;
// System.Char[]
struct CharU5BU5D_t306;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.UTF7Encoding/UTF7Decoder::.ctor()
extern "C" void UTF7Decoder__ctor_m13202 (UTF7Decoder_t2121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding/UTF7Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UTF7Decoder_GetChars_m13203 (UTF7Decoder_t2121 * __this, ByteU5BU5D_t836* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t306* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
