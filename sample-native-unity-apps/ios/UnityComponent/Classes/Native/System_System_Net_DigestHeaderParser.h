#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t669;

#include "mscorlib_System_Object.h"

// System.Net.DigestHeaderParser
struct  DigestHeaderParser_t1201  : public Object_t
{
	// System.String System.Net.DigestHeaderParser::header
	String_t* ___header_0;
	// System.Int32 System.Net.DigestHeaderParser::length
	int32_t ___length_1;
	// System.Int32 System.Net.DigestHeaderParser::pos
	int32_t ___pos_2;
	// System.String[] System.Net.DigestHeaderParser::values
	StringU5BU5D_t669* ___values_4;
};
struct DigestHeaderParser_t1201_StaticFields{
	// System.String[] System.Net.DigestHeaderParser::keywords
	StringU5BU5D_t669* ___keywords_3;
};
