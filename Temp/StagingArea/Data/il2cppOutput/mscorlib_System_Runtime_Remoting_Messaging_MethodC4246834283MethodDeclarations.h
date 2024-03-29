﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Runtime.Remoting.Messaging.MethodCall
struct MethodCall_t4246834283;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t2118454908;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1029367511;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t211486318;
// System.Reflection.MethodBase
struct MethodBase_t591550820;
// System.Collections.IDictionary
struct IDictionary_t2734775517;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t2442356668;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio1029367511.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon3848318932.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Type77837473.h"

// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Remoting.Messaging.Header[])
extern "C"  void MethodCall__ctor_m646635320 (MethodCall_t4246834283 * __this, HeaderU5BU5D_t2118454908* ___h10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MethodCall__ctor_m4106494862 (MethodCall_t4246834283 * __this, SerializationInfo_t1029367511 * ___info0, StreamingContext_t3848318932  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor()
extern "C"  void MethodCall__ctor_m1871406663 (MethodCall_t4246834283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern "C"  void MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m3499697771 (MethodCall_t4246834283 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object)
extern "C"  void MethodCall_InitMethodProperty_m1719565089 (MethodCall_t4246834283 * __this, String_t* ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MethodCall_GetObjectData_m3044004255 (MethodCall_t4246834283 * __this, SerializationInfo_t1029367511 * ___info0, StreamingContext_t3848318932  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::get_Args()
extern "C"  ObjectU5BU5D_t3632007997* MethodCall_get_Args_m1494813934 (MethodCall_t4246834283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::get_LogicalCallContext()
extern "C"  LogicalCallContext_t211486318 * MethodCall_get_LogicalCallContext_m3769562079 (MethodCall_t4246834283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase()
extern "C"  MethodBase_t591550820 * MethodCall_get_MethodBase_m688041003 (MethodCall_t4246834283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_MethodName()
extern "C"  String_t* MethodCall_get_MethodName_m257326115 (MethodCall_t4246834283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodCall::get_MethodSignature()
extern "C"  Il2CppObject * MethodCall_get_MethodSignature_m2288901594 (MethodCall_t4246834283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties()
extern "C"  Il2CppObject * MethodCall_get_Properties_m1893707917 (MethodCall_t4246834283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary()
extern "C"  void MethodCall_InitDictionary_m4270429537 (MethodCall_t4246834283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName()
extern "C"  String_t* MethodCall_get_TypeName_m2413432542 (MethodCall_t4246834283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_Uri()
extern "C"  String_t* MethodCall_get_Uri_m1781226377 (MethodCall_t4246834283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String)
extern "C"  void MethodCall_set_Uri_m2512888818 (MethodCall_t4246834283 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::Init()
extern "C"  void MethodCall_Init_m3987198685 (MethodCall_t4246834283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::ResolveMethod()
extern "C"  void MethodCall_ResolveMethod_m3858310828 (MethodCall_t4246834283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Messaging.MethodCall::CastTo(System.String,System.Type)
extern "C"  Type_t * MethodCall_CastTo_m2551807722 (MethodCall_t4246834283 * __this, String_t* ___clientType0, Type_t * ___serverType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::GetTypeNameFromAssemblyQualifiedName(System.String)
extern "C"  String_t* MethodCall_GetTypeNameFromAssemblyQualifiedName_m3601734922 (Il2CppObject * __this /* static, unused */, String_t* ___aqname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::get_GenericArguments()
extern "C"  TypeU5BU5D_t2442356668* MethodCall_get_GenericArguments_m3765959301 (MethodCall_t4246834283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
