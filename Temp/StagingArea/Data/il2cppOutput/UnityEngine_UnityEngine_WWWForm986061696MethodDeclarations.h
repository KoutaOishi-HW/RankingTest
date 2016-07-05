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

// UnityEngine.WWWForm
struct WWWForm_t986061696;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t2125916575;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Text_Encoding2125916575.h"

// System.Void UnityEngine.WWWForm::.ctor()
extern "C"  void WWWForm__ctor_m2129424870 (WWWForm_t986061696 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C"  void WWWForm_AddField_m1334606983 (WWWForm_t986061696 * __this, String_t* ___fieldName0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern "C"  void WWWForm_AddField_m1016126514 (WWWForm_t986061696 * __this, String_t* ___fieldName0, String_t* ___value1, Encoding_t2125916575 * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
extern "C"  void WWWForm_AddField_m2260664476 (WWWForm_t986061696 * __this, String_t* ___fieldName0, int32_t ___i1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWForm::get_data()
extern "C"  ByteU5BU5D_t3835026402* WWWForm_get_data_m1788094649 (WWWForm_t986061696 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
