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

// UnityEngine.Bounds
struct  Bounds_t968365060 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t465617797  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t465617797  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t968365060, ___m_Center_0)); }
	inline Vector3_t465617797  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t465617797 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t465617797  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t968365060, ___m_Extents_1)); }
	inline Vector3_t465617797  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t465617797 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t465617797  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.Bounds
struct Bounds_t968365060_marshaled_pinvoke
{
	Vector3_t465617797_marshaled_pinvoke ___m_Center_0;
	Vector3_t465617797_marshaled_pinvoke ___m_Extents_1;
};
// Native definition for marshalling of: UnityEngine.Bounds
struct Bounds_t968365060_marshaled_com
{
	Vector3_t465617797_marshaled_com ___m_Center_0;
	Vector3_t465617797_marshaled_com ___m_Extents_1;
};
