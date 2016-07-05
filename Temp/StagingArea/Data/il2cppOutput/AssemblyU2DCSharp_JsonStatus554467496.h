#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3315407976;
// System.String[]
struct StringU5BU5D_t3764931161;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JsonStatus
struct  JsonStatus_t554467496  : public Il2CppObject
{
public:
	// System.Int32[] JsonStatus::rank
	Int32U5BU5D_t3315407976* ___rank_0;
	// System.Int32[] JsonStatus::point
	Int32U5BU5D_t3315407976* ___point_1;
	// System.String[] JsonStatus::userName
	StringU5BU5D_t3764931161* ___userName_2;

public:
	inline static int32_t get_offset_of_rank_0() { return static_cast<int32_t>(offsetof(JsonStatus_t554467496, ___rank_0)); }
	inline Int32U5BU5D_t3315407976* get_rank_0() const { return ___rank_0; }
	inline Int32U5BU5D_t3315407976** get_address_of_rank_0() { return &___rank_0; }
	inline void set_rank_0(Int32U5BU5D_t3315407976* value)
	{
		___rank_0 = value;
		Il2CppCodeGenWriteBarrier(&___rank_0, value);
	}

	inline static int32_t get_offset_of_point_1() { return static_cast<int32_t>(offsetof(JsonStatus_t554467496, ___point_1)); }
	inline Int32U5BU5D_t3315407976* get_point_1() const { return ___point_1; }
	inline Int32U5BU5D_t3315407976** get_address_of_point_1() { return &___point_1; }
	inline void set_point_1(Int32U5BU5D_t3315407976* value)
	{
		___point_1 = value;
		Il2CppCodeGenWriteBarrier(&___point_1, value);
	}

	inline static int32_t get_offset_of_userName_2() { return static_cast<int32_t>(offsetof(JsonStatus_t554467496, ___userName_2)); }
	inline StringU5BU5D_t3764931161* get_userName_2() const { return ___userName_2; }
	inline StringU5BU5D_t3764931161** get_address_of_userName_2() { return &___userName_2; }
	inline void set_userName_2(StringU5BU5D_t3764931161* value)
	{
		___userName_2 = value;
		Il2CppCodeGenWriteBarrier(&___userName_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
