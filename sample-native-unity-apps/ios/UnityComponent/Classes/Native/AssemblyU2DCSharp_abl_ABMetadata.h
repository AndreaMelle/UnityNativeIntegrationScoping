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

#include "mscorlib_System_Object.h"

// abl.ABMetadata
struct  ABMetadata_t5  : public Object_t
{
	// System.String abl.ABMetadata::bundlename
	String_t* ___bundlename_1;
	// System.String abl.ABMetadata::etag
	String_t* ___etag_2;
	// System.UInt32 abl.ABMetadata::crc
	uint32_t ___crc_3;
	// System.Int32 abl.ABMetadata::version
	int32_t ___version_4;
};
struct ABMetadata_t5_StaticFields{
	// System.String abl.ABMetadata::mMetadataDir
	String_t* ___mMetadataDir_0;
};
