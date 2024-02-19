#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCDelegate -FallbackName=SCDelegate
#include "InputAction.h"
#include "AsyncWaitForInputAvailability.generated.h"

class ABaseCharacter;
class UAsyncWaitForInputAvailability;

UCLASS(Blueprintable)
class SIFU_API UAsyncWaitForInputAvailability : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast OnInputAvailable;
    
    UAsyncWaitForInputAvailability();

    UFUNCTION(BlueprintCallable)
    static UAsyncWaitForInputAvailability* BPF_WaitForInputAvailability(ABaseCharacter* _inCharacter, InputAction _eInInputAction);
    
};

