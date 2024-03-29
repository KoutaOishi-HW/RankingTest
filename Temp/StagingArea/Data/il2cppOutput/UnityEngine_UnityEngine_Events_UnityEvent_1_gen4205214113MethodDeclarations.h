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

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t4205214113;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t317395861;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1711298336;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Reflection_MethodInfo1176145719.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
extern "C"  void UnityEvent_1__ctor_m3317039790_gshared (UnityEvent_1_t4205214113 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m3317039790(__this, method) ((  void (*) (UnityEvent_1_t4205214113 *, const MethodInfo*))UnityEvent_1__ctor_m3317039790_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_AddListener_m525228415_gshared (UnityEvent_1_t4205214113 * __this, UnityAction_1_t317395861 * ___call0, const MethodInfo* method);
#define UnityEvent_1_AddListener_m525228415(__this, ___call0, method) ((  void (*) (UnityEvent_1_t4205214113 *, UnityAction_1_t317395861 *, const MethodInfo*))UnityEvent_1_AddListener_m525228415_gshared)(__this, ___call0, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_RemoveListener_m4000386396_gshared (UnityEvent_1_t4205214113 * __this, UnityAction_1_t317395861 * ___call0, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m4000386396(__this, ___call0, method) ((  void (*) (UnityEvent_1_t4205214113 *, UnityAction_1_t317395861 *, const MethodInfo*))UnityEvent_1_RemoveListener_m4000386396_gshared)(__this, ___call0, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2323626861_gshared (UnityEvent_1_t4205214113 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m2323626861(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_1_t4205214113 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m2323626861_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t1711298336 * UnityEvent_1_GetDelegate_m820458489_gshared (UnityEvent_1_t4205214113 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m820458489(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t1711298336 * (*) (UnityEvent_1_t4205214113 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m820458489_gshared)(__this, ___target0, ___theFunction1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  BaseInvokableCall_t1711298336 * UnityEvent_1_GetDelegate_m66964436_gshared (Il2CppObject * __this /* static, unused */, UnityAction_1_t317395861 * ___action0, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m66964436(__this /* static, unused */, ___action0, method) ((  BaseInvokableCall_t1711298336 * (*) (Il2CppObject * /* static, unused */, UnityAction_1_t317395861 *, const MethodInfo*))UnityEvent_1_GetDelegate_m66964436_gshared)(__this /* static, unused */, ___action0, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
extern "C"  void UnityEvent_1_Invoke_m1533100983_gshared (UnityEvent_1_t4205214113 * __this, Vector2_t465617798  ___arg00, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1533100983(__this, ___arg00, method) ((  void (*) (UnityEvent_1_t4205214113 *, Vector2_t465617798 , const MethodInfo*))UnityEvent_1_Invoke_m1533100983_gshared)(__this, ___arg00, method)
