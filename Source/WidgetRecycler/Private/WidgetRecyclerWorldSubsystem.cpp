// Copyright (c) 2025 That Strange Creature & Joseph Sierejko. All rights reserved.

#include "WidgetRecyclerWorldSubsystem.h"

#include "PoolableWidgetInterface.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetBlueprintLibrary.h"

bool FWidgetPoolEntry::IsValid() const
{
	return WidgetResource.IsValid(); 
}

bool FWidgetPoolEntry::IsActive() const
{
	return IsValid() && (WidgetResource->IsConstructed() || WidgetResource->GetParent());
}

UUserWidget* FWidgetPoolEntry::GetWidgetResource() const
{
	return WidgetResource.Get();
}

bool FWidgetPoolEntry::operator==(const FWidgetPoolEntry& OtherEntry) const
{
	return WidgetResource == OtherEntry.WidgetResource;
}

bool FWidgetPoolEntry::operator!=(const FWidgetPoolEntry& OtherEntry) const
{
	return WidgetResource != OtherEntry.WidgetResource;
}

void FWidgetPoolCollection::CreateEntry(UUserWidget* InWidgetResource)
{
	Collection.AddUnique({InWidgetResource});
}

UUserWidget* FWidgetPoolCollection::FindInactiveEntry() const
{
	if (const FWidgetPoolEntry* FoundEntry = Collection.FindByPredicate([](const FWidgetPoolEntry& Entry){	return !Entry.IsActive(); }))
	{
		return FoundEntry->GetWidgetResource();
	}
	return nullptr;
}

void FWidgetPoolCollection::PurgeInvalidEntries()
{
	for (int32 i = Collection.Num() - 1; i >= 0; i--)
	{
		if (!Collection[i].IsValid())
		{
			Collection.RemoveAt(i);
		}
	}
}

int32 FWidgetPoolCollection::GetNumEntries() const
{
	return Collection.Num();
}

bool FWidgetPoolCollection::IsEmpty() const
{
	return Collection.IsEmpty();
}

UWidgetRecyclerWorldSubsystem::UWidgetRecyclerWorldSubsystem() : WidgetPoolCache(MakeShared<TMap<TSubclassOf<UUserWidget>, FWidgetPoolCollection>>()){}

UWidgetRecyclerWorldSubsystem* UWidgetRecyclerWorldSubsystem::Get(const UObject* WorldContextObject)
{
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::Assert))
	{
		return World->GetSubsystem<UWidgetRecyclerWorldSubsystem>();
	}
	return nullptr;
}

void UWidgetRecyclerWorldSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	
	if (!FCoreUObjectDelegates::GetPostPurgeGarbageDelegate().IsBoundToObject(this))
	{
		FCoreUObjectDelegates::GetPostPurgeGarbageDelegate().AddUObject(this, &ThisClass::HandleClearInvalidEntries);
	}
}

void UWidgetRecyclerWorldSubsystem::Deinitialize()
{
	Super::Deinitialize();

	WidgetPoolCache->Empty();
	FCoreUObjectDelegates::GetPostPurgeGarbageDelegate().RemoveAll(this);
}

//We keep a cache of both Active and Inactive for easier tracking habits - allows us to keep a connection between the Widget and the Recycler until widgets are GC'd.
UUserWidget* UWidgetRecyclerWorldSubsystem::GetOrCreate(const TSubclassOf<UUserWidget> WidgetType, APlayerController* OwningPlayer) const
{
	if (WidgetType)
	{
		//Found an existing Collection of @WidgetType
		if (FWidgetPoolCollection* Collection = WidgetPoolCache->Find(WidgetType))
		{
			if (UUserWidget* InactiveWidget = Collection->FindInactiveEntry())
			{
				if (InactiveWidget->Implements<UPoolableWidgetInterface>())
				{
					IPoolableWidgetInterface::Execute_OnWidgetRecycled(InactiveWidget);
				}
				return InactiveWidget;
			}

			return CreateWidgetForExistingCollection_Internal(Collection, WidgetType, OwningPlayer);
			
		}
		return CreateWidgetInNewCollection_Internal(WidgetType, OwningPlayer);
	}
	return nullptr;
}

void UWidgetRecyclerWorldSubsystem::HandleClearInvalidEntries()
{
}

UUserWidget* UWidgetRecyclerWorldSubsystem::CreateWidgetInNewCollection_Internal(const TSubclassOf<UUserWidget> WidgetType, APlayerController* OwningPlayer) const
{
	UUserWidget* NewWidget = UWidgetBlueprintLibrary::Create(GetWorld(), WidgetType, OwningPlayer);

	FWidgetPoolCollection NewCollection;
	NewCollection.CreateEntry(NewWidget);
	WidgetPoolCache->Add(WidgetType, NewCollection);

	return NewWidget;
}

UUserWidget* UWidgetRecyclerWorldSubsystem::CreateWidgetForExistingCollection_Internal(FWidgetPoolCollection* Collection, const TSubclassOf<UUserWidget> WidgetType, APlayerController*
                                                                                       OwningPlayer) const
{
	check(Collection)
	UUserWidget* NewWidget = UWidgetBlueprintLibrary::Create(GetWorld(), WidgetType, OwningPlayer);

	Collection->CreateEntry(NewWidget);
	return NewWidget;
}

bool UWidgetRecyclerWorldSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	if (const UWorld* World = GEngine->GetWorldFromContextObject(Outer, EGetWorldErrorMode::ReturnNull))
	{
		return World->GetNetMode() != NM_DedicatedServer;
	}
	return false;
}
