#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "InputHelpers.generated.h"

class ASCPlayerController;

UCLASS(BlueprintType)
class SIFU_API UInputHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInputHelpers();
    UFUNCTION(BlueprintCallable)
    static float BPF_GetInputActionPressedDurationNormalized(ASCPlayerController* _playerController, InputAction _eInputAction);
    
};

