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

// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t321260052;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t3653580638;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator
struct X509Certificate2Enumerator_t1917963262;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificate321260052.h"
#include "System_System_Security_Cryptography_X509Certificat3653580638.h"
#include "System_System_Security_Cryptography_X509Certificat2928787192.h"
#include "mscorlib_System_Object707969140.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.ctor()
extern "C"  void X509Certificate2Collection__ctor_m406839448 (X509Certificate2Collection_t321260052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C"  void X509Certificate2Collection__ctor_m819526826 (X509Certificate2Collection_t321260052 * __this, X509Certificate2Collection_t321260052 * ___certificates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Certificate2Collection::get_Item(System.Int32)
extern "C"  X509Certificate2_t3653580638 * X509Certificate2Collection_get_Item_m2173549554 (X509Certificate2Collection_t321260052 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Add(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  int32_t X509Certificate2Collection_Add_m3920471111 (X509Certificate2Collection_t321260052 * __this, X509Certificate2_t3653580638 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::AddRange(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C"  void X509Certificate2Collection_AddRange_m1503879780 (X509Certificate2Collection_t321260052 * __this, X509Certificate2Collection_t321260052 * ___certificates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Contains(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  bool X509Certificate2Collection_Contains_m109907687 (X509Certificate2Collection_t321260052 * __this, X509Certificate2_t3653580638 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Find(System.Security.Cryptography.X509Certificates.X509FindType,System.Object,System.Boolean)
extern "C"  X509Certificate2Collection_t321260052 * X509Certificate2Collection_Find_m1629908635 (X509Certificate2Collection_t321260052 * __this, int32_t ___findType0, Il2CppObject * ___findValue1, bool ___validOnly2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator System.Security.Cryptography.X509Certificates.X509Certificate2Collection::GetEnumerator()
extern "C"  X509Certificate2Enumerator_t1917963262 * X509Certificate2Collection_GetEnumerator_m3796176997 (X509Certificate2Collection_t321260052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
