#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t112;
// System.Uri
struct Uri_t1192;
// System.String
struct String_t;
// System.Net.FtpWebRequest
struct FtpWebRequest_t1222;

#include "System_System_Net_WebResponse.h"
#include "System_System_Net_FtpStatusCode.h"
#include "mscorlib_System_DateTime.h"

// System.Net.FtpWebResponse
struct  FtpWebResponse_t1217  : public WebResponse_t113
{
	// System.IO.Stream System.Net.FtpWebResponse::stream
	Stream_t112 * ___stream_1;
	// System.Uri System.Net.FtpWebResponse::uri
	Uri_t1192 * ___uri_2;
	// System.Net.FtpStatusCode System.Net.FtpWebResponse::statusCode
	int32_t ___statusCode_3;
	// System.DateTime System.Net.FtpWebResponse::lastModified
	DateTime_t615  ___lastModified_4;
	// System.String System.Net.FtpWebResponse::bannerMessage
	String_t* ___bannerMessage_5;
	// System.String System.Net.FtpWebResponse::welcomeMessage
	String_t* ___welcomeMessage_6;
	// System.String System.Net.FtpWebResponse::exitMessage
	String_t* ___exitMessage_7;
	// System.String System.Net.FtpWebResponse::statusDescription
	String_t* ___statusDescription_8;
	// System.String System.Net.FtpWebResponse::method
	String_t* ___method_9;
	// System.Boolean System.Net.FtpWebResponse::disposed
	bool ___disposed_10;
	// System.Net.FtpWebRequest System.Net.FtpWebResponse::request
	FtpWebRequest_t1222 * ___request_11;
	// System.Int64 System.Net.FtpWebResponse::contentLength
	int64_t ___contentLength_12;
};
