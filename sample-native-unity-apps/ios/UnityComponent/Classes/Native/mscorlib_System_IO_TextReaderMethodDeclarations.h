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

// System.IO.TextReader
struct TextReader_t1695;
// System.Char[]
struct CharU5BU5D_t306;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.TextReader::.ctor()
extern "C" void TextReader__ctor_m11271 (TextReader_t1695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::.cctor()
extern "C" void TextReader__cctor_m11272 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Dispose()
extern "C" void TextReader_Dispose_m11273 (TextReader_t1695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextReader::Dispose(System.Boolean)
extern "C" void TextReader_Dispose_m11274 (TextReader_t1695 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Peek()
extern "C" int32_t TextReader_Peek_m11275 (TextReader_t1695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Read()
extern "C" int32_t TextReader_Read_m11276 (TextReader_t1695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.TextReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t TextReader_Read_m11277 (TextReader_t1695 * __this, CharU5BU5D_t306* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.TextReader::ReadLine()
extern "C" String_t* TextReader_ReadLine_m11278 (TextReader_t1695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.TextReader::ReadToEnd()
extern "C" String_t* TextReader_ReadToEnd_m11279 (TextReader_t1695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader System.IO.TextReader::Synchronized(System.IO.TextReader)
extern "C" TextReader_t1695 * TextReader_Synchronized_m11280 (Object_t * __this /* static, unused */, TextReader_t1695 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
