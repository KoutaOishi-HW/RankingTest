﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4192248498;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyBuilder
struct  KeyBuilder_t30980769  : public Il2CppObject
{
public:

public:
};

struct KeyBuilder_t30980769_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::rng
	RandomNumberGenerator_t4192248498 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(KeyBuilder_t30980769_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t4192248498 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t4192248498 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t4192248498 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier(&___rng_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
