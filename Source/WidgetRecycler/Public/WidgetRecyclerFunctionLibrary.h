// Copyright (c) 2025 That Strange Creature & Joseph Sierejko. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WidgetRecyclerFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class WIDGETRECYCLER_API UWidgetRecyclerFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext = "WorldContextObject", BlueprintInternalUseOnly="true"), Category="Widget Recycler System")
	static UUserWidget* GetOrCreate(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetType, APlayerController* OwningPlayer);

	template<typename TWidget>
	static TWidget* GetOrCreateWidget(UObject* WorldContextObject, const TSubclassOf<TWidget> WidgetClass, APlayerController* PlayerController)
	{
		return Cast<TWidget>(GetOrCreate(WorldContextObject, WidgetClass, PlayerController));
	}
};
