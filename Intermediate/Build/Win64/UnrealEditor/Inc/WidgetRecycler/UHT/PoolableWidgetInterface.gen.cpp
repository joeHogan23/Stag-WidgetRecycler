// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoolableWidgetInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePoolableWidgetInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_WidgetRecycler();
WIDGETRECYCLER_API UClass* Z_Construct_UClass_UPoolableWidgetInterface();
WIDGETRECYCLER_API UClass* Z_Construct_UClass_UPoolableWidgetInterface_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UPoolableWidgetInterface Function OnWidgetRecycled *******************
void IPoolableWidgetInterface::OnWidgetRecycled()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnWidgetRecycled instead.");
}
static FName NAME_UPoolableWidgetInterface_OnWidgetRecycled = FName(TEXT("OnWidgetRecycled"));
void IPoolableWidgetInterface::Execute_OnWidgetRecycled(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPoolableWidgetInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UPoolableWidgetInterface_OnWidgetRecycled);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IPoolableWidgetInterface*)(O->GetNativeInterfaceAddress(UPoolableWidgetInterface::StaticClass())))
	{
		I->OnWidgetRecycled_Implementation();
	}
}
struct Z_Construct_UFunction_UPoolableWidgetInterface_OnWidgetRecycled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the widget is pulled from the pool and is about to be displayed.\n\x09 *  Use this for data binding, adding to parent, and setting initial visual state. */" },
#endif
		{ "ModuleRelativePath", "Public/PoolableWidgetInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the widget is pulled from the pool and is about to be displayed.\nUse this for data binding, adding to parent, and setting initial visual state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolableWidgetInterface_OnWidgetRecycled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPoolableWidgetInterface, nullptr, "OnWidgetRecycled", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolableWidgetInterface_OnWidgetRecycled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolableWidgetInterface_OnWidgetRecycled_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPoolableWidgetInterface_OnWidgetRecycled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolableWidgetInterface_OnWidgetRecycled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPoolableWidgetInterface::execOnWidgetRecycled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWidgetRecycled_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UPoolableWidgetInterface Function OnWidgetRecycled *********************

// ********** Begin Interface UPoolableWidgetInterface *********************************************
void UPoolableWidgetInterface::StaticRegisterNativesUPoolableWidgetInterface()
{
	UClass* Class = UPoolableWidgetInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnWidgetRecycled", &IPoolableWidgetInterface::execOnWidgetRecycled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPoolableWidgetInterface;
UClass* UPoolableWidgetInterface::GetPrivateStaticClass()
{
	using TClass = UPoolableWidgetInterface;
	if (!Z_Registration_Info_UClass_UPoolableWidgetInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PoolableWidgetInterface"),
			Z_Registration_Info_UClass_UPoolableWidgetInterface.InnerSingleton,
			StaticRegisterNativesUPoolableWidgetInterface,
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
	return Z_Registration_Info_UClass_UPoolableWidgetInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UPoolableWidgetInterface_NoRegister()
{
	return UPoolableWidgetInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPoolableWidgetInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PoolableWidgetInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPoolableWidgetInterface_OnWidgetRecycled, "OnWidgetRecycled" }, // 1135658337
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPoolableWidgetInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPoolableWidgetInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_WidgetRecycler,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolableWidgetInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoolableWidgetInterface_Statics::ClassParams = {
	&UPoolableWidgetInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolableWidgetInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoolableWidgetInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPoolableWidgetInterface()
{
	if (!Z_Registration_Info_UClass_UPoolableWidgetInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoolableWidgetInterface.OuterSingleton, Z_Construct_UClass_UPoolableWidgetInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPoolableWidgetInterface.OuterSingleton;
}
UPoolableWidgetInterface::UPoolableWidgetInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPoolableWidgetInterface);
// ********** End Interface UPoolableWidgetInterface ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_PoolableWidgetInterface_h__Script_WidgetRecycler_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPoolableWidgetInterface, UPoolableWidgetInterface::StaticClass, TEXT("UPoolableWidgetInterface"), &Z_Registration_Info_UClass_UPoolableWidgetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoolableWidgetInterface), 3609541737U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_PoolableWidgetInterface_h__Script_WidgetRecycler_783575021(TEXT("/Script/WidgetRecycler"),
	Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_PoolableWidgetInterface_h__Script_WidgetRecycler_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecycler_Public_PoolableWidgetInterface_h__Script_WidgetRecycler_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
