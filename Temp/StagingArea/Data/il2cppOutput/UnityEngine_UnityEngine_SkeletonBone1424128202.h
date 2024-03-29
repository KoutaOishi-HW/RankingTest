﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_ValueType4028081426.h"
#include "UnityEngine_UnityEngine_Vector3465617797.h"
#include "UnityEngine_UnityEngine_Quaternion83606849.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SkeletonBone
struct  SkeletonBone_t1424128202 
{
public:
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_t465617797  ___position_1;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_t83606849  ___rotation_2;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_t465617797  ___scale_3;
	// System.Int32 UnityEngine.SkeletonBone::transformModified
	int32_t ___transformModified_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SkeletonBone_t1424128202, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(SkeletonBone_t1424128202, ___position_1)); }
	inline Vector3_t465617797  get_position_1() const { return ___position_1; }
	inline Vector3_t465617797 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t465617797  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(SkeletonBone_t1424128202, ___rotation_2)); }
	inline Quaternion_t83606849  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t83606849 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t83606849  value)
	{
		___rotation_2 = value;
	}

	inline static int32_t get_offset_of_scale_3() { return static_cast<int32_t>(offsetof(SkeletonBone_t1424128202, ___scale_3)); }
	inline Vector3_t465617797  get_scale_3() const { return ___scale_3; }
	inline Vector3_t465617797 * get_address_of_scale_3() { return &___scale_3; }
	inline void set_scale_3(Vector3_t465617797  value)
	{
		___scale_3 = value;
	}

	inline static int32_t get_offset_of_transformModified_4() { return static_cast<int32_t>(offsetof(SkeletonBone_t1424128202, ___transformModified_4)); }
	inline int32_t get_transformModified_4() const { return ___transformModified_4; }
	inline int32_t* get_address_of_transformModified_4() { return &___transformModified_4; }
	inline void set_transformModified_4(int32_t value)
	{
		___transformModified_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.SkeletonBone
struct SkeletonBone_t1424128202_marshaled_pinvoke
{
	char* ___name_0;
	Vector3_t465617797_marshaled_pinvoke ___position_1;
	Quaternion_t83606849_marshaled_pinvoke ___rotation_2;
	Vector3_t465617797_marshaled_pinvoke ___scale_3;
	int32_t ___transformModified_4;
};
// Native definition for marshalling of: UnityEngine.SkeletonBone
struct SkeletonBone_t1424128202_marshaled_com
{
	uint16_t* ___name_0;
	Vector3_t465617797_marshaled_com ___position_1;
	Quaternion_t83606849_marshaled_com ___rotation_2;
	Vector3_t465617797_marshaled_com ___scale_3;
	int32_t ___transformModified_4;
};
