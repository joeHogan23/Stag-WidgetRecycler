// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WidgetRecyclerFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWidgetRecyclerFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_WidgetRecycler();
WIDGETRECYCLER_API UClass* Z_Construct_UClass_UWidgetRecyclerFunctionLibrary();
WIDGETRECYCLER_API UClass* Z_Construct_UClass_UWidgetRecyclerFunctionLibrary_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWidgetRecyclerFunctionLibrary Function GetOrCreate **********************
struct Z_Construct_UFunction_UWidgetRecyclerFunctionLibrary_GetOrCreate_Statics
{
	struct WidgetRecyclerFunctionLibrary_eventGetOrCreate_Parms
	{
		UObject* WorldContextObject;
		TSubclassOf<UUserWidget> WidgetType;
		APlayerController* OwningPlayer;
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Widget Recycler System" },
		{ "ModuleRelativePath", "Public/WidgetRecyclerFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetRecyclerFunctionLibrary_GetOrCreate_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetRecyclerFunctionLibrary_eventGetOrCreate_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UWidgetRecyclerFunctionLibrary_GetOrCreate_Statics::NewProp_WidgetType = { "WidgetType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetRecyclerFunctionLibrary_eventGetOrCreate_Parms, WidgetType), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetRecyclerFunctionLibrary_GetOrCreate_Statics::NewProp_OwningPlayer = { "OwningPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetRecyclerFunctionLibrary_eventGetOrCreate_Parms, OwningPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetRecyclerFunctionLibrary_GetOrCreate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetRecyclerFunctionLibrary_eventGetOrCreate_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetRecyclerFunctionLibrary_GetOrCreate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetRecyclerFunctionLibrary_GetOrCreate_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetRecyclerFunctionLibrary_GetOrCreate_Statics::NewProp_WidgetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetRecyclerFunctionLibrary_GetOrCreate_Statics::NewProp_OwningPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetRecyclerFunctionLibrary_GetOrCreate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetRecyclerFunctionLibrary_GetOrCreate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetRecyclerFunctionLibrary_GetOrCreate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWidgetRecyclerFunctionLibrary, nullptr, "GetOrCreate", Z_Construct_UFunction_UWidgetRecyclerFunctionLibrary_GetOrCreate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetRecyclerFunctionLibrary_GetOrCreate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetRecyclerFunctionLibrary_GetOrCreate_Statics::WidgetRecyclerFunctionLibrary_eventGetOrCreate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetRecyclerFunctionLibrary_GetOrCreate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetRecyclerFunctionLibrary_GetOrCreate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UWidgetRecyclerFunctionLibrary_GetOrCreate_Statics::WidgetRecyclerFunctionLibrary_eventGetOrCreate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetRecyclerFunctionLibrary_GetOrCreate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetRecyclerFunctionLibrary_GetOrCreate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetRecyclerFunctionLibrary::execGetOrCreate)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UClass,Z_Param_WidgetType);
	P_GET_OBJECT(APlayerController,Z_Param_OwningPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=UWidgetRecyclerFunctionLibrary::GetOrCreate(Z_Param_WorldContextObject,Z_Param_WidgetType,Z_Param_OwningPlayer);
	P_NATIVE_END;
}
// ********** End Class UWidgetRecyclerFunctionLibrary Function GetOrCreate ************************

// ********** Begin Class UWidgetRecyclerFunctionLibrary *******************************************
void UWidgetRecyclerFunctionLibrary::StaticRegisterNativesUWidgetRecyclerFunctionLibrary()
{
	UClass* Class = UWidgetRecyclerFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOrCreate", &UWidgetRecyclerFunctionLibrary::execGetOrCreate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWidgetRecyclerFunctionLibrary;
UClass* UWidgetRecyclerFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UWidgetRecyclerFunctionLibrary;
	if (!Z_Registration_Info_UClass_UWidgetRecyclerFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WidgetRecyclerFunctionLibrary"),
			Z_Registration_Info_UClass_UWidgetRecyclerFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUWidgetRecyclerFunctionLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UWidgetRecyclerFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UWidgetRecyclerFunctionLibrary_NoRegister()
{
	return UWidgetRecyclerFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWidgetRecyclerFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WidgetRecyclerFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/WidgetRecyclerFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetRecyclerFunctionLibrary_GetOrCreate, "GetOrCreate" }, // 4060833308
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetRecyclerFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWidgetRecyclerFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_WidgetRecycler,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetRecyclerFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetRecyclerFunctionLibrary_Statics::ClassParams = {
	&UWidgetRecyclerFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetRecyclerFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetRecyclerFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetRecyclerFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UWidgetRecyclerFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetRecyclerFunctionLibrary.OuterSingleton, Z_Construct_UClass_UWidgetRecyclerFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetRecyclerFunctionLibrary.OuterSingleton;
}
UWidgetRecyclerFunctionLibrary::UWidgetRecyclerFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetRecyclerFunctionLibrary);
UWidgetRecyclerFunctionLibrary::~UWidgetRecyclerFunctionLibrary() {}
// ********** End Class UWidgetRecyclerFunctionLibrary *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_WidgetRecyclerFunctionLibrary_h__Script_WidgetRecycler_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetRecyclerFunctionLibrary, UWidgetRecyclerFunctionLibrary::StaticClass, TEXT("UWidgetRecyclerFunctionLibrary"), &Z_Registration_Info_UClass_UWidgetRecyclerFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetRecyclerFunctionLibrary), 1516018478U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_WidgetRecyclerFunctionLibrary_h__Script_WidgetRecycler_2072904217(TEXT("/Script/WidgetRecycler"),
	Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_WidgetRecyclerFunctionLibrary_h__Script_WidgetRecycler_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_WidgetRecyclerFunctionLibrary_h__Script_WidgetRecycler_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
