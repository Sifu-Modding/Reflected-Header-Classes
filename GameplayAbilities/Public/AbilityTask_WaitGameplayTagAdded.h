#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AbilityTask_WaitGameplayTag.h"
#include "WaitGameplayTagDelegateDelegate.h"
#include "AbilityTask_WaitGameplayTagAdded.generated.h"

class UGameplayAbility;
class AActor;
class UAbilityTask_WaitGameplayTagAdded;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitGameplayTagDelegate Added;
    
    UAbilityTask_WaitGameplayTagAdded();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(UGameplayAbility* OwningAbility, FGameplayTag Tag, AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
    
};

