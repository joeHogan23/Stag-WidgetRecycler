// Copyright (c) 2025 That Strange Creature & Joseph Sierejko. All rights reserved.


#include "SGetOrCreateGraphPinClass.h"

#include "ClassViewerModule.h"
#include "PoolableWidgetInterface.h"
#include "SlateOptMacros.h"
#include "Blueprint/UserWidget.h"
#include "Editor/ClassViewer/Private/UnloadedBlueprintData.h"

//Ensures classes in filter implement @IPoolableWidgetInterface
class WIDGETRECYCLEREDITOR_API FGetOrCreateWidgetClassViewFilter : public IClassViewerFilter
{
	bool IsClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const UClass* InClass, TSharedRef<FClassViewerFilterFuncs> InFilterFunctions) final override
	{
		check(InClass)
		check(InClass->GetOutermost())
		return InClass->IsInA(UUserWidget::StaticClass()) && InClass->ImplementsInterface(UPoolableWidgetInterface::StaticClass());
	}

	bool IsUnloadedClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const TSharedRef<const IUnloadedBlueprintData> InUnloadedClassData, TSharedRef<FClassViewerFilterFuncs> InFilterFunctions) final override
	{
		return InUnloadedClassData->IsA(UUserWidget::StaticClass()) && InUnloadedClassData->ImplementsInterface(UPoolableWidgetInterface::StaticClass());
	}
};


void SGetOrCreateGraphPinClass::Construct(const FArguments& InArgs, UEdGraphPin* GraphPin)
{
	bAllowAbstractClasses = false;
	SGraphPinClass::Construct(SGraphPinClass::FArguments(), GraphPin);
}

FOnClicked SGetOrCreateGraphPinClass::GetOnUseButtonDelegate()
{
	return FOnClicked::CreateSP(this, &SGetOrCreateGraphPinClass::OnClickUse);
}

TSharedRef<SWidget> SGetOrCreateGraphPinClass::GenerateAssetPicker()
{
	FClassViewerModule& ViewerModule = FModuleManager::LoadModuleChecked<FClassViewerModule>("ClassViewer");
	FClassViewerInitializationOptions ClassViewerOptions;
	ClassViewerOptions.Mode = EClassViewerMode::ClassPicker;

	const TSharedPtr<FGetOrCreateWidgetClassViewFilter> ClassViewFilter = MakeShareable(new FGetOrCreateWidgetClassViewFilter);
	ClassViewerOptions.ClassFilters.Add(ClassViewFilter.ToSharedRef());

	return SNew(SBox)
		.WidthOverride(400)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.FillHeight(1)
			.MaxHeight(800)
			[
				SNew(SBorder)
				.Padding(4)
				.BorderImage(FAppStyle::GetBrush("ToolPanel.GroupBorder"))
				[
					ViewerModule.CreateClassViewer(ClassViewerOptions, FOnClassPicked::CreateSP(this, &SGetOrCreateGraphPinClass::OnPickedNewClass))
				]
			]
		];
}
