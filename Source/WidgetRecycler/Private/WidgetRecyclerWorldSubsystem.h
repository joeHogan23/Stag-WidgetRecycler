// Copyright (c) 2025 That Strange Creature & Joseph Sierejko. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Subsystems/WorldSubsystem.h"
#include "WidgetRecyclerWorldSubsystem.generated.h"

/**
 * 
 */

USTRUCT(MinimalAPI)
struct FWidgetPoolEntry
{
	GENERATED_BODY()

	FWidgetPoolEntry() = default;
	FWidgetPoolEntry(UUserWidget* InWidgetResource) : WidgetResource(InWidgetResource) {}

	bool IsValid() const;
	bool IsActive() const;

	UUserWidget* GetWidgetResource() const;

	bool operator==(const FWidgetPoolEntry&) const;
	bool operator!=(const FWidgetPoolEntry&) const;
	
private:
	TWeakObjectPtr<UUserWidget> WidgetResource;
};

USTRUCT(MinimalAPI)
struct FWidgetPoolCollection
{
	GENERATED_BODY()

	void CreateEntry(UUserWidget* InWidgetResource);
	
	UUserWidget* FindInactiveEntry() const;
	void PurgeInvalidEntries();
	
	int32 GetNumEntries() const;
	bool IsEmpty() const;
	
private:
	TArray<FWidgetPoolEntry> Collection;
};



UCLASS(MinimalAPI, NotBlueprintType, NotBlueprintable)
class UWidgetRecyclerWorldSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	WIDGETRECYCLER_API UWidgetRecyclerWorldSubsystem();
	
	WIDGETRECYCLER_API static UWidgetRecyclerWorldSubsystem* Get(const UObject* WorldContextObject);
	
	WIDGETRECYCLER_API virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	WIDGETRECYCLER_API virtual void Deinitialize() override;

	//Don't create on a Dedicated server
	bool ShouldCreateSubsystem(UObject* Outer) const final override;

	WIDGETRECYCLER_API UUserWidget* GetOrCreate(const TSubclassOf<UUserWidget> WidgetType, APlayerController* OwningPlayer) const;
	
protected:
	//Called whenever a GC cycle has finished, and we need to find all stale entries
	UFUNCTION()
	WIDGETRECYCLER_API void HandleClearInvalidEntries();


private:
	WIDGETRECYCLER_API UUserWidget* CreateWidgetForExistingCollection_Internal(FWidgetPoolCollection* Collection, const TSubclassOf<UUserWidget> WidgetType, APlayerController* OwningPlayer) const;
	WIDGETRECYCLER_API UUserWidget* CreateWidgetInNewCollection_Internal(const TSubclassOf<UUserWidget> WidgetType, APlayerController* OwningPlayer) const;

	//Collection of Collections, mapped out by the specific class they belong to. Needs to be an exact class match, so a base class and a child class would have separate collection
	//This is to prevent returning the wrong class in the inheritance chain
	TSharedRef<TMap<TSubclassOf<UUserWidget>, FWidgetPoolCollection>> WidgetPoolCache;
};
