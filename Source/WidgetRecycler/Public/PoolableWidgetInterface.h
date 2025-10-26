// Copyright (c) 2025 That Strange Creature & Joseph Sierejko. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PoolableWidgetInterface.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UPoolableWidgetInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class IPoolableWidgetInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	/** Called when the widget is pulled from the pool and is about to be displayed.
	 *  Use this for data binding, adding to parent, and setting initial visual state. */
	UFUNCTION(BlueprintNativeEvent)
	WIDGETRECYCLER_API void OnWidgetRecycled();
};
