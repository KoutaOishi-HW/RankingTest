﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4028081426.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t4121084637 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t465617797  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t465617797  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t4121084637, ___m_Origin_0)); }
	inline Vector3_t465617797  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t465617797 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t465617797  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t4121084637, ___m_Direction_1)); }
	inline Vector3_t465617797  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t465617797 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t465617797  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.Ray
struct Ray_t4121084637_marshaled_pinvoke
{
	Vector3_t465617797_marshaled_pinvoke ___m_Origin_0;
	Vector3_t465617797_marshaled_pinvoke ___m_Direction_1;
};
// Native definition for marshalling of: UnityEngine.Ray
struct Ray_t4121084637_marshaled_com
{
	Vector3_t465617797_marshaled_com ___m_Origin_0;
	Vector3_t465617797_marshaled_com ___m_Direction_1;
};
