﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t3752677216;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "mscorlib_System_Security_Cryptography_KeyedHashAlg1783637374.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.HMAC
struct  HMAC_t2819732360  : public KeyedHashAlgorithm_t1783637374
{
public:
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.HMAC::hash
	HashAlgorithm_t3752677216 * ___hash_5;
	// System.Boolean Mono.Security.Cryptography.HMAC::hashing
	bool ___hashing_6;
	// System.Byte[] Mono.Security.Cryptography.HMAC::innerPad
	ByteU5BU5D_t3835026402* ___innerPad_7;
	// System.Byte[] Mono.Security.Cryptography.HMAC::outerPad
	ByteU5BU5D_t3835026402* ___outerPad_8;

public:
	inline static int32_t get_offset_of_hash_5() { return static_cast<int32_t>(offsetof(HMAC_t2819732360, ___hash_5)); }
	inline HashAlgorithm_t3752677216 * get_hash_5() const { return ___hash_5; }
	inline HashAlgorithm_t3752677216 ** get_address_of_hash_5() { return &___hash_5; }
	inline void set_hash_5(HashAlgorithm_t3752677216 * value)
	{
		___hash_5 = value;
		Il2CppCodeGenWriteBarrier(&___hash_5, value);
	}

	inline static int32_t get_offset_of_hashing_6() { return static_cast<int32_t>(offsetof(HMAC_t2819732360, ___hashing_6)); }
	inline bool get_hashing_6() const { return ___hashing_6; }
	inline bool* get_address_of_hashing_6() { return &___hashing_6; }
	inline void set_hashing_6(bool value)
	{
		___hashing_6 = value;
	}

	inline static int32_t get_offset_of_innerPad_7() { return static_cast<int32_t>(offsetof(HMAC_t2819732360, ___innerPad_7)); }
	inline ByteU5BU5D_t3835026402* get_innerPad_7() const { return ___innerPad_7; }
	inline ByteU5BU5D_t3835026402** get_address_of_innerPad_7() { return &___innerPad_7; }
	inline void set_innerPad_7(ByteU5BU5D_t3835026402* value)
	{
		___innerPad_7 = value;
		Il2CppCodeGenWriteBarrier(&___innerPad_7, value);
	}

	inline static int32_t get_offset_of_outerPad_8() { return static_cast<int32_t>(offsetof(HMAC_t2819732360, ___outerPad_8)); }
	inline ByteU5BU5D_t3835026402* get_outerPad_8() const { return ___outerPad_8; }
	inline ByteU5BU5D_t3835026402** get_address_of_outerPad_8() { return &___outerPad_8; }
	inline void set_outerPad_8(ByteU5BU5D_t3835026402* value)
	{
		___outerPad_8 = value;
		Il2CppCodeGenWriteBarrier(&___outerPad_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
