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
// UnityEngine.GUIContent
struct GUIContent_t2981625813;

#include "mscorlib_System_Object707969140.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextEditor
struct  TextEditor_t1620200435  : public Il2CppObject
{
public:
	// UnityEngine.GUIStyle UnityEngine.TextEditor::style
	GUIStyle_t3545875401 * ___style_0;
	// UnityEngine.Vector2 UnityEngine.TextEditor::scrollOffset
	Vector2_t465617798  ___scrollOffset_1;
	// UnityEngine.GUIContent UnityEngine.TextEditor::m_Content
	GUIContent_t2981625813 * ___m_Content_2;
	// System.Int32 UnityEngine.TextEditor::m_iAltCursorPos
	int32_t ___m_iAltCursorPos_3;

public:
	inline static int32_t get_offset_of_style_0() { return static_cast<int32_t>(offsetof(TextEditor_t1620200435, ___style_0)); }
	inline GUIStyle_t3545875401 * get_style_0() const { return ___style_0; }
	inline GUIStyle_t3545875401 ** get_address_of_style_0() { return &___style_0; }
	inline void set_style_0(GUIStyle_t3545875401 * value)
	{
		___style_0 = value;
		Il2CppCodeGenWriteBarrier(&___style_0, value);
	}

	inline static int32_t get_offset_of_scrollOffset_1() { return static_cast<int32_t>(offsetof(TextEditor_t1620200435, ___scrollOffset_1)); }
	inline Vector2_t465617798  get_scrollOffset_1() const { return ___scrollOffset_1; }
	inline Vector2_t465617798 * get_address_of_scrollOffset_1() { return &___scrollOffset_1; }
	inline void set_scrollOffset_1(Vector2_t465617798  value)
	{
		___scrollOffset_1 = value;
	}

	inline static int32_t get_offset_of_m_Content_2() { return static_cast<int32_t>(offsetof(TextEditor_t1620200435, ___m_Content_2)); }
	inline GUIContent_t2981625813 * get_m_Content_2() const { return ___m_Content_2; }
	inline GUIContent_t2981625813 ** get_address_of_m_Content_2() { return &___m_Content_2; }
	inline void set_m_Content_2(GUIContent_t2981625813 * value)
	{
		___m_Content_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Content_2, value);
	}

	inline static int32_t get_offset_of_m_iAltCursorPos_3() { return static_cast<int32_t>(offsetof(TextEditor_t1620200435, ___m_iAltCursorPos_3)); }
	inline int32_t get_m_iAltCursorPos_3() const { return ___m_iAltCursorPos_3; }
	inline int32_t* get_address_of_m_iAltCursorPos_3() { return &___m_iAltCursorPos_3; }
	inline void set_m_iAltCursorPos_3(int32_t value)
	{
		___m_iAltCursorPos_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
