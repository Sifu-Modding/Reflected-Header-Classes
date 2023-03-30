#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InputAction.h"
#include "InputPad.generated.h"

class UGenericInputData;

UCLASS(Blueprintable)
class SIFU_API UInputPad : public UObject {
    GENERATED_BODY()
public:
    UInputPad();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGenericInputData* BPF_GetInputDataForAction(InputAction _eAction) const;
    
};

