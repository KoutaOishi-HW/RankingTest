﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.GraphicRegistry
struct GraphicRegistry_t3339896708;
// System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct Dictionary_2_t1584101357;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t3192529782;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.GraphicRegistry
struct  GraphicRegistry_t3339896708  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>> UnityEngine.UI.GraphicRegistry::m_Graphics
	Dictionary_2_t1584101357 * ___m_Graphics_1;

public:
	inline static int32_t get_offset_of_m_Graphics_1() { return static_cast<int32_t>(offsetof(GraphicRegistry_t3339896708, ___m_Graphics_1)); }
	inline Dictionary_2_t1584101357 * get_m_Graphics_1() const { return ___m_Graphics_1; }
	inline Dictionary_2_t1584101357 ** get_address_of_m_Graphics_1() { return &___m_Graphics_1; }
	inline void set_m_Graphics_1(Dictionary_2_t1584101357 * value)
	{
		___m_Graphics_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Graphics_1, value);
	}
};

struct GraphicRegistry_t3339896708_StaticFields
{
public:
	// UnityEngine.UI.GraphicRegistry UnityEngine.UI.GraphicRegistry::s_Instance
	GraphicRegistry_t3339896708 * ___s_Instance_0;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRegistry::s_EmptyList
	List_1_t3192529782 * ___s_EmptyList_2;

public:
	inline static int32_t get_offset_of_s_Instance_0() { return static_cast<int32_t>(offsetof(GraphicRegistry_t3339896708_StaticFields, ___s_Instance_0)); }
	inline GraphicRegistry_t3339896708 * get_s_Instance_0() const { return ___s_Instance_0; }
	inline GraphicRegistry_t3339896708 ** get_address_of_s_Instance_0() { return &___s_Instance_0; }
	inline void set_s_Instance_0(GraphicRegistry_t3339896708 * value)
	{
		___s_Instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_Instance_0, value);
	}

	inline static int32_t get_offset_of_s_EmptyList_2() { return static_cast<int32_t>(offsetof(GraphicRegistry_t3339896708_StaticFields, ___s_EmptyList_2)); }
	inline List_1_t3192529782 * get_s_EmptyList_2() const { return ___s_EmptyList_2; }
	inline List_1_t3192529782 ** get_address_of_s_EmptyList_2() { return &___s_EmptyList_2; }
	inline void set_s_EmptyList_2(List_1_t3192529782 * value)
	{
		___s_EmptyList_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_EmptyList_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
