﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t125447849;

#include "mscorlib_System_Security_Cryptography_SHA1182152170.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Managed
struct  SHA1Managed_t4088378971  : public SHA1_t182152170
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1Managed::sha
	SHA1Internal_t125447849 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1Managed_t4088378971, ___sha_4)); }
	inline SHA1Internal_t125447849 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t125447849 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t125447849 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier(&___sha_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
