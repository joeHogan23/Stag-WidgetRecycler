// Copyright (c) 2025 That Strange Creature & Joseph Sierejko. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "KismetPins/SGraphPinClass.h"
#include "Widgets/SCompoundWidget.h"

/**
 * 
 */
class WIDGETRECYCLEREDITOR_API SGetOrCreateGraphPinClass : public SGraphPinClass
{
public:
	SLATE_BEGIN_ARGS(SGetOrCreateGraphPinClass){}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, UEdGraphPin* GraphPin);

protected:
	virtual FOnClicked GetOnUseButtonDelegate() override;
	virtual TSharedRef<SWidget> GenerateAssetPicker() override;
};