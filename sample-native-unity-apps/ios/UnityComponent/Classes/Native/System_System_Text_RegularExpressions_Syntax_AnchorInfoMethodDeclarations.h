﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t1371;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t1353;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Position.h"
#include "System_System_Text_RegularExpressions_Interval.h"

// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32)
extern "C" void AnchorInfo__ctor_m7764 (AnchorInfo_t1371 * __this, Expression_t1353 * ___expr, int32_t ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.String,System.Boolean)
extern "C" void AnchorInfo__ctor_m7765 (AnchorInfo_t1371 * __this, Expression_t1353 * ___expr, int32_t ___offset, int32_t ___width, String_t* ___str, bool ___ignore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.Text.RegularExpressions.Position)
extern "C" void AnchorInfo__ctor_m7766 (AnchorInfo_t1371 * __this, Expression_t1353 * ___expr, int32_t ___offset, int32_t ___width, uint16_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Offset()
extern "C" int32_t AnchorInfo_get_Offset_m7767 (AnchorInfo_t1371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Width()
extern "C" int32_t AnchorInfo_get_Width_m7768 (AnchorInfo_t1371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Length()
extern "C" int32_t AnchorInfo_get_Length_m7769 (AnchorInfo_t1371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsUnknownWidth()
extern "C" bool AnchorInfo_get_IsUnknownWidth_m7770 (AnchorInfo_t1371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsComplete()
extern "C" bool AnchorInfo_get_IsComplete_m7771 (AnchorInfo_t1371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::get_Substring()
extern "C" String_t* AnchorInfo_get_Substring_m7772 (AnchorInfo_t1371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IgnoreCase()
extern "C" bool AnchorInfo_get_IgnoreCase_m7773 (AnchorInfo_t1371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::get_Position()
extern "C" uint16_t AnchorInfo_get_Position_m7774 (AnchorInfo_t1371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsSubstring()
extern "C" bool AnchorInfo_get_IsSubstring_m7775 (AnchorInfo_t1371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsPosition()
extern "C" bool AnchorInfo_get_IsPosition_m7776 (AnchorInfo_t1371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.AnchorInfo::GetInterval(System.Int32)
extern "C" Interval_t1345  AnchorInfo_GetInterval_m7777 (AnchorInfo_t1371 * __this, int32_t ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
