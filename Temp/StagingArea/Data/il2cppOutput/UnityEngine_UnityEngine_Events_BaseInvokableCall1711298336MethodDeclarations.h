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

// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1711298336;
// System.Object
struct Il2CppObject;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Delegate
struct Delegate_t49333446;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Reflection_MethodInfo1176145719.h"
#include "mscorlib_System_Delegate49333446.h"

// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
extern "C"  void BaseInvokableCall__ctor_m1107507914 (BaseInvokableCall_t1711298336 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C"  void BaseInvokableCall__ctor_m2877580597 (BaseInvokableCall_t1711298336 * __this, Il2CppObject * ___target0, MethodInfo_t * ___function1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern "C"  bool BaseInvokableCall_AllowInvoke_m88556325 (Il2CppObject * __this /* static, unused */, Delegate_t49333446 * ___delegate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
