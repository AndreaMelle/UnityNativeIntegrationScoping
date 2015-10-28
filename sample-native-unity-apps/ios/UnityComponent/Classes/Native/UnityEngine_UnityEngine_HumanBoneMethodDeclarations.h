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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_HumanBone.h"

// System.String UnityEngine.HumanBone::get_boneName()
extern "C" String_t* HumanBone_get_boneName_m3166 (HumanBone_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
extern "C" void HumanBone_set_boneName_m3167 (HumanBone_t601 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HumanBone::get_humanName()
extern "C" String_t* HumanBone_get_humanName_m3168 (HumanBone_t601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
extern "C" void HumanBone_set_humanName_m3169 (HumanBone_t601 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void HumanBone_t601_marshal(const HumanBone_t601& unmarshaled, HumanBone_t601_marshaled& marshaled);
extern "C" void HumanBone_t601_marshal_back(const HumanBone_t601_marshaled& marshaled, HumanBone_t601& unmarshaled);
extern "C" void HumanBone_t601_marshal_cleanup(HumanBone_t601_marshaled& marshaled);
