﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t2946397745;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1079102679;
// System.Byte[]
struct ByteU5BU5D_t3835026402;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WWWForm
struct  WWWForm_t986061696  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t2946397745 * ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_t1079102679 * ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_t1079102679 * ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_t1079102679 * ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_t3835026402* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;

public:
	inline static int32_t get_offset_of_formData_0() { return static_cast<int32_t>(offsetof(WWWForm_t986061696, ___formData_0)); }
	inline List_1_t2946397745 * get_formData_0() const { return ___formData_0; }
	inline List_1_t2946397745 ** get_address_of_formData_0() { return &___formData_0; }
	inline void set_formData_0(List_1_t2946397745 * value)
	{
		___formData_0 = value;
		Il2CppCodeGenWriteBarrier(&___formData_0, value);
	}

	inline static int32_t get_offset_of_fieldNames_1() { return static_cast<int32_t>(offsetof(WWWForm_t986061696, ___fieldNames_1)); }
	inline List_1_t1079102679 * get_fieldNames_1() const { return ___fieldNames_1; }
	inline List_1_t1079102679 ** get_address_of_fieldNames_1() { return &___fieldNames_1; }
	inline void set_fieldNames_1(List_1_t1079102679 * value)
	{
		___fieldNames_1 = value;
		Il2CppCodeGenWriteBarrier(&___fieldNames_1, value);
	}

	inline static int32_t get_offset_of_fileNames_2() { return static_cast<int32_t>(offsetof(WWWForm_t986061696, ___fileNames_2)); }
	inline List_1_t1079102679 * get_fileNames_2() const { return ___fileNames_2; }
	inline List_1_t1079102679 ** get_address_of_fileNames_2() { return &___fileNames_2; }
	inline void set_fileNames_2(List_1_t1079102679 * value)
	{
		___fileNames_2 = value;
		Il2CppCodeGenWriteBarrier(&___fileNames_2, value);
	}

	inline static int32_t get_offset_of_types_3() { return static_cast<int32_t>(offsetof(WWWForm_t986061696, ___types_3)); }
	inline List_1_t1079102679 * get_types_3() const { return ___types_3; }
	inline List_1_t1079102679 ** get_address_of_types_3() { return &___types_3; }
	inline void set_types_3(List_1_t1079102679 * value)
	{
		___types_3 = value;
		Il2CppCodeGenWriteBarrier(&___types_3, value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(WWWForm_t986061696, ___boundary_4)); }
	inline ByteU5BU5D_t3835026402* get_boundary_4() const { return ___boundary_4; }
	inline ByteU5BU5D_t3835026402** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(ByteU5BU5D_t3835026402* value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier(&___boundary_4, value);
	}

	inline static int32_t get_offset_of_containsFiles_5() { return static_cast<int32_t>(offsetof(WWWForm_t986061696, ___containsFiles_5)); }
	inline bool get_containsFiles_5() const { return ___containsFiles_5; }
	inline bool* get_address_of_containsFiles_5() { return &___containsFiles_5; }
	inline void set_containsFiles_5(bool value)
	{
		___containsFiles_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
