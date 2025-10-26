// Copyright (c) 2025 That Strange Creature & Joseph Sierejko. All rights reserved.

#include "UK2Node_GetOrCreateWidget.h"

#include "Blueprint/UserWidget.h"
#include "K2Node_CallFunction.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/Breakpoint.h"
#include "Kismet2/KismetDebugUtilities.h"
#include "KismetCompiler.h"
#include "KismetNodes/SGraphNodeK2Default.h"

#include "FWidgetRecyclerEditorSlateStyleSet.h"
#include "SGetOrCreateGraphPinClass.h"
#include "WidgetRecyclerFunctionLibrary.h"

namespace FWidgetRecycler
{
	namespace Style
	{
		const FName BreakpointValid(TEXT("Kismet.DebuggerOverlay.Breakpoint.EnabledAndValid"));
		const FName BreakpointInvalid(TEXT("Kismet.DebuggerOverlay.Breakpoint.EnabledAndInvalid"));
		const FName BreakpointDisabled(TEXT("Kismet.DebuggerOverlay.Breakpoint.Disabled"));

		const FName InstructionPointerBreakpoint(TEXT("Kismet.DebuggerOverlay.InstructionPointerBreakpoint"));
		const FName InstructionPointer(TEXT("Kismet.DebuggerOverlay.InstructionPointer"));

		constexpr FLinearColor NodeTitleColor(255, 58, 40,255);
		constexpr FLinearColor NodeBodyColor(0,0,0,255);

	}

	namespace Parms
	{
		const FName OwningPlayer(TEXT("OwningPlayer"));
		const FName WorldContextObject(TEXT("WorldContextObject"));
		const FName WidgetType(TEXT("WidgetType"));
		const FName CornerIcon(TEXT("WidgetRecycler.CornerIcon"));
		const FName PrimaryIcon(TEXT("WidgetRecycler.PrimaryIcon"));
	}

#define LOCTEXT_NAMESPACE "WidgetRecycler"
	namespace Loc
	{
		const FText BaseNodeTitle(LOCTEXT("GetOrCreate+Base", "Get or Create Widget"));
		const FText DefaultNodeTitle(LOCTEXT("GetOrCreate_Default", "Get Or Create (No Class Selected)"));
		const FText NodeTitleFormat(LOCTEXT("GetOrCreate_Formatted", "Get or Create {ClassName}"));
		const FText MenuCategory(LOCTEXT("MenuCategory", "Widget Recycler"));
		const FText OwningPlayerTooltip(LOCTEXT("OwningPlayerTooltip", "The Player that will own the created Widget"));
		const FText NodeTooltip(LOCTEXT("NodeTooltip", "Returns a new or recycled widget. Search for a previous widget of type from a Cache. If all are in use or there is no entry of the Widget Class create a new one. Cache of inactive widgets are cleared every GC cycle"));
	}
#undef LOCTEXT_NAMESPACE
}

class SGetOrCreateGraphNode : public SGraphNodeK2Default
{
public:
	//Create the class pin and regenerate when needed
	TSharedPtr<SGraphPin> CreatePinWidget(UEdGraphPin* Pin) const final override
	{
		UEdGraphPin* ClassPin = CastChecked<UK2Node_GetOrCreateWidget>(GraphNode)->GetClassPin();
		if (ClassPin == Pin && (!ClassPin->bHidden || ClassPin->LinkedTo.Num() > 0))
		{
			TSharedPtr<SGetOrCreateGraphPinClass> GetOrCreatePin(SNew(SGetOrCreateGraphPinClass, ClassPin));
			checkf(GetOrCreatePin, TEXT("SGetOrCreateGraphNode | Invalid GraphPinClass"))
			return GetOrCreatePin;
		}

		return SGraphNodeK2Default::CreatePinWidget(Pin);
	}
	
	void UpdateGraphNode() final override
	{
		SGraphNode::UpdateGraphNode();
	}
	
	void GetOverlayBrushes(bool bSelected, const FVector2f& WidgetSize, TArray<FOverlayBrushInfo>& Brushes) const final override
	{
		const UBlueprint* Blueprint = FBlueprintEditorUtils::FindBlueprintForNode(GraphNode);
		if (const FBlueprintBreakpoint* Breakpoint = Blueprint ? FKismetDebugUtilities::FindBreakpointForNode(GraphNode, Blueprint) : nullptr)
		{
			//Sets the Graph node's breakpoint state (top left of the K2Node)
			FOverlayBrushInfo BrushInfo(Breakpoint->IsEnabledByUser() ?
				FAppStyle::GetBrush(FKismetDebugUtilities::IsBreakpointValid(*Breakpoint) ? FWidgetRecycler::Style::BreakpointValid : FWidgetRecycler::Style::BreakpointInvalid) :
				FAppStyle::GetBrush(FWidgetRecycler::Style::BreakpointDisabled));

			//Center the pivot point of the breakpoint brush
			if (BrushInfo.Brush != nullptr)
			{
				BrushInfo.OverlayOffset -= BrushInfo.Brush->ImageSize * 0.5f;
			}

			Brushes.Add(BrushInfo);
		}

		//Update visual instruction status of this node, usually occurs at runtime in an Editor play mode
		if (FKismetDebugUtilities::GetCurrentInstruction() == GraphNode)
		{
			//Either a default state during a runtime scenario, or this node is currently hit on a breakpoint (pausing the game)
			FOverlayBrushInfo BrushInfo(
				FAppStyle::GetBrush(FKismetDebugUtilities ::GetMostRecentBreakpointHit() == GraphNode ?
					FWidgetRecycler::Style::InstructionPointerBreakpoint : FWidgetRecycler::Style::InstructionPointer));

			if (BrushInfo.Brush != nullptr)
			{
				//How much movement for bouncy animation
				constexpr float AnimationScale = 10.f;
				
				//Center the X Location, push the offset of the Y above the node's position
				BrushInfo.OverlayOffset = FVector2D(
					BrushInfo.OverlayOffset.X = WidgetSize.X * 0.5f - BrushInfo.OverlayOffset.X * 0.5f,
					AnimationScale - BrushInfo.Brush->ImageSize.Y);

				BrushInfo.AnimationEnvelope = FVector2D(0, AnimationScale);
				Brushes.Add(BrushInfo);
			}
		}

		//Adds the Top-left icon based on the Icon set in @UK2Node::GetCornerIcon()
		if (const UK2Node* K2Node = Cast<const UK2Node>(GraphNode))
		{
			//Pull style from the Plugin's StyleSet
			if (const FSlateBrush* CornerBrush = FWidgetRecyclerEditorSlateStyleSet::GetBrush(K2Node->GetCornerIcon()))
			{
				FOverlayBrushInfo BrushInfo(CornerBrush);

				//Move to proper location
				BrushInfo.OverlayOffset = FVector2D(
					WidgetSize.X - BrushInfo.Brush->ImageSize.X * 0.5f - .3f,
					BrushInfo.Brush->ImageSize.Y * -0.5f + .2f);

				Brushes.Add(BrushInfo);
			}
		}
	}
};

UK2Node_GetOrCreateWidget::UK2Node_GetOrCreateWidget(const FObjectInitializer& ObjectInitializer)
{
	NodeTooltip = FWidgetRecycler::Loc::NodeTooltip;
}

void UK2Node_GetOrCreateWidget::AllocateDefaultPins()
{
	Super::AllocateDefaultPins();

	//Create the Owning Player Pin
	UEdGraphPin* OwningPlayerGraphPin = CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Object, APlayerController::StaticClass(), FWidgetRecycler::Parms::OwningPlayer);
	SetPinToolTip(*OwningPlayerGraphPin, FWidgetRecycler::Loc::OwningPlayerTooltip);
}

TSharedPtr<SGraphNode> UK2Node_GetOrCreateWidget::CreateVisualWidget()
{
	return SNew(SGetOrCreateGraphNode, this);
}

void UK2Node_GetOrCreateWidget::ExpandNode(class FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	Super::ExpandNode(CompilerContext, SourceGraph);
	
	UK2Node_GetOrCreateWidget* GetOrCreateNode = this;

	//Get or spawn new pins
	UEdGraphPin* SpawnExecPin = GetOrCreateNode->GetExecPin();
	UEdGraphPin* SpawnWorldContextPin = GetOrCreateNode->GetWorldContextPin();
	UEdGraphPin* SpawnOwningPlayerPin = GetOrCreateNode->GetOwningPlayerPin();
	UEdGraphPin* SpawnWidgetClassPin = GetOrCreateNode->GetClassPin();
	UEdGraphPin* SpawnThenPin = GetOrCreateNode->GetThenPin();
	UEdGraphPin* SpawnResultPin = GetOrCreateNode->GetResultPin();
	
	UClass* WidgetClass = SpawnWidgetClassPin != nullptr ? Cast<UClass>(SpawnWidgetClassPin->DefaultObject) : nullptr;
	if (!SpawnWidgetClassPin || (SpawnWidgetClassPin->LinkedTo.Num() == 0 && !WidgetClass))
	{
		//Spit out compiler error in the situation where you are trying to compile without a class assigned
		CompilerContext.MessageLog.Error(*NSLOCTEXT("WidgetRecycler", "MissingClassError", "Node @@ does not specify a widget class").ToString(), GetOrCreateNode);
		GetOrCreateNode->BreakAllNodeLinks();
		return;
	}

	//Link the K2Node to the Create Function
	UK2Node_CallFunction* CallFunction = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(GetOrCreateNode, SourceGraph);
	CallFunction->FunctionReference.SetExternalMember(GET_FUNCTION_NAME_CHECKED(UWidgetRecyclerFunctionLibrary, GetOrCreate), UWidgetRecyclerFunctionLibrary::StaticClass());
	CallFunction->AllocateDefaultPins();

	//Need to retain reference of Class for reassignment after Pins are linked to CallFunction
	UClass* ClassToSpawn = GetClassToSpawn();

	//Find Pins from @UWidgetRecyclerFunctionLibrary::GetOrCreate()
	UEdGraphPin* CallFunctionExec = CallFunction->GetExecPin();
	UEdGraphPin* CallFunctionWorldContextPin = CallFunction->FindPinChecked(FWidgetRecycler::Parms::WorldContextObject);
	UEdGraphPin* CallFunctionWidgetTypePin = CallFunction->FindPinChecked(FWidgetRecycler::Parms::WidgetType);
	UEdGraphPin* CallFunctionOwningPlayerPin = CallFunction->FindPinChecked(FWidgetRecycler::Parms::OwningPlayer);
	UEdGraphPin* CallFunctionResult = CallFunction->GetReturnValuePin();
	
	//Migrate exec link to the @UWidgetRecyclerFunctionLibrary::GetOrCreate() blueprint exec
	CompilerContext.MovePinLinksToIntermediate(*SpawnExecPin, *CallFunctionExec);
	
	if (SpawnWorldContextPin)
	{
		CompilerContext.MovePinLinksToIntermediate(*SpawnWorldContextPin, *CallFunctionWorldContextPin);
	}

	//This should never fail - sanity check
	if (SpawnWidgetClassPin->LinkedTo.Num() > 0)
	{
		CompilerContext.MovePinLinksToIntermediate(*SpawnWidgetClassPin, *CallFunctionWidgetTypePin);
	}
	else
	{
		//Copy origin onto the Spawn function's WidgetTypePin
		CallFunctionWidgetTypePin->DefaultObject = WidgetClass;
	}
	
	CompilerContext.MovePinLinksToIntermediate(*SpawnOwningPlayerPin, *CallFunctionOwningPlayerPin);

	//Set the pin type to return the correct class
	CallFunctionResult->PinType = SpawnResultPin->PinType;
	CompilerContext.MovePinLinksToIntermediate(*SpawnResultPin, *CallFunctionResult);

	//Final Result from moving pin links to Function Call, to link the Spawned 'Then' Pin to
	UEdGraphPin* GeneratedThenPin = FKismetCompilerUtilities::GenerateAssignmentNodes(CompilerContext, SourceGraph, CallFunction, GetOrCreateNode, CallFunctionResult, ClassToSpawn);
	CompilerContext.MovePinLinksToIntermediate(*SpawnThenPin, *GeneratedThenPin);

	//Break existing links to the expanded node
	GetOrCreateNode->BreakAllNodeLinks();
}

FText UK2Node_GetOrCreateWidget::GetKeywords() const
{
	return NSLOCTEXT("WidgetRecycler", "CreateKeywords", "Get Create New Widget UserWidget Construct Class");
}

FSlateIcon UK2Node_GetOrCreateWidget::GetIconAndTint(FLinearColor& OutColor) const
{
	static const FSlateIcon Icon = FSlateIcon(FWidgetRecyclerEditorSlateStyleSet::GetStyleSetName(), FWidgetRecycler::Parms::PrimaryIcon);
	return Icon;
}

FName UK2Node_GetOrCreateWidget::GetCornerIcon() const
{
	return FWidgetRecycler::Parms::CornerIcon;
}

FText UK2Node_GetOrCreateWidget::GetMenuCategory() const
{
	return FWidgetRecycler::Loc::MenuCategory;
}

FLinearColor UK2Node_GetOrCreateWidget::GetNodeTitleColor() const
{
	return FWidgetRecycler::Style::NodeTitleColor;
}

FLinearColor UK2Node_GetOrCreateWidget::GetNodeBodyTintColor() const
{
	return FWidgetRecycler::Style::NodeBodyColor;
}

UEdGraphPin* UK2Node_GetOrCreateWidget::GetOwningPlayerPin() const
{
	UEdGraphPin* OwningPlayerPin = FindPin(FWidgetRecycler::Parms::OwningPlayer);
	check(OwningPlayerPin == nullptr || OwningPlayerPin->Direction == EGPD_Input)
	return OwningPlayerPin;
}

FText UK2Node_GetOrCreateWidget::GetBaseNodeTitle() const
{
	return FWidgetRecycler::Loc::BaseNodeTitle;
}

FText UK2Node_GetOrCreateWidget::GetDefaultNodeTitle() const
{
	return FWidgetRecycler::Loc::DefaultNodeTitle;
}

FText UK2Node_GetOrCreateWidget::GetNodeTitleFormat() const
{
	return FWidgetRecycler::Loc::NodeTitleFormat;
}

UClass* UK2Node_GetOrCreateWidget::GetClassPinBaseClass() const
{
	return UUserWidget::StaticClass();
}

bool UK2Node_GetOrCreateWidget::IsSpawnVarPin(UEdGraphPin* Pin) const
{
	return UK2Node_ConstructObjectFromClass::IsSpawnVarPin(Pin) && Pin->PinName != FWidgetRecycler::Parms::OwningPlayer;
}
