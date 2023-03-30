#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AbilityTask_WaitGameplayTag.h"
#include "WaitGameplayTagDelegateDelegate.h"
#include "AbilityTask_WaitGameplayTagRemoved.generated.h"

class AActor;
class UAbilityTask_WaitGameplayTagRemoved;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitGameplayTagDelegate Removed;
    
    UAbilityTask_WaitGameplayTagRemoved();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(UGameplayAbility* OwningAbility, FGameplayTag Tag, AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
    
};

