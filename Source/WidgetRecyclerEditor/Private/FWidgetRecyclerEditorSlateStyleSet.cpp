// Copyright (c) 2025 That Strange Creature & Joseph Sierejko. All rights reserved.


#include "FWidgetRecyclerEditorSlateStyleSet.h"

#include "Styling/SlateStyleRegistry.h"

TSharedPtr<FSlateStyleSet> FWidgetRecyclerEditorSlateStyleSet::Instance = nullptr;

#define IMAGE_SET(RelativePath, StyleSet, ...) FSlateImageBrush(StyleSet->RootToContentDir(RelativePath, TEXT(".png")), __VA_ARGS__)

TSharedRef<FSlateStyleSet> FWidgetRecyclerEditorSlateStyleSet::Create()
{
	TSharedRef<FSlateStyleSet> SlateStyleSet = MakeShareable(new FSlateStyleSet(GetStyleSetName()));
	FString Path = FPaths::ProjectPluginsDir() / TEXT("WidgetRecycler") / TEXT("Resources");
	SlateStyleSet->SetContentRoot(Path);

	SlateStyleSet->Set("WidgetRecycler.CornerIcon", new IMAGE_SET(TEXT("Icon32"), SlateStyleSet, FVector2D(32, 32)));
	SlateStyleSet->Set("WidgetRecycler.PrimaryIcon", new IMAGE_SET(TEXT("TSCLogo16"), SlateStyleSet, FVector2D(16, 16)));
	return SlateStyleSet;
}

#undef IMAGE_SET

void FWidgetRecyclerEditorSlateStyleSet::Initialize()
{
	if (!Instance.IsValid())
	{
		Instance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*Instance);
	}
}

void FWidgetRecyclerEditorSlateStyleSet::Shutdown()
{
	if(Instance.IsValid())
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(*Instance);
		ensure(Instance.IsUnique());
		Instance.Reset();
	}
}

const ISlateStyle& FWidgetRecyclerEditorSlateStyleSet::Get()
{
	if (!Instance.IsValid())
	{
		Instance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*Instance);
	}
	return *Instance;
}

FName FWidgetRecyclerEditorSlateStyleSet::GetStyleSetName()
{
	return TEXT("WidgetRecyclerStyleSet");
}

const FSlateBrush* FWidgetRecyclerEditorSlateStyleSet::GetBrush(FName PropertyName, const ANSICHAR* Specifier)
{
	return GetInstance()->GetBrush(PropertyName, Specifier);
}

TSharedPtr<FSlateStyleSet> FWidgetRecyclerEditorSlateStyleSet::GetInstance()
{
	Initialize();
	return Instance;
}

void FWidgetRecyclerEditorSlateStyleSet::ReloadTextures()
{
	if(FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}