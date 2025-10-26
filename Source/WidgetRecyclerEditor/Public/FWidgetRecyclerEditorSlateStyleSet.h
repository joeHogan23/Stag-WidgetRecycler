// Copyright (c) 2025 That Strange Creature & Joseph Sierejko. All rights reserved.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class WIDGETRECYCLEREDITOR_API FWidgetRecyclerEditorSlateStyleSet
{
public:
	static TSharedRef<FSlateStyleSet> Create();

	static const ISlateStyle& Get();

	static void Initialize();
	static void Shutdown();

	static void ReloadTextures();

	static FName GetStyleSetName();

	static const FSlateBrush* GetBrush(FName PropertyName, const ANSICHAR* Specifier = nullptr);


private:
	static TSharedPtr<FSlateStyleSet> GetInstance();
	static TSharedPtr<FSlateStyleSet> Instance;
};
