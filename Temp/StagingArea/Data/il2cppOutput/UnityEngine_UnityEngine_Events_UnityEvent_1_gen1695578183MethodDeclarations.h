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

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t1695578183;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t2102727227;
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
#include "UnityEngine_UnityEngine_Color2250949164.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern "C"  void UnityEvent_1__ctor_m117795578_gshared (UnityEvent_1_t1695578183 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m117795578(__this, method) ((  void (*) (UnityEvent_1_t1695578183 *, const MethodInfo*))UnityEvent_1__ctor_m117795578_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_AddListener_m903508446_gshared (UnityEvent_1_t1695578183 * __this, UnityAction_1_t2102727227 * ___call0, const MethodInfo* method);
#define UnityEvent_1_AddListener_m903508446(__this, ___call0, method) ((  void (*) (UnityEvent_1_t1695578183 *, UnityAction_1_t2102727227 *, const MethodInfo*))UnityEvent_1_AddListener_m903508446_gshared)(__this, ___call0, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  void UnityEvent_1_RemoveListener_m219620396_gshared (UnityEvent_1_t1695578183 * __this, UnityAction_1_t2102727227 * ___call0, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m219620396(__this, ___call0, method) ((  void (*) (UnityEvent_1_t1695578183 *, UnityAction_1_t2102727227 *, const MethodInfo*))UnityEvent_1_RemoveListener_m219620396_gshared)(__this, ___call0, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_1_FindMethod_Impl_m1178377679_gshared (UnityEvent_1_t1695578183 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m1178377679(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_1_t1695578183 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m1178377679_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t1711298336 * UnityEvent_1_GetDelegate_m2720691419_gshared (UnityEvent_1_t1695578183 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m2720691419(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t1711298336 * (*) (UnityEvent_1_t1695578183 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m2720691419_gshared)(__this, ___target0, ___theFunction1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C"  BaseInvokableCall_t1711298336 * UnityEvent_1_GetDelegate_m1805145148_gshared (Il2CppObject * __this /* static, unused */, UnityAction_1_t2102727227 * ___action0, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m1805145148(__this /* static, unused */, ___action0, method) ((  BaseInvokableCall_t1711298336 * (*) (Il2CppObject * /* static, unused */, UnityAction_1_t2102727227 *, const MethodInfo*))UnityEvent_1_GetDelegate_m1805145148_gshared)(__this /* static, unused */, ___action0, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C"  void UnityEvent_1_Invoke_m2213115825_gshared (UnityEvent_1_t1695578183 * __this, Color_t2250949164  ___arg00, const MethodInfo* method);
#define UnityEvent_1_Invoke_m2213115825(__this, ___arg00, method) ((  void (*) (UnityEvent_1_t1695578183 *, Color_t2250949164 , const MethodInfo*))UnityEvent_1_Invoke_m2213115825_gshared)(__this, ___arg00, method)
