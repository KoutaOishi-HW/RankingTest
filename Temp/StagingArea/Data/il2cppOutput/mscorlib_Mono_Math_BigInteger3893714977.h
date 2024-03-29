﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.UInt32[]
struct UInt32U5BU5D_t3352404215;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4192248498;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger
struct  BigInteger_t3893714977  : public Il2CppObject
{
public:
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t3352404215* ___data_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(BigInteger_t3893714977, ___length_0)); }
	inline uint32_t get_length_0() const { return ___length_0; }
	inline uint32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(uint32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_t3893714977, ___data_1)); }
	inline UInt32U5BU5D_t3352404215* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_t3352404215** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_t3352404215* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}
};

struct BigInteger_t3893714977_StaticFields
{
public:
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t3352404215* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t4192248498 * ___rng_3;

public:
	inline static int32_t get_offset_of_smallPrimes_2() { return static_cast<int32_t>(offsetof(BigInteger_t3893714977_StaticFields, ___smallPrimes_2)); }
	inline UInt32U5BU5D_t3352404215* get_smallPrimes_2() const { return ___smallPrimes_2; }
	inline UInt32U5BU5D_t3352404215** get_address_of_smallPrimes_2() { return &___smallPrimes_2; }
	inline void set_smallPrimes_2(UInt32U5BU5D_t3352404215* value)
	{
		___smallPrimes_2 = value;
		Il2CppCodeGenWriteBarrier(&___smallPrimes_2, value);
	}

	inline static int32_t get_offset_of_rng_3() { return static_cast<int32_t>(offsetof(BigInteger_t3893714977_StaticFields, ___rng_3)); }
	inline RandomNumberGenerator_t4192248498 * get_rng_3() const { return ___rng_3; }
	inline RandomNumberGenerator_t4192248498 ** get_address_of_rng_3() { return &___rng_3; }
	inline void set_rng_3(RandomNumberGenerator_t4192248498 * value)
	{
		___rng_3 = value;
		Il2CppCodeGenWriteBarrier(&___rng_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
