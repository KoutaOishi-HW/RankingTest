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

// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t1681452955;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t3027888260;
// System.Object
struct Il2CppObject;
// System.Reflection.Binder
struct Binder_t1934246024;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;
// System.Exception
struct Exception_t1145979430;
// System.Type[]
struct TypeU5BU5D_t2442356668;
// System.Reflection.Module
struct Module_t2520131484;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_RuntimeMethodHandle1598230792.h"
#include "mscorlib_System_Reflection_MethodAttributes1641137380.h"
#include "mscorlib_System_Reflection_CallingConventions2717133484.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Reflection_BindingFlags3354691680.h"
#include "mscorlib_System_Reflection_Binder1934246024.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"
#include "mscorlib_System_Type77837473.h"

// System.Boolean System.Reflection.Emit.MethodBuilder::get_ContainsGenericParameters()
extern "C"  bool MethodBuilder_get_ContainsGenericParameters_m138212064 (MethodBuilder_t1681452955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.MethodBuilder::get_MethodHandle()
extern "C"  RuntimeMethodHandle_t1598230792  MethodBuilder_get_MethodHandle_m3494271250 (MethodBuilder_t1681452955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReturnType()
extern "C"  Type_t * MethodBuilder_get_ReturnType_m446668188 (MethodBuilder_t1681452955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_ReflectedType()
extern "C"  Type_t * MethodBuilder_get_ReflectedType_m1320609136 (MethodBuilder_t1681452955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.MethodBuilder::get_DeclaringType()
extern "C"  Type_t * MethodBuilder_get_DeclaringType_m2734207591 (MethodBuilder_t1681452955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::get_Name()
extern "C"  String_t* MethodBuilder_get_Name_m845253610 (MethodBuilder_t1681452955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::get_Attributes()
extern "C"  int32_t MethodBuilder_get_Attributes_m3678061338 (MethodBuilder_t1681452955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::get_CallingConvention()
extern "C"  int32_t MethodBuilder_get_CallingConvention_m3885044904 (MethodBuilder_t1681452955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::GetBaseDefinition()
extern "C"  MethodInfo_t * MethodBuilder_GetBaseDefinition_m774166361 (MethodBuilder_t1681452955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.MethodBuilder::GetParameters()
extern "C"  ParameterInfoU5BU5D_t3027888260* MethodBuilder_GetParameters_m3436317083 (MethodBuilder_t1681452955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::GetParameterCount()
extern "C"  int32_t MethodBuilder_GetParameterCount_m467267889 (MethodBuilder_t1681452955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.MethodBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C"  Il2CppObject * MethodBuilder_Invoke_m1874904900 (MethodBuilder_t1681452955 * __this, Il2CppObject * ___obj0, int32_t ___invokeAttr1, Binder_t1934246024 * ___binder2, ObjectU5BU5D_t3632007997* ___parameters3, CultureInfo_t634113868 * ___culture4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool MethodBuilder_IsDefined_m723964180 (MethodBuilder_t1681452955 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t3632007997* MethodBuilder_GetCustomAttributes_m923430117 (MethodBuilder_t1681452955 * __this, bool ___inherit0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t3632007997* MethodBuilder_GetCustomAttributes_m454145582 (MethodBuilder_t1681452955 * __this, Type_t * ___attributeType0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::check_override()
extern "C"  void MethodBuilder_check_override_m3042345804 (MethodBuilder_t1681452955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.MethodBuilder::fixup()
extern "C"  void MethodBuilder_fixup_m4217981161 (MethodBuilder_t1681452955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.MethodBuilder::ToString()
extern "C"  String_t* MethodBuilder_ToString_m2051053888 (MethodBuilder_t1681452955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::Equals(System.Object)
extern "C"  bool MethodBuilder_Equals_m1205580640 (MethodBuilder_t1681452955 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::GetHashCode()
extern "C"  int32_t MethodBuilder_GetHashCode_m1713271764 (MethodBuilder_t1681452955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.MethodBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C"  int32_t MethodBuilder_get_next_table_index_m683309027 (MethodBuilder_t1681452955 * __this, Il2CppObject * ___obj0, int32_t ___table1, bool ___inc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.MethodBuilder::NotSupported()
extern "C"  Exception_t1145979430 * MethodBuilder_NotSupported_m1885110731 (MethodBuilder_t1681452955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])
extern "C"  MethodInfo_t * MethodBuilder_MakeGenericMethod_m303913412 (MethodBuilder_t1681452955 * __this, TypeU5BU5D_t2442356668* ___typeArguments0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethodDefinition()
extern "C"  bool MethodBuilder_get_IsGenericMethodDefinition_m4284232991 (MethodBuilder_t1681452955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethod()
extern "C"  bool MethodBuilder_get_IsGenericMethod_m770496854 (MethodBuilder_t1681452955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.MethodBuilder::GetGenericArguments()
extern "C"  TypeU5BU5D_t2442356668* MethodBuilder_GetGenericArguments_m948618404 (MethodBuilder_t1681452955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.MethodBuilder::get_Module()
extern "C"  Module_t2520131484 * MethodBuilder_get_Module_m2867334479 (MethodBuilder_t1681452955 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
