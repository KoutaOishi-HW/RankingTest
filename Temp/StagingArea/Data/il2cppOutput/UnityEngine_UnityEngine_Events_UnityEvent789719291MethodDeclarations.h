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

// UnityEngine.Events.UnityEvent
struct UnityEvent_t789719291;
// UnityEngine.Events.UnityAction
struct UnityAction_t625099497;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1711298336;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Events_UnityAction625099497.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Reflection_MethodInfo1176145719.h"

// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern "C"  void UnityEvent__ctor_m588741179 (UnityEvent_t789719291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C"  void UnityEvent_AddListener_m1596810379 (UnityEvent_t789719291 * __this, UnityAction_t625099497 * ___call0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_FindMethod_Impl_m3303953986 (UnityEvent_t789719291 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t1711298336 * UnityEvent_GetDelegate_m2580105876 (UnityEvent_t789719291 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(UnityEngine.Events.UnityAction)
extern "C"  BaseInvokableCall_t1711298336 * UnityEvent_GetDelegate_m2675843778 (Il2CppObject * __this /* static, unused */, UnityAction_t625099497 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern "C"  void UnityEvent_Invoke_m4163344491 (UnityEvent_t789719291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
