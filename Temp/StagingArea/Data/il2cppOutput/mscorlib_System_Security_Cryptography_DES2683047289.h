﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[,]
struct ByteU5BU2CU5D_t3835026403;

#include "mscorlib_System_Security_Cryptography_SymmetricAlg4145793369.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DES
struct  DES_t2683047289  : public SymmetricAlgorithm_t4145793369
{
public:

public:
};

struct DES_t2683047289_StaticFields
{
public:
	// System.Byte[,] System.Security.Cryptography.DES::weakKeys
	ByteU5BU2CU5D_t3835026403* ___weakKeys_10;
	// System.Byte[,] System.Security.Cryptography.DES::semiWeakKeys
	ByteU5BU2CU5D_t3835026403* ___semiWeakKeys_11;

public:
	inline static int32_t get_offset_of_weakKeys_10() { return static_cast<int32_t>(offsetof(DES_t2683047289_StaticFields, ___weakKeys_10)); }
	inline ByteU5BU2CU5D_t3835026403* get_weakKeys_10() const { return ___weakKeys_10; }
	inline ByteU5BU2CU5D_t3835026403** get_address_of_weakKeys_10() { return &___weakKeys_10; }
	inline void set_weakKeys_10(ByteU5BU2CU5D_t3835026403* value)
	{
		___weakKeys_10 = value;
		Il2CppCodeGenWriteBarrier(&___weakKeys_10, value);
	}

	inline static int32_t get_offset_of_semiWeakKeys_11() { return static_cast<int32_t>(offsetof(DES_t2683047289_StaticFields, ___semiWeakKeys_11)); }
	inline ByteU5BU2CU5D_t3835026403* get_semiWeakKeys_11() const { return ___semiWeakKeys_11; }
	inline ByteU5BU2CU5D_t3835026403** get_address_of_semiWeakKeys_11() { return &___semiWeakKeys_11; }
	inline void set_semiWeakKeys_11(ByteU5BU2CU5D_t3835026403* value)
	{
		___semiWeakKeys_11 = value;
		Il2CppCodeGenWriteBarrier(&___semiWeakKeys_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
