﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_SystemException1379178947.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.SmallXmlParserException
struct  SmallXmlParserException_t1156575276  : public SystemException_t1379178947
{
public:
	// System.Int32 Mono.Xml.SmallXmlParserException::line
	int32_t ___line_11;
	// System.Int32 Mono.Xml.SmallXmlParserException::column
	int32_t ___column_12;

public:
	inline static int32_t get_offset_of_line_11() { return static_cast<int32_t>(offsetof(SmallXmlParserException_t1156575276, ___line_11)); }
	inline int32_t get_line_11() const { return ___line_11; }
	inline int32_t* get_address_of_line_11() { return &___line_11; }
	inline void set_line_11(int32_t value)
	{
		___line_11 = value;
	}

	inline static int32_t get_offset_of_column_12() { return static_cast<int32_t>(offsetof(SmallXmlParserException_t1156575276, ___column_12)); }
	inline int32_t get_column_12() const { return ___column_12; }
	inline int32_t* get_address_of_column_12() { return &___column_12; }
	inline void set_column_12(int32_t value)
	{
		___column_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
