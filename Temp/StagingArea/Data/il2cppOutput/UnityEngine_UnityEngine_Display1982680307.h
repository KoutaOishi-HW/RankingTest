﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Display[]
struct DisplayU5BU5D_t2092997090;
// UnityEngine.Display
struct Display_t1982680307;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t1592286161;

#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display
struct  Display_t1982680307  : public Il2CppObject
{
public:
	// System.IntPtr UnityEngine.Display::nativeDisplay
	IntPtr_t ___nativeDisplay_0;

public:
	inline static int32_t get_offset_of_nativeDisplay_0() { return static_cast<int32_t>(offsetof(Display_t1982680307, ___nativeDisplay_0)); }
	inline IntPtr_t get_nativeDisplay_0() const { return ___nativeDisplay_0; }
	inline IntPtr_t* get_address_of_nativeDisplay_0() { return &___nativeDisplay_0; }
	inline void set_nativeDisplay_0(IntPtr_t value)
	{
		___nativeDisplay_0 = value;
	}
};

struct Display_t1982680307_StaticFields
{
public:
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t2092997090* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t1982680307 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t1592286161 * ___onDisplaysUpdated_3;

public:
	inline static int32_t get_offset_of_displays_1() { return static_cast<int32_t>(offsetof(Display_t1982680307_StaticFields, ___displays_1)); }
	inline DisplayU5BU5D_t2092997090* get_displays_1() const { return ___displays_1; }
	inline DisplayU5BU5D_t2092997090** get_address_of_displays_1() { return &___displays_1; }
	inline void set_displays_1(DisplayU5BU5D_t2092997090* value)
	{
		___displays_1 = value;
		Il2CppCodeGenWriteBarrier(&___displays_1, value);
	}

	inline static int32_t get_offset_of__mainDisplay_2() { return static_cast<int32_t>(offsetof(Display_t1982680307_StaticFields, ____mainDisplay_2)); }
	inline Display_t1982680307 * get__mainDisplay_2() const { return ____mainDisplay_2; }
	inline Display_t1982680307 ** get_address_of__mainDisplay_2() { return &____mainDisplay_2; }
	inline void set__mainDisplay_2(Display_t1982680307 * value)
	{
		____mainDisplay_2 = value;
		Il2CppCodeGenWriteBarrier(&____mainDisplay_2, value);
	}

	inline static int32_t get_offset_of_onDisplaysUpdated_3() { return static_cast<int32_t>(offsetof(Display_t1982680307_StaticFields, ___onDisplaysUpdated_3)); }
	inline DisplaysUpdatedDelegate_t1592286161 * get_onDisplaysUpdated_3() const { return ___onDisplaysUpdated_3; }
	inline DisplaysUpdatedDelegate_t1592286161 ** get_address_of_onDisplaysUpdated_3() { return &___onDisplaysUpdated_3; }
	inline void set_onDisplaysUpdated_3(DisplaysUpdatedDelegate_t1592286161 * value)
	{
		___onDisplaysUpdated_3 = value;
		Il2CppCodeGenWriteBarrier(&___onDisplaysUpdated_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
