#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "AbilityStateDelegateDelegate.h"
#include "AbilityTask_StartAbilityState.generated.h"

class UGameplayAbility;
class UAbilityTask_StartAbilityState;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_StartAbilityState : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAbilityStateDelegate OnStateEnded;
    
    UPROPERTY(BlueprintAssignable)
    FAbilityStateDelegate OnStateInterrupted;
    
    UAbilityTask_StartAbilityState();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_StartAbilityState* StartAbilityState(UGameplayAbility* OwningAbility, FName StateName, bool bEndCurrentState);
    
};

