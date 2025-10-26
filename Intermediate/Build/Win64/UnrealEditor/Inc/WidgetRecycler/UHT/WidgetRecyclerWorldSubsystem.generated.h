// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WidgetRecyclerWorldSubsystem.h"

#ifdef WIDGETRECYCLER_WidgetRecyclerWorldSubsystem_generated_h
#error "WidgetRecyclerWorldSubsystem.generated.h already included, missing '#pragma once' in WidgetRecyclerWorldSubsystem.h"
#endif
#define WIDGETRECYCLER_WidgetRecyclerWorldSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWidgetPoolEntry **************************************************
#define FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Private_WidgetRecyclerWorldSubsystem_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWidgetPoolEntry_Statics; \
	WIDGETRECYCLER_API static class UScriptStruct* StaticStruct();


struct FWidgetPoolEntry;
// ********** End ScriptStruct FWidgetPoolEntry ****************************************************

// ********** Begin ScriptStruct FWidgetPoolCollection *********************************************
#define FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Private_WidgetRecyclerWorldSubsystem_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWidgetPoolCollection_Statics; \
	WIDGETRECYCLER_API static class UScriptStruct* StaticStruct();


struct FWidgetPoolCollection;
// ********** End ScriptStruct FWidgetPoolCollection ***********************************************

// ********** Begin Class UWidgetRecyclerWorldSubsystem ********************************************
#define FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Private_WidgetRecyclerWorldSubsystem_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleClearInvalidEntries);


WIDGETRECYCLER_API UClass* Z_Construct_UClass_UWidgetRecyclerWorldSubsystem_NoRegister();

#define FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Private_WidgetRecyclerWorldSubsystem_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetRecyclerWorldSubsystem(); \
	friend struct Z_Construct_UClass_UWidgetRecyclerWorldSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WIDGETRECYCLER_API UClass* Z_Construct_UClass_UWidgetRecyclerWorldSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetRecyclerWorldSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WidgetRecycler"), Z_Construct_UClass_UWidgetRecyclerWorldSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UWidgetRecyclerWorldSubsystem)


#define FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Private_WidgetRecyclerWorldSubsystem_h_56_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetRecyclerWorldSubsystem(UWidgetRecyclerWorldSubsystem&&) = delete; \
	UWidgetRecyclerWorldSubsystem(const UWidgetRecyclerWorldSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WIDGETRECYCLER_API, UWidgetRecyclerWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetRecyclerWorldSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWidgetRecyclerWorldSubsystem) \
	WIDGETRECYCLER_API virtual ~UWidgetRecyclerWorldSubsystem();


#define FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Private_WidgetRecyclerWorldSubsystem_h_53_PROLOG
#define FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Private_WidgetRecyclerWorldSubsystem_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Private_WidgetRecyclerWorldSubsystem_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Private_WidgetRecyclerWorldSubsystem_h_56_INCLASS_NO_PURE_DECLS \
	FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Private_WidgetRecyclerWorldSubsystem_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetRecyclerWorldSubsystem;

// ********** End Class UWidgetRecyclerWorldSubsystem **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Private_WidgetRecyclerWorldSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
