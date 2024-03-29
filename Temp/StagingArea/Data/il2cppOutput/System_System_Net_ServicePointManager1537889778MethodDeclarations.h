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

// System.Net.ICertificatePolicy
struct ICertificatePolicy_t4097912480;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1330171101;
// System.Net.ServicePoint
struct ServicePoint_t3647242307;
// System.Uri
struct Uri_t3338506287;
// System.Net.IWebProxy
struct IWebProxy_t2540215827;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_SecurityProtocolType2715760954.h"
#include "System_System_Uri3338506287.h"

// System.Void System.Net.ServicePointManager::.cctor()
extern "C"  void ServicePointManager__cctor_m2216295373 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICertificatePolicy System.Net.ServicePointManager::get_CertificatePolicy()
extern "C"  Il2CppObject * ServicePointManager_get_CertificatePolicy_m481780303 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager::get_CheckCertificateRevocationList()
extern "C"  bool ServicePointManager_get_CheckCertificateRevocationList_m4009410230 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SecurityProtocolType System.Net.ServicePointManager::get_SecurityProtocol()
extern "C"  int32_t ServicePointManager_get_SecurityProtocol_m1445189298 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.RemoteCertificateValidationCallback System.Net.ServicePointManager::get_ServerCertificateValidationCallback()
extern "C"  RemoteCertificateValidationCallback_t1330171101 * ServicePointManager_get_ServerCertificateValidationCallback_m1419353403 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.Uri,System.Net.IWebProxy)
extern "C"  ServicePoint_t3647242307 * ServicePointManager_FindServicePoint_m3137356168 (Il2CppObject * __this /* static, unused */, Uri_t3338506287 * ___address0, Il2CppObject * ___proxy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::RecycleServicePoints()
extern "C"  void ServicePointManager_RecycleServicePoints_m2772618783 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
