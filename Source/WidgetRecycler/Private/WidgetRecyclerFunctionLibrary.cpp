// Copyright (c) 2025 That Strange Creature & Joseph Sierejko. All rights reserved.


#include "WidgetRecyclerFunctionLibrary.h"

#include "WidgetRecyclerWorldSubsystem.h"

UUserWidget* UWidgetRecyclerFunctionLibrary::GetOrCreate(UObject* WorldContextObject, TSubclassOf<UUserWidget> WidgetType, APlayerController* OwningPlayer)
{
	if (const UWidgetRecyclerWorldSubsystem* WidgetRecyclerWorldSubsystem = UWidgetRecyclerWorldSubsystem::Get(WorldContextObject))
	{
		return WidgetRecyclerWorldSubsystem->GetOrCreate(WidgetType, OwningPlayer);
	}
	return nullptr;
}
