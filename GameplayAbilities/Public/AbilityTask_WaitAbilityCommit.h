#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "AbilityTask.h"
#include "WaitAbilityCommitDelegateDelegate.h"
#include "AbilityTask_WaitAbilityCommit.generated.h"

class UAbilityTask_WaitAbilityCommit;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitAbilityCommit : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitAbilityCommitDelegate OnCommit;
    
    UAbilityTask_WaitAbilityCommit();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool TriggerOnce);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTage, bool TriggerOnce);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityCommit(UGameplayAbility* ActivatedAbility);
    
};

