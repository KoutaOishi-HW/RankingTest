﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Boolean[]
struct BooleanU5BU5D_t2235910900;

#include "mscorlib_System_ValueType4028081426.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterModifier
struct  ParameterModifier_t873863414 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byref
	BooleanU5BU5D_t2235910900* ____byref_0;

public:
	inline static int32_t get_offset_of__byref_0() { return static_cast<int32_t>(offsetof(ParameterModifier_t873863414, ____byref_0)); }
	inline BooleanU5BU5D_t2235910900* get__byref_0() const { return ____byref_0; }
	inline BooleanU5BU5D_t2235910900** get_address_of__byref_0() { return &____byref_0; }
	inline void set__byref_0(BooleanU5BU5D_t2235910900* value)
	{
		____byref_0 = value;
		Il2CppCodeGenWriteBarrier(&____byref_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Reflection.ParameterModifier
struct ParameterModifier_t873863414_marshaled_pinvoke
{
	int32_t* ____byref_0;
};
// Native definition for marshalling of: System.Reflection.ParameterModifier
struct ParameterModifier_t873863414_marshaled_com
{
	int32_t* ____byref_0;
};
