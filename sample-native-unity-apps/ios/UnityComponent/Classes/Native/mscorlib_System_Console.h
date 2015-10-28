#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.TextWriter
struct TextWriter_t1426;
// System.IO.TextReader
struct TextReader_t1695;
// System.Text.Encoding
struct Encoding_t114;

#include "mscorlib_System_Object.h"

// System.Console
struct  Console_t1418  : public Object_t
{
};
struct Console_t1418_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t1426 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t1426 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1695 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t114 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t114 * ___outputEncoding_4;
};
