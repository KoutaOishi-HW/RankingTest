﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.AsyncCallback
struct AsyncCallback_t889871978;
// System.Exception
struct Exception_t1145979430;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t955467038;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t3378505055;

#include "mscorlib_System_Object707969140.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult
struct  SendRecordAsyncResult_t4092502320  : public Il2CppObject
{
public:
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::locker
	Il2CppObject * ___locker_0;
	// System.AsyncCallback Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_userCallback
	AsyncCallback_t889871978 * ____userCallback_1;
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_userState
	Il2CppObject * ____userState_2;
	// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_asyncException
	Exception_t1145979430 * ____asyncException_3;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::handle
	ManualResetEvent_t955467038 * ___handle_4;
	// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_message
	HandshakeMessage_t3378505055 * ____message_5;
	// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::completed
	bool ___completed_6;

public:
	inline static int32_t get_offset_of_locker_0() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t4092502320, ___locker_0)); }
	inline Il2CppObject * get_locker_0() const { return ___locker_0; }
	inline Il2CppObject ** get_address_of_locker_0() { return &___locker_0; }
	inline void set_locker_0(Il2CppObject * value)
	{
		___locker_0 = value;
		Il2CppCodeGenWriteBarrier(&___locker_0, value);
	}

	inline static int32_t get_offset_of__userCallback_1() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t4092502320, ____userCallback_1)); }
	inline AsyncCallback_t889871978 * get__userCallback_1() const { return ____userCallback_1; }
	inline AsyncCallback_t889871978 ** get_address_of__userCallback_1() { return &____userCallback_1; }
	inline void set__userCallback_1(AsyncCallback_t889871978 * value)
	{
		____userCallback_1 = value;
		Il2CppCodeGenWriteBarrier(&____userCallback_1, value);
	}

	inline static int32_t get_offset_of__userState_2() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t4092502320, ____userState_2)); }
	inline Il2CppObject * get__userState_2() const { return ____userState_2; }
	inline Il2CppObject ** get_address_of__userState_2() { return &____userState_2; }
	inline void set__userState_2(Il2CppObject * value)
	{
		____userState_2 = value;
		Il2CppCodeGenWriteBarrier(&____userState_2, value);
	}

	inline static int32_t get_offset_of__asyncException_3() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t4092502320, ____asyncException_3)); }
	inline Exception_t1145979430 * get__asyncException_3() const { return ____asyncException_3; }
	inline Exception_t1145979430 ** get_address_of__asyncException_3() { return &____asyncException_3; }
	inline void set__asyncException_3(Exception_t1145979430 * value)
	{
		____asyncException_3 = value;
		Il2CppCodeGenWriteBarrier(&____asyncException_3, value);
	}

	inline static int32_t get_offset_of_handle_4() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t4092502320, ___handle_4)); }
	inline ManualResetEvent_t955467038 * get_handle_4() const { return ___handle_4; }
	inline ManualResetEvent_t955467038 ** get_address_of_handle_4() { return &___handle_4; }
	inline void set_handle_4(ManualResetEvent_t955467038 * value)
	{
		___handle_4 = value;
		Il2CppCodeGenWriteBarrier(&___handle_4, value);
	}

	inline static int32_t get_offset_of__message_5() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t4092502320, ____message_5)); }
	inline HandshakeMessage_t3378505055 * get__message_5() const { return ____message_5; }
	inline HandshakeMessage_t3378505055 ** get_address_of__message_5() { return &____message_5; }
	inline void set__message_5(HandshakeMessage_t3378505055 * value)
	{
		____message_5 = value;
		Il2CppCodeGenWriteBarrier(&____message_5, value);
	}

	inline static int32_t get_offset_of_completed_6() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t4092502320, ___completed_6)); }
	inline bool get_completed_6() const { return ___completed_6; }
	inline bool* get_address_of_completed_6() { return &___completed_6; }
	inline void set_completed_6(bool value)
	{
		___completed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
