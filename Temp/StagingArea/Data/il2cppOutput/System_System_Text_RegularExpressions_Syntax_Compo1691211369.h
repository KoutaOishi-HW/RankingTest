﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct ExpressionCollection_t3428960834;

#include "System_System_Text_RegularExpressions_Syntax_Expre2003179150.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CompositeExpression
struct  CompositeExpression_t1691211369  : public Expression_t2003179150
{
public:
	// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.CompositeExpression::expressions
	ExpressionCollection_t3428960834 * ___expressions_0;

public:
	inline static int32_t get_offset_of_expressions_0() { return static_cast<int32_t>(offsetof(CompositeExpression_t1691211369, ___expressions_0)); }
	inline ExpressionCollection_t3428960834 * get_expressions_0() const { return ___expressions_0; }
	inline ExpressionCollection_t3428960834 ** get_address_of_expressions_0() { return &___expressions_0; }
	inline void set_expressions_0(ExpressionCollection_t3428960834 * value)
	{
		___expressions_0 = value;
		Il2CppCodeGenWriteBarrier(&___expressions_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
