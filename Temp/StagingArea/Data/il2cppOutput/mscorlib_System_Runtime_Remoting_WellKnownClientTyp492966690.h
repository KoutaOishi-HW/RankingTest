﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.String
struct String_t;

#include "mscorlib_System_Runtime_Remoting_TypeEntry1196035370.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.WellKnownClientTypeEntry
struct  WellKnownClientTypeEntry_t492966690  : public TypeEntry_t1196035370
{
public:
	// System.Type System.Runtime.Remoting.WellKnownClientTypeEntry::obj_type
	Type_t * ___obj_type_2;
	// System.String System.Runtime.Remoting.WellKnownClientTypeEntry::obj_url
	String_t* ___obj_url_3;
	// System.String System.Runtime.Remoting.WellKnownClientTypeEntry::app_url
	String_t* ___app_url_4;

public:
	inline static int32_t get_offset_of_obj_type_2() { return static_cast<int32_t>(offsetof(WellKnownClientTypeEntry_t492966690, ___obj_type_2)); }
	inline Type_t * get_obj_type_2() const { return ___obj_type_2; }
	inline Type_t ** get_address_of_obj_type_2() { return &___obj_type_2; }
	inline void set_obj_type_2(Type_t * value)
	{
		___obj_type_2 = value;
		Il2CppCodeGenWriteBarrier(&___obj_type_2, value);
	}

	inline static int32_t get_offset_of_obj_url_3() { return static_cast<int32_t>(offsetof(WellKnownClientTypeEntry_t492966690, ___obj_url_3)); }
	inline String_t* get_obj_url_3() const { return ___obj_url_3; }
	inline String_t** get_address_of_obj_url_3() { return &___obj_url_3; }
	inline void set_obj_url_3(String_t* value)
	{
		___obj_url_3 = value;
		Il2CppCodeGenWriteBarrier(&___obj_url_3, value);
	}

	inline static int32_t get_offset_of_app_url_4() { return static_cast<int32_t>(offsetof(WellKnownClientTypeEntry_t492966690, ___app_url_4)); }
	inline String_t* get_app_url_4() const { return ___app_url_4; }
	inline String_t** get_address_of_app_url_4() { return &___app_url_4; }
	inline void set_app_url_4(String_t* value)
	{
		___app_url_4 = value;
		Il2CppCodeGenWriteBarrier(&___app_url_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
