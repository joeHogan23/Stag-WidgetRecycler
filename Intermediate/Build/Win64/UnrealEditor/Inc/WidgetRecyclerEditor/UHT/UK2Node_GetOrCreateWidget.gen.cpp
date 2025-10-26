// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UK2Node_GetOrCreateWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUK2Node_GetOrCreateWidget() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_ConstructObjectFromClass();
UPackage* Z_Construct_UPackage__Script_WidgetRecyclerEditor();
WIDGETRECYCLEREDITOR_API UClass* Z_Construct_UClass_UK2Node_GetOrCreateWidget();
WIDGETRECYCLEREDITOR_API UClass* Z_Construct_UClass_UK2Node_GetOrCreateWidget_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UK2Node_GetOrCreateWidget ************************************************
void UK2Node_GetOrCreateWidget::StaticRegisterNativesUK2Node_GetOrCreateWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UK2Node_GetOrCreateWidget;
UClass* UK2Node_GetOrCreateWidget::GetPrivateStaticClass()
{
	using TClass = UK2Node_GetOrCreateWidget;
	if (!Z_Registration_Info_UClass_UK2Node_GetOrCreateWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("K2Node_GetOrCreateWidget"),
			Z_Registration_Info_UClass_UK2Node_GetOrCreateWidget.InnerSingleton,
			StaticRegisterNativesUK2Node_GetOrCreateWidget,
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
	return Z_Registration_Info_UClass_UK2Node_GetOrCreateWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UK2Node_GetOrCreateWidget_NoRegister()
{
	return UK2Node_GetOrCreateWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UK2Node_GetOrCreateWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UK2Node_GetOrCreateWidget.h" },
		{ "ModuleRelativePath", "Public/UK2Node_GetOrCreateWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetOrCreateWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UK2Node_GetOrCreateWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node_ConstructObjectFromClass,
	(UObject* (*)())Z_Construct_UPackage__Script_WidgetRecyclerEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetOrCreateWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetOrCreateWidget_Statics::ClassParams = {
	&UK2Node_GetOrCreateWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetOrCreateWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_GetOrCreateWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UK2Node_GetOrCreateWidget()
{
	if (!Z_Registration_Info_UClass_UK2Node_GetOrCreateWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_GetOrCreateWidget.OuterSingleton, Z_Construct_UClass_UK2Node_GetOrCreateWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_GetOrCreateWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetOrCreateWidget);
UK2Node_GetOrCreateWidget::~UK2Node_GetOrCreateWidget() {}
// ********** End Class UK2Node_GetOrCreateWidget **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecyclerEditor_Public_UK2Node_GetOrCreateWidget_h__Script_WidgetRecyclerEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_GetOrCreateWidget, UK2Node_GetOrCreateWidget::StaticClass, TEXT("UK2Node_GetOrCreateWidget"), &Z_Registration_Info_UClass_UK2Node_GetOrCreateWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_GetOrCreateWidget), 1009872870U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecyclerEditor_Public_UK2Node_GetOrCreateWidget_h__Script_WidgetRecyclerEditor_1798625900(TEXT("/Script/WidgetRecyclerEditor"),
	Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecyclerEditor_Public_UK2Node_GetOrCreateWidget_h__Script_WidgetRecyclerEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_WidgetRecycler_Source_WidgetRecyclerEditor_Public_UK2Node_GetOrCreateWidget_h__Script_WidgetRecyclerEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
