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

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t759339468;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t2210175605;
// System.Type[]
struct TypeU5BU5D_t2442356668;
// System.Exception
struct Exception_t1145979430;
// System.Reflection.AssemblyName
struct AssemblyName_t2136338539;

#include "codegen/il2cpp-codegen.h"

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C"  String_t* AssemblyBuilder_get_Location_m554656855 (AssemblyBuilder_t759339468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern "C"  ModuleU5BU5D_t2210175605* AssemblyBuilder_GetModulesInternal_m3379844831 (AssemblyBuilder_t759339468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.AssemblyBuilder::GetTypes(System.Boolean)
extern "C"  TypeU5BU5D_t2442356668* AssemblyBuilder_GetTypes_m2527954992 (AssemblyBuilder_t759339468 * __this, bool ___exportedOnly0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C"  bool AssemblyBuilder_get_IsCompilerContext_m2864230005 (AssemblyBuilder_t759339468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C"  Exception_t1145979430 * AssemblyBuilder_not_supported_m383946865 (AssemblyBuilder_t759339468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C"  AssemblyName_t2136338539 * AssemblyBuilder_UnprotectedGetName_m2328641134 (AssemblyBuilder_t759339468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
