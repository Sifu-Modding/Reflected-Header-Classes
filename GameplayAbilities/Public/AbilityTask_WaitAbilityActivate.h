#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "AbilityTask.h"
#include "GameplayTagRequirements.h"
#include "WaitAbilityActivateDelegateDelegate.h"
#include "AbilityTask_WaitAbilityActivate.generated.h"

class UAbilityTask_WaitAbilityActivate;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitAbilityActivate : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitAbilityActivateDelegate OnActivate;
    
    UAbilityTask_WaitAbilityActivate();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(UGameplayAbility* OwningAbility, FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityActivate(UGameplayAbility* ActivatedAbility);
    
};

