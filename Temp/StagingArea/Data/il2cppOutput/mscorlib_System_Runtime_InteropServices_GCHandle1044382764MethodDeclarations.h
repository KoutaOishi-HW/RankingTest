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

// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_GCHandle1044382764.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Runtime_InteropServices_GCHandleTy2845551828.h"

// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C"  void GCHandle__ctor_m2952050298 (GCHandle_t1044382764 * __this, Il2CppObject * ___value0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
extern "C"  bool GCHandle_get_IsAllocated_m2246567034 (GCHandle_t1044382764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
extern "C"  Il2CppObject * GCHandle_get_Target_m2327042781 (GCHandle_t1044382764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C"  GCHandle_t1044382764  GCHandle_Alloc_m1063472408 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C"  void GCHandle_Free_m1639542352 (GCHandle_t1044382764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)
extern "C"  Il2CppObject * GCHandle_GetTarget_m2056570211 (Il2CppObject * __this /* static, unused */, int32_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)
extern "C"  int32_t GCHandle_GetTargetHandle_m3810891574 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, int32_t ___handle1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)
extern "C"  void GCHandle_FreeHandle_m2466807271 (Il2CppObject * __this /* static, unused */, int32_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.GCHandle::Equals(System.Object)
extern "C"  bool GCHandle_Equals_m170815541 (GCHandle_t1044382764 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.GCHandle::GetHashCode()
extern "C"  int32_t GCHandle_GetHashCode_m1664905595 (GCHandle_t1044382764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct GCHandle_t1044382764;
struct GCHandle_t1044382764_marshaled_pinvoke;

extern "C" void GCHandle_t1044382764_marshal_pinvoke(const GCHandle_t1044382764& unmarshaled, GCHandle_t1044382764_marshaled_pinvoke& marshaled);
extern "C" void GCHandle_t1044382764_marshal_pinvoke_back(const GCHandle_t1044382764_marshaled_pinvoke& marshaled, GCHandle_t1044382764& unmarshaled);
extern "C" void GCHandle_t1044382764_marshal_pinvoke_cleanup(GCHandle_t1044382764_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct GCHandle_t1044382764;
struct GCHandle_t1044382764_marshaled_com;

extern "C" void GCHandle_t1044382764_marshal_com(const GCHandle_t1044382764& unmarshaled, GCHandle_t1044382764_marshaled_com& marshaled);
extern "C" void GCHandle_t1044382764_marshal_com_back(const GCHandle_t1044382764_marshaled_com& marshaled, GCHandle_t1044382764& unmarshaled);
extern "C" void GCHandle_t1044382764_marshal_com_cleanup(GCHandle_t1044382764_marshaled_com& marshaled);
