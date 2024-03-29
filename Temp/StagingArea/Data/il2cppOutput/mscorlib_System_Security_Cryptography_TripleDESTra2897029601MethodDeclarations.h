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

// System.Security.Cryptography.TripleDESTransform
struct TripleDESTransform_t2897029601;
// System.Security.Cryptography.TripleDES
struct TripleDES_t2396949581;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_TripleDES2396949581.h"

// System.Void System.Security.Cryptography.TripleDESTransform::.ctor(System.Security.Cryptography.TripleDES,System.Boolean,System.Byte[],System.Byte[])
extern "C"  void TripleDESTransform__ctor_m2072157119 (TripleDESTransform_t2897029601 * __this, TripleDES_t2396949581 * ___algo0, bool ___encryption1, ByteU5BU5D_t3835026402* ___key2, ByteU5BU5D_t3835026402* ___iv3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESTransform::ECB(System.Byte[],System.Byte[])
extern "C"  void TripleDESTransform_ECB_m2015462231 (TripleDESTransform_t2897029601 * __this, ByteU5BU5D_t3835026402* ___input0, ByteU5BU5D_t3835026402* ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.TripleDESTransform::GetStrongKey()
extern "C"  ByteU5BU5D_t3835026402* TripleDESTransform_GetStrongKey_m3157926761 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
