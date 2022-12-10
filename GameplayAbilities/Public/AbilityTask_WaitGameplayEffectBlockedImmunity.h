#pragma once
#include "CoreMinimal.h"
#include "GameplayTagRequirements.h"
#include "AbilityTask.h"
#include "GameplayEffectBlockedDelegateDelegate.h"
#include "AbilityTask_WaitGameplayEffectBlockedImmunity.generated.h"

class UAbilitySystemComponent;
class UAbilityTask_WaitGameplayEffectBlockedImmunity;
class UGameplayAbility;
class AActor;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGameplayEffectBlockedDelegate bLocked;
    
protected:
    UPROPERTY(Instanced)
    UAbilitySystemComponent* ExternalOwner;
    
public:
    UAbilityTask_WaitGameplayEffectBlockedImmunity();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(UGameplayAbility* OwningAbility, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
    
};

