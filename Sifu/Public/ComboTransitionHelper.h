#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EComboTransition.h"
#include "InputAction.h"
#include "ComboTransitionHelper.generated.h"

UCLASS(Blueprintable)
class SIFU_API UComboTransitionHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UComboTransitionHelper();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EComboTransition BPF_GetTransitionFromInput(InputAction _eInput);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static InputAction BPF_GetInputFromTransition(EComboTransition _eTransition);
    
};

