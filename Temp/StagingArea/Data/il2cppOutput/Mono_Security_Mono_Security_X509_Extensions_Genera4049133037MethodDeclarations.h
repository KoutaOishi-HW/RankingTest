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

// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t4049133037;
// Mono.Security.ASN1
struct ASN1_t2605720235;
// System.String[]
struct StringU5BU5D_t3764931161;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_ASN12605720234.h"

// System.Void Mono.Security.X509.Extensions.GeneralNames::.ctor(Mono.Security.ASN1)
extern "C"  void GeneralNames__ctor_m3021378417 (GeneralNames_t4049133037 * __this, ASN1_t2605720235 * ___sequence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_DNSNames()
extern "C"  StringU5BU5D_t3764931161* GeneralNames_get_DNSNames_m2721668874 (GeneralNames_t4049133037 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_IPAddresses()
extern "C"  StringU5BU5D_t3764931161* GeneralNames_get_IPAddresses_m1712556836 (GeneralNames_t4049133037 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.GeneralNames::ToString()
extern "C"  String_t* GeneralNames_ToString_m800435094 (GeneralNames_t4049133037 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
