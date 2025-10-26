// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

WIDGETRECYCLER_API DECLARE_LOG_CATEGORY_EXTERN(LogWidgetRecycler, Log, All);

class FWidgetRecyclerModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
