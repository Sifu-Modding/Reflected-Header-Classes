#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ContentWidget -FallbackName=ContentWidget
#include "AkBoolPropertyToControl.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ECheckBoxState -FallbackName=ECheckBoxState
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=CheckBoxStyle -FallbackName=CheckBoxStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EHorizontalAlignment -FallbackName=EHorizontalAlignment
#include "AkOnCheckBoxComponentStateChangedDelegate.h"
#include "AkWwiseItemToControl.h"
#include "OnWwiseItemDropDetectedDelegate.h"
#include "OnBoolPropertyDropDetectedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "AkCheckBox.generated.h"

UCLASS(DefaultConfig, Config=Editor)
class AKAUDIO_API UAkCheckBox : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECheckBoxState CheckedState;
    
    UPROPERTY()
    UWidget::FGetCheckBoxState CheckedStateDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCheckBoxStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFocusable;
    
    UPROPERTY(EditAnywhere)
    FAkBoolPropertyToControl ThePropertyToControl;
    
    UPROPERTY(Config, VisibleAnywhere)
    FAkWwiseItemToControl ItemToControl;
    
    UPROPERTY(BlueprintAssignable)
    FAkOnCheckBoxComponentStateChanged AkOnCheckStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnWwiseItemDropDetected OnItemDropped;
    
    UPROPERTY(BlueprintAssignable)
    FOnBoolPropertyDropDetected OnPropertyDropped;
    
    UAkCheckBox();
    UFUNCTION(BlueprintCallable)
    void SetIsChecked(bool InIsChecked);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckedState(ECheckBoxState InCheckedState);
    
    UFUNCTION(BlueprintCallable)
    void SetAkItemId(const FGuid& ItemId);
    
    UFUNCTION(BlueprintCallable)
    void SetAkBoolProperty(const FString& ItemProperty);
    
    UFUNCTION(BlueprintPure)
    bool IsPressed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsChecked() const;
    
    UFUNCTION(BlueprintPure)
    ECheckBoxState GetCheckedState() const;
    
    UFUNCTION(BlueprintPure)
    FString GetAkProperty() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetAkItemId() const;
    
};

