// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoolableWidgetInterface.h"

#ifdef WIDGETRECYCLER_PoolableWidgetInterface_generated_h
#error "PoolableWidgetInterface.generated.h already included, missing '#pragma once' in PoolableWidgetInterface.h"
#endif
#define WIDGETRECYCLER_PoolableWidgetInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPoolableWidgetInterface *********************************************
#define FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_PoolableWidgetInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnWidgetRecycled_Implementation() {}; \
	DECLARE_FUNCTION(execOnWidgetRecycled);


#define FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_PoolableWidgetInterface_h_13_CALLBACK_WRAPPERS
WIDGETRECYCLER_API UClass* Z_Construct_UClass_UPoolableWidgetInterface_NoRegister();

#define FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_PoolableWidgetInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoolableWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoolableWidgetInterface(UPoolableWidgetInterface&&) = delete; \
	UPoolableWidgetInterface(const UPoolableWidgetInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoolableWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoolableWidgetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoolableWidgetInterface) \
	virtual ~UPoolableWidgetInterface() = default;


#define FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_PoolableWidgetInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPoolableWidgetInterface(); \
	friend struct Z_Construct_UClass_UPoolableWidgetInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WIDGETRECYCLER_API UClass* Z_Construct_UClass_UPoolableWidgetInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoolableWidgetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/WidgetRecycler"), Z_Construct_UClass_UPoolableWidgetInterface_NoRegister) \
	DECLARE_SERIALIZER(UPoolableWidgetInterface)


#define FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_PoolableWidgetInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_PoolableWidgetInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_PoolableWidgetInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_PoolableWidgetInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPoolableWidgetInterface() {} \
public: \
	typedef UPoolableWidgetInterface UClassType; \
	typedef IPoolableWidgetInterface ThisClass; \
	WIDGETRECYCLER_API static void Execute_OnWidgetRecycled(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_PoolableWidgetInterface_h_10_PROLOG
#define FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_PoolableWidgetInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_PoolableWidgetInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_PoolableWidgetInterface_h_13_CALLBACK_WRAPPERS \
	FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_PoolableWidgetInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoolableWidgetInterface;

// ********** End Interface UPoolableWidgetInterface ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_PoolableWidgetInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
