﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t3469124541;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array/ArrayReadOnlyList`1<System.Reflection.CustomAttributeTypedArgument>
struct  ArrayReadOnlyList_1_t1956990997  : public Il2CppObject
{
public:
	// T[] System.Array/ArrayReadOnlyList`1::array
	CustomAttributeTypedArgumentU5BU5D_t3469124541* ___array_0;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(ArrayReadOnlyList_1_t1956990997, ___array_0)); }
	inline CustomAttributeTypedArgumentU5BU5D_t3469124541* get_array_0() const { return ___array_0; }
	inline CustomAttributeTypedArgumentU5BU5D_t3469124541** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(CustomAttributeTypedArgumentU5BU5D_t3469124541* value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier(&___array_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
