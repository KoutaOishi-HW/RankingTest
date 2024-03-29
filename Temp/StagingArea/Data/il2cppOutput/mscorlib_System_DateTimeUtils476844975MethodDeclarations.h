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

// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t2393427626;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2431153068;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Text_StringBuilder2393427626.h"
#include "mscorlib_System_Globalization_DateTimeFormatInfo2431153068.h"
#include "mscorlib_System_DateTime2933746480.h"
#include "mscorlib_System_Nullable_1_gen99296144.h"

// System.Int32 System.DateTimeUtils::CountRepeat(System.String,System.Int32,System.Char)
extern "C"  int32_t DateTimeUtils_CountRepeat_m2205786495 (Il2CppObject * __this /* static, unused */, String_t* ___fmt0, int32_t ___p1, uint16_t ___c2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeUtils::ZeroPad(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C"  void DateTimeUtils_ZeroPad_m86470512 (Il2CppObject * __this /* static, unused */, StringBuilder_t2393427626 * ___output0, int32_t ___digits1, int32_t ___len2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeUtils::ParseQuotedString(System.String,System.Int32,System.Text.StringBuilder)
extern "C"  int32_t DateTimeUtils_ParseQuotedString_m569743800 (Il2CppObject * __this /* static, unused */, String_t* ___fmt0, int32_t ___pos1, StringBuilder_t2393427626 * ___output2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeUtils::GetStandardPattern(System.Char,System.Globalization.DateTimeFormatInfo,System.Boolean&,System.Boolean&)
extern "C"  String_t* DateTimeUtils_GetStandardPattern_m32972750 (Il2CppObject * __this /* static, unused */, uint16_t ___format0, DateTimeFormatInfo_t2431153068 * ___dfi1, bool* ___useutc2, bool* ___use_invariant3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeUtils::GetStandardPattern(System.Char,System.Globalization.DateTimeFormatInfo,System.Boolean&,System.Boolean&,System.Boolean)
extern "C"  String_t* DateTimeUtils_GetStandardPattern_m4198947977 (Il2CppObject * __this /* static, unused */, uint16_t ___format0, DateTimeFormatInfo_t2431153068 * ___dfi1, bool* ___useutc2, bool* ___use_invariant3, bool ___date_time_offset4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeUtils::ToString(System.DateTime,System.String,System.Globalization.DateTimeFormatInfo)
extern "C"  String_t* DateTimeUtils_ToString_m3747722398 (Il2CppObject * __this /* static, unused */, DateTime_t2933746480  ___dt0, String_t* ___format1, DateTimeFormatInfo_t2431153068 * ___dfi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeUtils::ToString(System.DateTime,System.Nullable`1<System.TimeSpan>,System.String,System.Globalization.DateTimeFormatInfo)
extern "C"  String_t* DateTimeUtils_ToString_m3878360633 (Il2CppObject * __this /* static, unused */, DateTime_t2933746480  ___dt0, Nullable_1_t99296144  ___utc_offset1, String_t* ___format2, DateTimeFormatInfo_t2431153068 * ___dfi3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
