﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1847988475;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
struct  ServerObjectTerminatorSink_t2106410830  : public Il2CppObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink::_nextSink
	Il2CppObject * ____nextSink_0;

public:
	inline static int32_t get_offset_of__nextSink_0() { return static_cast<int32_t>(offsetof(ServerObjectTerminatorSink_t2106410830, ____nextSink_0)); }
	inline Il2CppObject * get__nextSink_0() const { return ____nextSink_0; }
	inline Il2CppObject ** get_address_of__nextSink_0() { return &____nextSink_0; }
	inline void set__nextSink_0(Il2CppObject * value)
	{
		____nextSink_0 = value;
		Il2CppCodeGenWriteBarrier(&____nextSink_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
