#include "WidgetRecyclerEditor.h"

#include "FWidgetRecyclerEditorSlateStyleSet.h"

#define LOCTEXT_NAMESPACE "FWidgetRecyclerEditorModule"

void FWidgetRecyclerEditorModule::StartupModule()
{
    FWidgetRecyclerEditorSlateStyleSet::Initialize();
}

void FWidgetRecyclerEditorModule::ShutdownModule()
{
    FWidgetRecyclerEditorSlateStyleSet::Shutdown();
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FWidgetRecyclerEditorModule, WidgetRecyclerEditor)