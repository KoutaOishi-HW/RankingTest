﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.OperatingSystem
struct OperatingSystem_t2497992059;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Environment
struct  Environment_t3221764356  : public Il2CppObject
{
public:

public:
};

struct Environment_t3221764356_StaticFields
{
public:
	// System.OperatingSystem System.Environment::os
	OperatingSystem_t2497992059 * ___os_0;

public:
	inline static int32_t get_offset_of_os_0() { return static_cast<int32_t>(offsetof(Environment_t3221764356_StaticFields, ___os_0)); }
	inline OperatingSystem_t2497992059 * get_os_0() const { return ___os_0; }
	inline OperatingSystem_t2497992059 ** get_address_of_os_0() { return &___os_0; }
	inline void set_os_0(OperatingSystem_t2497992059 * value)
	{
		___os_0 = value;
		Il2CppCodeGenWriteBarrier(&___os_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
