﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIStyle
struct GUIStyle_t3545875401;

#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t2815134268  : public Il2CppObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.RectOffset::m_SourceStyle
	GUIStyle_t3545875401 * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t2815134268, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t2815134268, ___m_SourceStyle_1)); }
	inline GUIStyle_t3545875401 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t3545875401 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t3545875401 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_SourceStyle_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
