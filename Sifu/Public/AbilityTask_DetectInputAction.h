#pragma once
#include "CoreMinimal.h"
#include "InputContext.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "DetectInputActionDelegateDelegate.h"
#include "InputAction.h"
#include "AbilityTask_DetectInputAction.generated.h"

class UGameplayAbility;
class UAbilityTask_DetectInputAction;

UCLASS()
class SIFU_API UAbilityTask_DetectInputAction : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDetectInputActionDelegate m_OnInputActionDetected;
    
    UAbilityTask_DetectInputAction();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_DetectInputAction* BPF_DetectInputAction(UGameplayAbility* _owningAbility, InputAction _eAction, bool _bDetectDeactivation, bool _bEndTaskOnDetected, InputContext _eInputContext);
    
};

