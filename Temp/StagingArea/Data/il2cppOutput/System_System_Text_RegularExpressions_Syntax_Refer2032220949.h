﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t3102830828;

#include "System_System_Text_RegularExpressions_Syntax_Expre2003179150.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Reference
struct  Reference_t2032220949  : public Expression_t2003179150
{
public:
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::group
	CapturingGroup_t3102830828 * ___group_0;
	// System.Boolean System.Text.RegularExpressions.Syntax.Reference::ignore
	bool ___ignore_1;

public:
	inline static int32_t get_offset_of_group_0() { return static_cast<int32_t>(offsetof(Reference_t2032220949, ___group_0)); }
	inline CapturingGroup_t3102830828 * get_group_0() const { return ___group_0; }
	inline CapturingGroup_t3102830828 ** get_address_of_group_0() { return &___group_0; }
	inline void set_group_0(CapturingGroup_t3102830828 * value)
	{
		___group_0 = value;
		Il2CppCodeGenWriteBarrier(&___group_0, value);
	}

	inline static int32_t get_offset_of_ignore_1() { return static_cast<int32_t>(offsetof(Reference_t2032220949, ___ignore_1)); }
	inline bool get_ignore_1() const { return ___ignore_1; }
	inline bool* get_address_of_ignore_1() { return &___ignore_1; }
	inline void set_ignore_1(bool value)
	{
		___ignore_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
