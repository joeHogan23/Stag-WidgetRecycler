// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WidgetRecyclerFunctionLibrary.h"

#ifdef WIDGETRECYCLER_WidgetRecyclerFunctionLibrary_generated_h
#error "WidgetRecyclerFunctionLibrary.generated.h already included, missing '#pragma once' in WidgetRecyclerFunctionLibrary.h"
#endif
#define WIDGETRECYCLER_WidgetRecyclerFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APlayerController;
class UObject;
class UUserWidget;

// ********** Begin Class UWidgetRecyclerFunctionLibrary *******************************************
#define FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_WidgetRecyclerFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOrCreate);


WIDGETRECYCLER_API UClass* Z_Construct_UClass_UWidgetRecyclerFunctionLibrary_NoRegister();

#define FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_WidgetRecyclerFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetRecyclerFunctionLibrary(); \
	friend struct Z_Construct_UClass_UWidgetRecyclerFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WIDGETRECYCLER_API UClass* Z_Construct_UClass_UWidgetRecyclerFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UWidgetRecyclerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WidgetRecycler"), Z_Construct_UClass_UWidgetRecyclerFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UWidgetRecyclerFunctionLibrary)


#define FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_WidgetRecyclerFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetRecyclerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWidgetRecyclerFunctionLibrary(UWidgetRecyclerFunctionLibrary&&) = delete; \
	UWidgetRecyclerFunctionLibrary(const UWidgetRecyclerFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetRecyclerFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetRecyclerFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetRecyclerFunctionLibrary) \
	NO_API virtual ~UWidgetRecyclerFunctionLibrary();


#define FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_WidgetRecyclerFunctionLibrary_h_12_PROLOG
#define FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_WidgetRecyclerFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_WidgetRecyclerFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_WidgetRecyclerFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_WidgetRecyclerFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWidgetRecyclerFunctionLibrary;

// ********** End Class UWidgetRecyclerFunctionLibrary *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_WidgetRecyclerFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
