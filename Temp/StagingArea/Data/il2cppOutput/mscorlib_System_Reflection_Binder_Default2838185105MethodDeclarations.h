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

// System.Reflection.Binder/Default
struct Default_t2838185105;
// System.Reflection.MethodBase
struct MethodBase_t591550820;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1643888781;
// System.Object[]
struct ObjectU5BU5D_t3632007997;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t3538880115;
// System.Globalization.CultureInfo
struct CultureInfo_t634113868;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t2442356668;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t3027888260;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t2236254246;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_BindingFlags3354691680.h"
#include "mscorlib_System_Globalization_CultureInfo634113868.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_Reflection_MethodBase591550820.h"
#include "mscorlib_System_Type77837473.h"

// System.Void System.Reflection.Binder/Default::.ctor()
extern "C"  void Default__ctor_m172834064 (Default_t2838185105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&)
extern "C"  MethodBase_t591550820 * Default_BindToMethod_m1132635736 (Default_t2838185105 * __this, int32_t ___bindingAttr0, MethodBaseU5BU5D_t1643888781* ___match1, ObjectU5BU5D_t3632007997** ___args2, ParameterModifierU5BU5D_t3538880115* ___modifiers3, CultureInfo_t634113868 * ___culture4, StringU5BU5D_t3764931161* ___names5, Il2CppObject ** ___state6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder/Default::ReorderParameters(System.String[],System.Object[]&,System.Reflection.MethodBase)
extern "C"  void Default_ReorderParameters_m1877749093 (Default_t2838185105 * __this, StringU5BU5D_t3764931161* ___names0, ObjectU5BU5D_t3632007997** ___args1, MethodBase_t591550820 * ___selected2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder/Default::IsArrayAssignable(System.Type,System.Type)
extern "C"  bool Default_IsArrayAssignable_m3862319150 (Il2CppObject * __this /* static, unused */, Type_t * ___object_type0, Type_t * ___target_type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Binder/Default::ChangeType(System.Object,System.Type,System.Globalization.CultureInfo)
extern "C"  Il2CppObject * Default_ChangeType_m3142518280 (Default_t2838185105 * __this, Il2CppObject * ___value0, Type_t * ___type1, CultureInfo_t634113868 * ___culture2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder/Default::ReorderArgumentArray(System.Object[]&,System.Object)
extern "C"  void Default_ReorderArgumentArray_m3980835731 (Default_t2838185105 * __this, ObjectU5BU5D_t3632007997** ___args0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder/Default::check_type(System.Type,System.Type)
extern "C"  bool Default_check_type_m2363631305 (Il2CppObject * __this /* static, unused */, Type_t * ___from0, Type_t * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder/Default::check_arguments(System.Type[],System.Reflection.ParameterInfo[],System.Boolean)
extern "C"  bool Default_check_arguments_m3406020270 (Il2CppObject * __this /* static, unused */, TypeU5BU5D_t2442356668* ___types0, ParameterInfoU5BU5D_t3027888260* ___args1, bool ___allowByRefMatch2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodBase_t591550820 * Default_SelectMethod_m622251293 (Default_t2838185105 * __this, int32_t ___bindingAttr0, MethodBaseU5BU5D_t1643888781* ___match1, TypeU5BU5D_t2442356668* ___types2, ParameterModifierU5BU5D_t3538880115* ___modifiers3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[],System.Boolean)
extern "C"  MethodBase_t591550820 * Default_SelectMethod_m3081239996 (Default_t2838185105 * __this, int32_t ___bindingAttr0, MethodBaseU5BU5D_t1643888781* ___match1, TypeU5BU5D_t2442356668* ___types2, ParameterModifierU5BU5D_t3538880115* ___modifiers3, bool ___allowByRefMatch4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder/Default::GetBetterMethod(System.Reflection.MethodBase,System.Reflection.MethodBase,System.Type[])
extern "C"  MethodBase_t591550820 * Default_GetBetterMethod_m4255740863 (Default_t2838185105 * __this, MethodBase_t591550820 * ___m10, MethodBase_t591550820 * ___m21, TypeU5BU5D_t2442356668* ___types2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder/Default::CompareCloserType(System.Type,System.Type)
extern "C"  int32_t Default_CompareCloserType_m1367126249 (Default_t2838185105 * __this, Type_t * ___t10, Type_t * ___t21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Binder/Default::SelectProperty(System.Reflection.BindingFlags,System.Reflection.PropertyInfo[],System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * Default_SelectProperty_m4154143536 (Default_t2838185105 * __this, int32_t ___bindingAttr0, PropertyInfoU5BU5D_t2236254246* ___match1, Type_t * ___returnType2, TypeU5BU5D_t2442356668* ___indexes3, ParameterModifierU5BU5D_t3538880115* ___modifiers4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder/Default::check_arguments_with_score(System.Type[],System.Reflection.ParameterInfo[])
extern "C"  int32_t Default_check_arguments_with_score_m1714931543 (Il2CppObject * __this /* static, unused */, TypeU5BU5D_t2442356668* ___types0, ParameterInfoU5BU5D_t3027888260* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder/Default::check_type_with_score(System.Type,System.Type)
extern "C"  int32_t Default_check_type_with_score_m58148013 (Il2CppObject * __this /* static, unused */, Type_t * ___from0, Type_t * ___to1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
