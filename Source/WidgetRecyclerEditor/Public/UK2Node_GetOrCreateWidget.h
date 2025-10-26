#pragma once

#include "CoreMinimal.h"
#include "K2Node_ConstructObjectFromClass.h"
#include "UK2Node_GetOrCreateWidget.generated.h"

class SGraphPin;
class UEdGraphPin;

UCLASS(MinimalAPI)
class UK2Node_GetOrCreateWidget : public UK2Node_ConstructObjectFromClass
{
public:
	GENERATED_BODY()
	
	UK2Node_GetOrCreateWidget(const FObjectInitializer& ObjectInitializer);

	//Begin UEdGraphNode
	WIDGETRECYCLEREDITOR_API virtual void AllocateDefaultPins() override;
	WIDGETRECYCLEREDITOR_API virtual TSharedPtr<SGraphNode> CreateVisualWidget() override;
	WIDGETRECYCLEREDITOR_API virtual void ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
	WIDGETRECYCLEREDITOR_API virtual FText GetKeywords() const override;
	FSlateIcon GetIconAndTint(FLinearColor& OutColor) const final override;
	//End UEdGraphNode

	//Begin UK2Node
	FName GetCornerIcon() const final override;
	FText GetMenuCategory() const final override;
	FLinearColor GetNodeTitleColor() const final override;
	FLinearColor GetNodeBodyTintColor() const final override;
	//End UK2Node
	
	WIDGETRECYCLEREDITOR_API UEdGraphPin* GetOwningPlayerPin() const;

protected:
	//Begin UK2Node_ConstructObjectForClass
	
	/*The Display Title in search lists and menus*/
	WIDGETRECYCLEREDITOR_API virtual FText GetBaseNodeTitle() const override;
	/*The Node Title when no class is selected (The NONE state)*/
	WIDGETRECYCLEREDITOR_API virtual FText GetDefaultNodeTitle() const override;
	/*The Node Title when a class is selected in the Class Pin*/
	WIDGETRECYCLEREDITOR_API virtual FText GetNodeTitleFormat() const override;
	/*The starting base class that can be created by this K2Node*/
	WIDGETRECYCLEREDITOR_API virtual UClass* GetClassPinBaseClass() const override;
	/*Determine if this is the spawn pin or a default pin*/
	bool IsSpawnVarPin(UEdGraphPin* Pin) const final override;
	//End UK2Node_ConstructObjectForClass
};

