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
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t119;
// System.Net.CookieCollection
struct CookieCollection_t1194;
// System.String
struct String_t;
// System.Version
struct Version_t1235;
// System.Net.CookieContainer
struct CookieContainer_t1196;
// System.IO.Stream
struct Stream_t112;
// System.String[]
struct StringU5BU5D_t669;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t307;

#include "System_System_Net_WebResponse.h"
#include "System_System_Net_HttpStatusCode.h"

// System.Net.HttpWebResponse
struct  HttpWebResponse_t110  : public WebResponse_t113
{
	// System.Uri System.Net.HttpWebResponse::uri
	Uri_t1192 * ___uri_1;
	// System.Net.WebHeaderCollection System.Net.HttpWebResponse::webHeaders
	WebHeaderCollection_t119 * ___webHeaders_2;
	// System.Net.CookieCollection System.Net.HttpWebResponse::cookieCollection
	CookieCollection_t1194 * ___cookieCollection_3;
	// System.String System.Net.HttpWebResponse::method
	String_t* ___method_4;
	// System.Version System.Net.HttpWebResponse::version
	Version_t1235 * ___version_5;
	// System.Net.HttpStatusCode System.Net.HttpWebResponse::statusCode
	int32_t ___statusCode_6;
	// System.String System.Net.HttpWebResponse::statusDescription
	String_t* ___statusDescription_7;
	// System.Int64 System.Net.HttpWebResponse::contentLength
	int64_t ___contentLength_8;
	// System.String System.Net.HttpWebResponse::contentType
	String_t* ___contentType_9;
	// System.Net.CookieContainer System.Net.HttpWebResponse::cookie_container
	CookieContainer_t1196 * ___cookie_container_10;
	// System.Boolean System.Net.HttpWebResponse::disposed
	bool ___disposed_11;
	// System.IO.Stream System.Net.HttpWebResponse::stream
	Stream_t112 * ___stream_12;
	// System.String[] System.Net.HttpWebResponse::cookieExpiresFormats
	StringU5BU5D_t669* ___cookieExpiresFormats_13;
};
struct HttpWebResponse_t110_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.HttpWebResponse::<>f__switch$map8
	Dictionary_2_t307 * ___U3CU3Ef__switchU24map8_14;
};
