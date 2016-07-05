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

// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t1126774094;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t4221943136;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_EventSyste4221943136.h"
#include "UnityEngine_UnityEngine_Vector2465617798.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_MoveDirect3562018171.h"

// System.Void UnityEngine.EventSystems.AxisEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C"  void AxisEventData__ctor_m3571217632 (AxisEventData_t1126774094 * __this, EventSystem_t4221943136 * ___eventSystem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.AxisEventData::get_moveVector()
extern "C"  Vector2_t465617798  AxisEventData_get_moveVector_m1338727516 (AxisEventData_t1126774094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.AxisEventData::set_moveVector(UnityEngine.Vector2)
extern "C"  void AxisEventData_set_moveVector_m3227339885 (AxisEventData_t1126774094 * __this, Vector2_t465617798  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.AxisEventData::get_moveDir()
extern "C"  int32_t AxisEventData_get_moveDir_m3968662359 (AxisEventData_t1126774094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.AxisEventData::set_moveDir(UnityEngine.EventSystems.MoveDirection)
extern "C"  void AxisEventData_set_moveDir_m254243794 (AxisEventData_t1126774094 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
