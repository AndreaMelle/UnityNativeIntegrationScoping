#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.HttpWebRequest
struct HttpWebRequest_t12;
// abl.ABMetadata
struct ABMetadata_t5;
// System.String
struct String_t;
// abl.ABManager/<downloadAssetBundle>c__AnonStorey6
struct U3CdownloadAssetBundleU3Ec__AnonStorey6_t10;
// abl.ABManager
struct ABManager_t9;

#include "mscorlib_System_Object.h"

// abl.ABManager/<downloadAssetBundle>c__AnonStorey5
struct  U3CdownloadAssetBundleU3Ec__AnonStorey5_t11  : public Object_t
{
	// System.Net.HttpWebRequest abl.ABManager/<downloadAssetBundle>c__AnonStorey5::client
	HttpWebRequest_t12 * ___client_0;
	// System.Boolean abl.ABManager/<downloadAssetBundle>c__AnonStorey5::metadataAvailable
	bool ___metadataAvailable_1;
	// abl.ABMetadata abl.ABManager/<downloadAssetBundle>c__AnonStorey5::abMeta
	ABMetadata_t5 * ___abMeta_2;
	// System.String abl.ABManager/<downloadAssetBundle>c__AnonStorey5::url
	String_t* ___url_3;
	// abl.ABManager/<downloadAssetBundle>c__AnonStorey6 abl.ABManager/<downloadAssetBundle>c__AnonStorey5::<>f__ref$6
	U3CdownloadAssetBundleU3Ec__AnonStorey6_t10 * ___U3CU3Ef__refU246_4;
	// abl.ABManager abl.ABManager/<downloadAssetBundle>c__AnonStorey5::<>f__this
	ABManager_t9 * ___U3CU3Ef__this_5;
};
