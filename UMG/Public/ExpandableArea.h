#pragma once
#include "CoreMinimal.h"
#include "OnExpandableAreaExpansionChangedDelegate.h"
#include "Widget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "NamedSlotInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ExpandableAreaStyle -FallbackName=ExpandableAreaStyle
#include "ExpandableArea.generated.h"

UCLASS()
class UMG_API UExpandableArea : public UWidget, public INamedSlotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FExpandableAreaStyle Style;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush BorderBrush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor BorderColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsExpanded;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin HeaderPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin AreaPadding;
    
    UPROPERTY(BlueprintAssignable)
    FOnExpandableAreaExpansionChanged OnExpansionChanged;
    
protected:
    UPROPERTY(Instanced)
    UWidget* HeaderContent;
    
    UPROPERTY(Instanced)
    UWidget* BodyContent;
    
public:
    UExpandableArea();
    UFUNCTION(BlueprintCallable)
    void SetIsExpanded_Animated(bool IsExpanded);
    
    UFUNCTION(BlueprintCallable)
    void SetIsExpanded(bool IsExpanded);
    
    UFUNCTION(BlueprintPure)
    bool GetIsExpanded() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

