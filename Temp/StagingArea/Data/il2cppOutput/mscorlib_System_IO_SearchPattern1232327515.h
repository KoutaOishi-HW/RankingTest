﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Char[]
struct CharU5BU5D_t1685951112;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SearchPattern
struct  SearchPattern_t1232327515  : public Il2CppObject
{
public:

public:
};

struct SearchPattern_t1232327515_StaticFields
{
public:
	// System.Char[] System.IO.SearchPattern::WildcardChars
	CharU5BU5D_t1685951112* ___WildcardChars_0;
	// System.Char[] System.IO.SearchPattern::InvalidChars
	CharU5BU5D_t1685951112* ___InvalidChars_1;

public:
	inline static int32_t get_offset_of_WildcardChars_0() { return static_cast<int32_t>(offsetof(SearchPattern_t1232327515_StaticFields, ___WildcardChars_0)); }
	inline CharU5BU5D_t1685951112* get_WildcardChars_0() const { return ___WildcardChars_0; }
	inline CharU5BU5D_t1685951112** get_address_of_WildcardChars_0() { return &___WildcardChars_0; }
	inline void set_WildcardChars_0(CharU5BU5D_t1685951112* value)
	{
		___WildcardChars_0 = value;
		Il2CppCodeGenWriteBarrier(&___WildcardChars_0, value);
	}

	inline static int32_t get_offset_of_InvalidChars_1() { return static_cast<int32_t>(offsetof(SearchPattern_t1232327515_StaticFields, ___InvalidChars_1)); }
	inline CharU5BU5D_t1685951112* get_InvalidChars_1() const { return ___InvalidChars_1; }
	inline CharU5BU5D_t1685951112** get_address_of_InvalidChars_1() { return &___InvalidChars_1; }
	inline void set_InvalidChars_1(CharU5BU5D_t1685951112* value)
	{
		___InvalidChars_1 = value;
		Il2CppCodeGenWriteBarrier(&___InvalidChars_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
