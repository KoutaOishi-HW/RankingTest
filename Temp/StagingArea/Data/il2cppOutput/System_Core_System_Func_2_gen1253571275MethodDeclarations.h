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

// System.Func`2<System.Object,System.Boolean>
struct Func_2_t1253571275;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1538479585;
// System.AsyncCallback
struct AsyncCallback_t889871978;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_AsyncCallback889871978.h"

// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m1354888807_gshared (Func_2_t1253571275 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Func_2__ctor_m1354888807(__this, ___object0, ___method1, method) ((  void (*) (Func_2_t1253571275 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Func_2__ctor_m1354888807_gshared)(__this, ___object0, ___method1, method)
// TResult System.Func`2<System.Object,System.Boolean>::Invoke(T)
extern "C"  bool Func_2_Invoke_m2968608789_gshared (Func_2_t1253571275 * __this, Il2CppObject * ___arg10, const MethodInfo* method);
#define Func_2_Invoke_m2968608789(__this, ___arg10, method) ((  bool (*) (Func_2_t1253571275 *, Il2CppObject *, const MethodInfo*))Func_2_Invoke_m2968608789_gshared)(__this, ___arg10, method)
// System.IAsyncResult System.Func`2<System.Object,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Func_2_BeginInvoke_m1429757044_gshared (Func_2_t1253571275 * __this, Il2CppObject * ___arg10, AsyncCallback_t889871978 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Func_2_BeginInvoke_m1429757044(__this, ___arg10, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Func_2_t1253571275 *, Il2CppObject *, AsyncCallback_t889871978 *, Il2CppObject *, const MethodInfo*))Func_2_BeginInvoke_m1429757044_gshared)(__this, ___arg10, ___callback1, ___object2, method)
// TResult System.Func`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Func_2_EndInvoke_m924416567_gshared (Func_2_t1253571275 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Func_2_EndInvoke_m924416567(__this, ___result0, method) ((  bool (*) (Func_2_t1253571275 *, Il2CppObject *, const MethodInfo*))Func_2_EndInvoke_m924416567_gshared)(__this, ___result0, method)
