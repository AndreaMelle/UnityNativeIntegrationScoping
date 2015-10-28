#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t1192;
// System.IO.FileStream
struct FileStream_t1208;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t119;

#include "System_System_Net_WebResponse.h"

// System.Net.FileWebResponse
struct  FileWebResponse_t1211  : public WebResponse_t113
{
	// System.Uri System.Net.FileWebResponse::responseUri
	Uri_t1192 * ___responseUri_1;
	// System.IO.FileStream System.Net.FileWebResponse::fileStream
	FileStream_t1208 * ___fileStream_2;
	// System.Int64 System.Net.FileWebResponse::contentLength
	int64_t ___contentLength_3;
	// System.Net.WebHeaderCollection System.Net.FileWebResponse::webHeaders
	WebHeaderCollection_t119 * ___webHeaders_4;
	// System.Boolean System.Net.FileWebResponse::disposed
	bool ___disposed_5;
};
