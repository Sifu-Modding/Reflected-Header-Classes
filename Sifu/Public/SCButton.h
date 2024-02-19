#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Button -FallbackName=Button
#include "ButtonFocusedDelegate.h"
#include "ButtonUnFocusedDelegate.h"
#include "SCButton.generated.h"

UCLASS(Blueprintable)
class SIFU_API USCButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonFocused OnFocusReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonUnFocused OnFocusLost;
    
    USCButton();

    UFUNCTION(BlueprintCallable)
    void BPF_SetOverrideFocusTints(FLinearColor _focusedColor, FLinearColor _noFocusColor);
    
};

