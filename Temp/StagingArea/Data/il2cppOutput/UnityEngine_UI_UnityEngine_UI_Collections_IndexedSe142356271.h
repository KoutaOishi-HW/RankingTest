﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Object>
struct List_1_t4114307779;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t4127229017;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct  IndexedSet_1_t142356271  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.UI.Collections.IndexedSet`1::m_List
	List_1_t4114307779 * ___m_List_0;
	// System.Collections.Generic.Dictionary`2<T,System.Int32> UnityEngine.UI.Collections.IndexedSet`1::m_Dictionary
	Dictionary_2_t4127229017 * ___m_Dictionary_1;

public:
	inline static int32_t get_offset_of_m_List_0() { return static_cast<int32_t>(offsetof(IndexedSet_1_t142356271, ___m_List_0)); }
	inline List_1_t4114307779 * get_m_List_0() const { return ___m_List_0; }
	inline List_1_t4114307779 ** get_address_of_m_List_0() { return &___m_List_0; }
	inline void set_m_List_0(List_1_t4114307779 * value)
	{
		___m_List_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_List_0, value);
	}

	inline static int32_t get_offset_of_m_Dictionary_1() { return static_cast<int32_t>(offsetof(IndexedSet_1_t142356271, ___m_Dictionary_1)); }
	inline Dictionary_2_t4127229017 * get_m_Dictionary_1() const { return ___m_Dictionary_1; }
	inline Dictionary_2_t4127229017 ** get_address_of_m_Dictionary_1() { return &___m_Dictionary_1; }
	inline void set_m_Dictionary_1(Dictionary_2_t4127229017 * value)
	{
		___m_Dictionary_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Dictionary_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
