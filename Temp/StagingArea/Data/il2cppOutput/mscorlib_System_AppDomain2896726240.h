﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1312997718;
// System.Security.Policy.Evidence
struct Evidence_t435860;
// System.Security.PermissionSet
struct PermissionSet_t20502880;
// System.Security.Principal.IPrincipal
struct IPrincipal_t3868339230;
// System.AppDomain
struct AppDomain_t2896726240;
// System.AppDomainManager
struct AppDomainManager_t3862818659;
// System.ActivationContext
struct ActivationContext_t3933396022;
// System.ApplicationIdentity
struct ApplicationIdentity_t1328666757;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t3497515617;
// System.ResolveEventHandler
struct ResolveEventHandler_t2076475665;
// System.EventHandler
struct EventHandler_t1189809773;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t3535650289;

#include "mscorlib_System_MarshalByRefObject3870530982.h"
#include "mscorlib_System_IntPtr3076297692.h"
#include "mscorlib_System_Security_Principal_PrincipalPolicy3839902105.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomain
struct  AppDomain_t2896726240  : public MarshalByRefObject_t3870530982
{
public:
	// System.IntPtr System.AppDomain::_mono_app_domain
	IntPtr_t ____mono_app_domain_1;
	// System.Security.Policy.Evidence System.AppDomain::_evidence
	Evidence_t435860 * ____evidence_6;
	// System.Security.PermissionSet System.AppDomain::_granted
	PermissionSet_t20502880 * ____granted_7;
	// System.Security.Principal.PrincipalPolicy System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AppDomainManager System.AppDomain::_domain_manager
	AppDomainManager_t3862818659 * ____domain_manager_11;
	// System.ActivationContext System.AppDomain::_activation
	ActivationContext_t3933396022 * ____activation_12;
	// System.ApplicationIdentity System.AppDomain::_applicationIdentity
	ApplicationIdentity_t1328666757 * ____applicationIdentity_13;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t3497515617 * ___AssemblyLoad_14;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t2076475665 * ___AssemblyResolve_15;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t1189809773 * ___DomainUnload_16;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t1189809773 * ___ProcessExit_17;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t2076475665 * ___ResourceResolve_18;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t2076475665 * ___TypeResolve_19;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_t3535650289 * ___UnhandledException_20;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t2076475665 * ___ReflectionOnlyAssemblyResolve_21;

public:
	inline static int32_t get_offset_of__mono_app_domain_1() { return static_cast<int32_t>(offsetof(AppDomain_t2896726240, ____mono_app_domain_1)); }
	inline IntPtr_t get__mono_app_domain_1() const { return ____mono_app_domain_1; }
	inline IntPtr_t* get_address_of__mono_app_domain_1() { return &____mono_app_domain_1; }
	inline void set__mono_app_domain_1(IntPtr_t value)
	{
		____mono_app_domain_1 = value;
	}

	inline static int32_t get_offset_of__evidence_6() { return static_cast<int32_t>(offsetof(AppDomain_t2896726240, ____evidence_6)); }
	inline Evidence_t435860 * get__evidence_6() const { return ____evidence_6; }
	inline Evidence_t435860 ** get_address_of__evidence_6() { return &____evidence_6; }
	inline void set__evidence_6(Evidence_t435860 * value)
	{
		____evidence_6 = value;
		Il2CppCodeGenWriteBarrier(&____evidence_6, value);
	}

	inline static int32_t get_offset_of__granted_7() { return static_cast<int32_t>(offsetof(AppDomain_t2896726240, ____granted_7)); }
	inline PermissionSet_t20502880 * get__granted_7() const { return ____granted_7; }
	inline PermissionSet_t20502880 ** get_address_of__granted_7() { return &____granted_7; }
	inline void set__granted_7(PermissionSet_t20502880 * value)
	{
		____granted_7 = value;
		Il2CppCodeGenWriteBarrier(&____granted_7, value);
	}

	inline static int32_t get_offset_of__principalPolicy_8() { return static_cast<int32_t>(offsetof(AppDomain_t2896726240, ____principalPolicy_8)); }
	inline int32_t get__principalPolicy_8() const { return ____principalPolicy_8; }
	inline int32_t* get_address_of__principalPolicy_8() { return &____principalPolicy_8; }
	inline void set__principalPolicy_8(int32_t value)
	{
		____principalPolicy_8 = value;
	}

	inline static int32_t get_offset_of__domain_manager_11() { return static_cast<int32_t>(offsetof(AppDomain_t2896726240, ____domain_manager_11)); }
	inline AppDomainManager_t3862818659 * get__domain_manager_11() const { return ____domain_manager_11; }
	inline AppDomainManager_t3862818659 ** get_address_of__domain_manager_11() { return &____domain_manager_11; }
	inline void set__domain_manager_11(AppDomainManager_t3862818659 * value)
	{
		____domain_manager_11 = value;
		Il2CppCodeGenWriteBarrier(&____domain_manager_11, value);
	}

	inline static int32_t get_offset_of__activation_12() { return static_cast<int32_t>(offsetof(AppDomain_t2896726240, ____activation_12)); }
	inline ActivationContext_t3933396022 * get__activation_12() const { return ____activation_12; }
	inline ActivationContext_t3933396022 ** get_address_of__activation_12() { return &____activation_12; }
	inline void set__activation_12(ActivationContext_t3933396022 * value)
	{
		____activation_12 = value;
		Il2CppCodeGenWriteBarrier(&____activation_12, value);
	}

	inline static int32_t get_offset_of__applicationIdentity_13() { return static_cast<int32_t>(offsetof(AppDomain_t2896726240, ____applicationIdentity_13)); }
	inline ApplicationIdentity_t1328666757 * get__applicationIdentity_13() const { return ____applicationIdentity_13; }
	inline ApplicationIdentity_t1328666757 ** get_address_of__applicationIdentity_13() { return &____applicationIdentity_13; }
	inline void set__applicationIdentity_13(ApplicationIdentity_t1328666757 * value)
	{
		____applicationIdentity_13 = value;
		Il2CppCodeGenWriteBarrier(&____applicationIdentity_13, value);
	}

	inline static int32_t get_offset_of_AssemblyLoad_14() { return static_cast<int32_t>(offsetof(AppDomain_t2896726240, ___AssemblyLoad_14)); }
	inline AssemblyLoadEventHandler_t3497515617 * get_AssemblyLoad_14() const { return ___AssemblyLoad_14; }
	inline AssemblyLoadEventHandler_t3497515617 ** get_address_of_AssemblyLoad_14() { return &___AssemblyLoad_14; }
	inline void set_AssemblyLoad_14(AssemblyLoadEventHandler_t3497515617 * value)
	{
		___AssemblyLoad_14 = value;
		Il2CppCodeGenWriteBarrier(&___AssemblyLoad_14, value);
	}

	inline static int32_t get_offset_of_AssemblyResolve_15() { return static_cast<int32_t>(offsetof(AppDomain_t2896726240, ___AssemblyResolve_15)); }
	inline ResolveEventHandler_t2076475665 * get_AssemblyResolve_15() const { return ___AssemblyResolve_15; }
	inline ResolveEventHandler_t2076475665 ** get_address_of_AssemblyResolve_15() { return &___AssemblyResolve_15; }
	inline void set_AssemblyResolve_15(ResolveEventHandler_t2076475665 * value)
	{
		___AssemblyResolve_15 = value;
		Il2CppCodeGenWriteBarrier(&___AssemblyResolve_15, value);
	}

	inline static int32_t get_offset_of_DomainUnload_16() { return static_cast<int32_t>(offsetof(AppDomain_t2896726240, ___DomainUnload_16)); }
	inline EventHandler_t1189809773 * get_DomainUnload_16() const { return ___DomainUnload_16; }
	inline EventHandler_t1189809773 ** get_address_of_DomainUnload_16() { return &___DomainUnload_16; }
	inline void set_DomainUnload_16(EventHandler_t1189809773 * value)
	{
		___DomainUnload_16 = value;
		Il2CppCodeGenWriteBarrier(&___DomainUnload_16, value);
	}

	inline static int32_t get_offset_of_ProcessExit_17() { return static_cast<int32_t>(offsetof(AppDomain_t2896726240, ___ProcessExit_17)); }
	inline EventHandler_t1189809773 * get_ProcessExit_17() const { return ___ProcessExit_17; }
	inline EventHandler_t1189809773 ** get_address_of_ProcessExit_17() { return &___ProcessExit_17; }
	inline void set_ProcessExit_17(EventHandler_t1189809773 * value)
	{
		___ProcessExit_17 = value;
		Il2CppCodeGenWriteBarrier(&___ProcessExit_17, value);
	}

	inline static int32_t get_offset_of_ResourceResolve_18() { return static_cast<int32_t>(offsetof(AppDomain_t2896726240, ___ResourceResolve_18)); }
	inline ResolveEventHandler_t2076475665 * get_ResourceResolve_18() const { return ___ResourceResolve_18; }
	inline ResolveEventHandler_t2076475665 ** get_address_of_ResourceResolve_18() { return &___ResourceResolve_18; }
	inline void set_ResourceResolve_18(ResolveEventHandler_t2076475665 * value)
	{
		___ResourceResolve_18 = value;
		Il2CppCodeGenWriteBarrier(&___ResourceResolve_18, value);
	}

	inline static int32_t get_offset_of_TypeResolve_19() { return static_cast<int32_t>(offsetof(AppDomain_t2896726240, ___TypeResolve_19)); }
	inline ResolveEventHandler_t2076475665 * get_TypeResolve_19() const { return ___TypeResolve_19; }
	inline ResolveEventHandler_t2076475665 ** get_address_of_TypeResolve_19() { return &___TypeResolve_19; }
	inline void set_TypeResolve_19(ResolveEventHandler_t2076475665 * value)
	{
		___TypeResolve_19 = value;
		Il2CppCodeGenWriteBarrier(&___TypeResolve_19, value);
	}

	inline static int32_t get_offset_of_UnhandledException_20() { return static_cast<int32_t>(offsetof(AppDomain_t2896726240, ___UnhandledException_20)); }
	inline UnhandledExceptionEventHandler_t3535650289 * get_UnhandledException_20() const { return ___UnhandledException_20; }
	inline UnhandledExceptionEventHandler_t3535650289 ** get_address_of_UnhandledException_20() { return &___UnhandledException_20; }
	inline void set_UnhandledException_20(UnhandledExceptionEventHandler_t3535650289 * value)
	{
		___UnhandledException_20 = value;
		Il2CppCodeGenWriteBarrier(&___UnhandledException_20, value);
	}

	inline static int32_t get_offset_of_ReflectionOnlyAssemblyResolve_21() { return static_cast<int32_t>(offsetof(AppDomain_t2896726240, ___ReflectionOnlyAssemblyResolve_21)); }
	inline ResolveEventHandler_t2076475665 * get_ReflectionOnlyAssemblyResolve_21() const { return ___ReflectionOnlyAssemblyResolve_21; }
	inline ResolveEventHandler_t2076475665 ** get_address_of_ReflectionOnlyAssemblyResolve_21() { return &___ReflectionOnlyAssemblyResolve_21; }
	inline void set_ReflectionOnlyAssemblyResolve_21(ResolveEventHandler_t2076475665 * value)
	{
		___ReflectionOnlyAssemblyResolve_21 = value;
		Il2CppCodeGenWriteBarrier(&___ReflectionOnlyAssemblyResolve_21, value);
	}
};

struct AppDomain_t2896726240_StaticFields
{
public:
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_t2896726240 * ___default_domain_10;

public:
	inline static int32_t get_offset_of__process_guid_2() { return static_cast<int32_t>(offsetof(AppDomain_t2896726240_StaticFields, ____process_guid_2)); }
	inline String_t* get__process_guid_2() const { return ____process_guid_2; }
	inline String_t** get_address_of__process_guid_2() { return &____process_guid_2; }
	inline void set__process_guid_2(String_t* value)
	{
		____process_guid_2 = value;
		Il2CppCodeGenWriteBarrier(&____process_guid_2, value);
	}

	inline static int32_t get_offset_of_default_domain_10() { return static_cast<int32_t>(offsetof(AppDomain_t2896726240_StaticFields, ___default_domain_10)); }
	inline AppDomain_t2896726240 * get_default_domain_10() const { return ___default_domain_10; }
	inline AppDomain_t2896726240 ** get_address_of_default_domain_10() { return &___default_domain_10; }
	inline void set_default_domain_10(AppDomain_t2896726240 * value)
	{
		___default_domain_10 = value;
		Il2CppCodeGenWriteBarrier(&___default_domain_10, value);
	}
};

struct AppDomain_t2896726240_ThreadStaticFields
{
public:
	// System.Collections.Hashtable System.AppDomain::type_resolve_in_progress
	Hashtable_t1312997718 * ___type_resolve_in_progress_3;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress
	Hashtable_t1312997718 * ___assembly_resolve_in_progress_4;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress_refonly
	Hashtable_t1312997718 * ___assembly_resolve_in_progress_refonly_5;
	// System.Security.Principal.IPrincipal System.AppDomain::_principal
	Il2CppObject * ____principal_9;

public:
	inline static int32_t get_offset_of_type_resolve_in_progress_3() { return static_cast<int32_t>(offsetof(AppDomain_t2896726240_ThreadStaticFields, ___type_resolve_in_progress_3)); }
	inline Hashtable_t1312997718 * get_type_resolve_in_progress_3() const { return ___type_resolve_in_progress_3; }
	inline Hashtable_t1312997718 ** get_address_of_type_resolve_in_progress_3() { return &___type_resolve_in_progress_3; }
	inline void set_type_resolve_in_progress_3(Hashtable_t1312997718 * value)
	{
		___type_resolve_in_progress_3 = value;
		Il2CppCodeGenWriteBarrier(&___type_resolve_in_progress_3, value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_4() { return static_cast<int32_t>(offsetof(AppDomain_t2896726240_ThreadStaticFields, ___assembly_resolve_in_progress_4)); }
	inline Hashtable_t1312997718 * get_assembly_resolve_in_progress_4() const { return ___assembly_resolve_in_progress_4; }
	inline Hashtable_t1312997718 ** get_address_of_assembly_resolve_in_progress_4() { return &___assembly_resolve_in_progress_4; }
	inline void set_assembly_resolve_in_progress_4(Hashtable_t1312997718 * value)
	{
		___assembly_resolve_in_progress_4 = value;
		Il2CppCodeGenWriteBarrier(&___assembly_resolve_in_progress_4, value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_refonly_5() { return static_cast<int32_t>(offsetof(AppDomain_t2896726240_ThreadStaticFields, ___assembly_resolve_in_progress_refonly_5)); }
	inline Hashtable_t1312997718 * get_assembly_resolve_in_progress_refonly_5() const { return ___assembly_resolve_in_progress_refonly_5; }
	inline Hashtable_t1312997718 ** get_address_of_assembly_resolve_in_progress_refonly_5() { return &___assembly_resolve_in_progress_refonly_5; }
	inline void set_assembly_resolve_in_progress_refonly_5(Hashtable_t1312997718 * value)
	{
		___assembly_resolve_in_progress_refonly_5 = value;
		Il2CppCodeGenWriteBarrier(&___assembly_resolve_in_progress_refonly_5, value);
	}

	inline static int32_t get_offset_of__principal_9() { return static_cast<int32_t>(offsetof(AppDomain_t2896726240_ThreadStaticFields, ____principal_9)); }
	inline Il2CppObject * get__principal_9() const { return ____principal_9; }
	inline Il2CppObject ** get_address_of__principal_9() { return &____principal_9; }
	inline void set__principal_9(Il2CppObject * value)
	{
		____principal_9 = value;
		Il2CppCodeGenWriteBarrier(&____principal_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
