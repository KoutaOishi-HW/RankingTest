﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.Regex
struct Regex_t272817006;
// System.Text.RegularExpressions.IMachine
struct IMachine_t1421636219;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t909422662;
// System.Text.RegularExpressions.Match
struct Match_t2000248932;

#include "System_System_Text_RegularExpressions_Group2901181876.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Match
struct  Match_t2000248932  : public Group_t2901181876
{
public:
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::regex
	Regex_t272817006 * ___regex_6;
	// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Match::machine
	Il2CppObject * ___machine_7;
	// System.Int32 System.Text.RegularExpressions.Match::text_length
	int32_t ___text_length_8;
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::groups
	GroupCollection_t909422662 * ___groups_9;

public:
	inline static int32_t get_offset_of_regex_6() { return static_cast<int32_t>(offsetof(Match_t2000248932, ___regex_6)); }
	inline Regex_t272817006 * get_regex_6() const { return ___regex_6; }
	inline Regex_t272817006 ** get_address_of_regex_6() { return &___regex_6; }
	inline void set_regex_6(Regex_t272817006 * value)
	{
		___regex_6 = value;
		Il2CppCodeGenWriteBarrier(&___regex_6, value);
	}

	inline static int32_t get_offset_of_machine_7() { return static_cast<int32_t>(offsetof(Match_t2000248932, ___machine_7)); }
	inline Il2CppObject * get_machine_7() const { return ___machine_7; }
	inline Il2CppObject ** get_address_of_machine_7() { return &___machine_7; }
	inline void set_machine_7(Il2CppObject * value)
	{
		___machine_7 = value;
		Il2CppCodeGenWriteBarrier(&___machine_7, value);
	}

	inline static int32_t get_offset_of_text_length_8() { return static_cast<int32_t>(offsetof(Match_t2000248932, ___text_length_8)); }
	inline int32_t get_text_length_8() const { return ___text_length_8; }
	inline int32_t* get_address_of_text_length_8() { return &___text_length_8; }
	inline void set_text_length_8(int32_t value)
	{
		___text_length_8 = value;
	}

	inline static int32_t get_offset_of_groups_9() { return static_cast<int32_t>(offsetof(Match_t2000248932, ___groups_9)); }
	inline GroupCollection_t909422662 * get_groups_9() const { return ___groups_9; }
	inline GroupCollection_t909422662 ** get_address_of_groups_9() { return &___groups_9; }
	inline void set_groups_9(GroupCollection_t909422662 * value)
	{
		___groups_9 = value;
		Il2CppCodeGenWriteBarrier(&___groups_9, value);
	}
};

struct Match_t2000248932_StaticFields
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::empty
	Match_t2000248932 * ___empty_10;

public:
	inline static int32_t get_offset_of_empty_10() { return static_cast<int32_t>(offsetof(Match_t2000248932_StaticFields, ___empty_10)); }
	inline Match_t2000248932 * get_empty_10() const { return ___empty_10; }
	inline Match_t2000248932 ** get_address_of_empty_10() { return &___empty_10; }
	inline void set_empty_10(Match_t2000248932 * value)
	{
		___empty_10 = value;
		Il2CppCodeGenWriteBarrier(&___empty_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
