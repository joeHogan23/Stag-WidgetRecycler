// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WidgetRecyclerWorldSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWidgetRecyclerWorldSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_WidgetRecycler();
WIDGETRECYCLER_API UClass* Z_Construct_UClass_UWidgetRecyclerWorldSubsystem();
WIDGETRECYCLER_API UClass* Z_Construct_UClass_UWidgetRecyclerWorldSubsystem_NoRegister();
WIDGETRECYCLER_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetPoolCollection();
WIDGETRECYCLER_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetPoolEntry();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWidgetPoolEntry **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWidgetPoolEntry;
class UScriptStruct* FWidgetPoolEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWidgetPoolEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWidgetPoolEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetPoolEntry, (UObject*)Z_Construct_UPackage__Script_WidgetRecycler(), TEXT("WidgetPoolEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FWidgetPoolEntry.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FWidgetPoolEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Private/WidgetRecyclerWorldSubsystem.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetPoolEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetPoolEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WidgetRecycler,
	nullptr,
	&NewStructOps,
	"WidgetPoolEntry",
	nullptr,
	0,
	sizeof(FWidgetPoolEntry),
	alignof(FWidgetPoolEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetPoolEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetPoolEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWidgetPoolEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FWidgetPoolEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWidgetPoolEntry.InnerSingleton, Z_Construct_UScriptStruct_FWidgetPoolEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWidgetPoolEntry.InnerSingleton;
}
// ********** End ScriptStruct FWidgetPoolEntry ****************************************************

// ********** Begin ScriptStruct FWidgetPoolCollection *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWidgetPoolCollection;
class UScriptStruct* FWidgetPoolCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWidgetPoolCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWidgetPoolCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetPoolCollection, (UObject*)Z_Construct_UPackage__Script_WidgetRecycler(), TEXT("WidgetPoolCollection"));
	}
	return Z_Registration_Info_UScriptStruct_FWidgetPoolCollection.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FWidgetPoolCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/WidgetRecyclerWorldSubsystem.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetPoolCollection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetPoolCollection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_WidgetRecycler,
	nullptr,
	&NewStructOps,
	"WidgetPoolCollection",
	nullptr,
	0,
	sizeof(FWidgetPoolCollection),
	alignof(FWidgetPoolCollection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetPoolCollection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetPoolCollection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWidgetPoolCollection()
{
	if (!Z_Registration_Info_UScriptStruct_FWidgetPoolCollection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWidgetPoolCollection.InnerSingleton, Z_Construct_UScriptStruct_FWidgetPoolCollection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWidgetPoolCollection.InnerSingleton;
}
// ********** End ScriptStruct FWidgetPoolCollection ***********************************************

// ********** Begin Class UWidgetRecyclerWorldSubsystem Function HandleClearInvalidEntries *********
struct Z_Construct_UFunction_UWidgetRecyclerWorldSubsystem_HandleClearInvalidEntries_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Called whenever a GC cycle has finished, and we need to find all stale entries\n" },
#endif
		{ "ModuleRelativePath", "Private/WidgetRecyclerWorldSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called whenever a GC cycle has finished, and we need to find all stale entries" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetRecyclerWorldSubsystem_HandleClearInvalidEntries_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWidgetRecyclerWorldSubsystem, nullptr, "HandleClearInvalidEntries", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetRecyclerWorldSubsystem_HandleClearInvalidEntries_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetRecyclerWorldSubsystem_HandleClearInvalidEntries_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWidgetRecyclerWorldSubsystem_HandleClearInvalidEntries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetRecyclerWorldSubsystem_HandleClearInvalidEntries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetRecyclerWorldSubsystem::execHandleClearInvalidEntries)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleClearInvalidEntries();
	P_NATIVE_END;
}
// ********** End Class UWidgetRecyclerWorldSubsystem Function HandleClearInvalidEntries ***********

// ********** Begin Class UWidgetRecyclerWorldSubsystem ********************************************
void UWidgetRecyclerWorldSubsystem::StaticRegisterNativesUWidgetRecyclerWorldSubsystem()
{
	UClass* Class = UWidgetRecyclerWorldSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleClearInvalidEntries", &UWidgetRecyclerWorldSubsystem::execHandleClearInvalidEntries },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWidgetRecyclerWorldSubsystem;
UClass* UWidgetRecyclerWorldSubsystem::GetPrivateStaticClass()
{
	using TClass = UWidgetRecyclerWorldSubsystem;
	if (!Z_Registration_Info_UClass_UWidgetRecyclerWorldSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WidgetRecyclerWorldSubsystem"),
			Z_Registration_Info_UClass_UWidgetRecyclerWorldSubsystem.InnerSingleton,
			StaticRegisterNativesUWidgetRecyclerWorldSubsystem,
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
	return Z_Registration_Info_UClass_UWidgetRecyclerWorldSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UWidgetRecyclerWorldSubsystem_NoRegister()
{
	return UWidgetRecyclerWorldSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWidgetRecyclerWorldSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WidgetRecyclerWorldSubsystem.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/WidgetRecyclerWorldSubsystem.h" },
		{ "NotBlueprintType", "true" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetRecyclerWorldSubsystem_HandleClearInvalidEntries, "HandleClearInvalidEntries" }, // 318123728
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetRecyclerWorldSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWidgetRecyclerWorldSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_WidgetRecycler,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetRecyclerWorldSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetRecyclerWorldSubsystem_Statics::ClassParams = {
	&UWidgetRecyclerWorldSubsystem::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetRecyclerWorldSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetRecyclerWorldSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetRecyclerWorldSubsystem()
{
	if (!Z_Registration_Info_UClass_UWidgetRecyclerWorldSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetRecyclerWorldSubsystem.OuterSingleton, Z_Construct_UClass_UWidgetRecyclerWorldSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetRecyclerWorldSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetRecyclerWorldSubsystem);
UWidgetRecyclerWorldSubsystem::~UWidgetRecyclerWorldSubsystem() {}
// ********** End Class UWidgetRecyclerWorldSubsystem **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Private_WidgetRecyclerWorldSubsystem_h__Script_WidgetRecycler_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWidgetPoolEntry::StaticStruct, Z_Construct_UScriptStruct_FWidgetPoolEntry_Statics::NewStructOps, TEXT("WidgetPoolEntry"), &Z_Registration_Info_UScriptStruct_FWidgetPoolEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetPoolEntry), 2950438534U) },
		{ FWidgetPoolCollection::StaticStruct, Z_Construct_UScriptStruct_FWidgetPoolCollection_Statics::NewStructOps, TEXT("WidgetPoolCollection"), &Z_Registration_Info_UScriptStruct_FWidgetPoolCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetPoolCollection), 66276901U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetRecyclerWorldSubsystem, UWidgetRecyclerWorldSubsystem::StaticClass, TEXT("UWidgetRecyclerWorldSubsystem"), &Z_Registration_Info_UClass_UWidgetRecyclerWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetRecyclerWorldSubsystem), 3179976211U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Private_WidgetRecyclerWorldSubsystem_h__Script_WidgetRecycler_3670966771(TEXT("/Script/WidgetRecycler"),
	Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Private_WidgetRecyclerWorldSubsystem_h__Script_WidgetRecycler_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Private_WidgetRecyclerWorldSubsystem_h__Script_WidgetRecycler_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Private_WidgetRecyclerWorldSubsystem_h__Script_WidgetRecycler_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Private_WidgetRecyclerWorldSubsystem_h__Script_WidgetRecycler_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
