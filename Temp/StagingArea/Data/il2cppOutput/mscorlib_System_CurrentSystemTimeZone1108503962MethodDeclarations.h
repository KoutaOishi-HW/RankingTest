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

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t1108503962;
// System.Object
struct Il2CppObject;
// System.Int64[]
struct Int64U5BU5D_t1300640033;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.Globalization.DaylightTime
struct DaylightTime_t1940822727;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object707969140.h"
#include "mscorlib_System_TimeSpan1834055012.h"
#include "mscorlib_System_DateTime2933746480.h"
#include "mscorlib_System_Globalization_DaylightTime1940822727.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
extern "C"  void CurrentSystemTimeZone__ctor_m4069571984 (CurrentSystemTimeZone_t1108503962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern "C"  void CurrentSystemTimeZone__ctor_m2450777236 (CurrentSystemTimeZone_t1108503962 * __this, int64_t ___lnow0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m489233422 (CurrentSystemTimeZone_t1108503962 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern "C"  bool CurrentSystemTimeZone_GetTimeZoneData_m2086117940 (Il2CppObject * __this /* static, unused */, int32_t ___year0, Int64U5BU5D_t1300640033** ___data1, StringU5BU5D_t3764931161** ___names2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern "C"  DaylightTime_t1940822727 * CurrentSystemTimeZone_GetDaylightChanges_m2777828412 (CurrentSystemTimeZone_t1108503962 * __this, int32_t ___year0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern "C"  TimeSpan_t1834055012  CurrentSystemTimeZone_GetUtcOffset_m1858071188 (CurrentSystemTimeZone_t1108503962 * __this, DateTime_t2933746480  ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern "C"  void CurrentSystemTimeZone_OnDeserialization_m1834214305 (CurrentSystemTimeZone_t1108503962 * __this, DaylightTime_t1940822727 * ___dlt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern "C"  DaylightTime_t1940822727 * CurrentSystemTimeZone_GetDaylightTimeFromData_m2605898923 (CurrentSystemTimeZone_t1108503962 * __this, Int64U5BU5D_t1300640033* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
