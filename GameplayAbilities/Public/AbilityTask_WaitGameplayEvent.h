#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AbilityTask.h"
#include "WaitGameplayEventDelegateDelegate.h"
#include "AbilityTask_WaitGameplayEvent.generated.h"

class AActor;
class UAbilitySystemComponent;
class UAbilityTask_WaitGameplayEvent;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayEvent : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitGameplayEventDelegate EventReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* OptionalExternalTarget;
    
    UAbilityTask_WaitGameplayEvent();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(UGameplayAbility* OwningAbility, FGameplayTag EventTag, AActor* NewOptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact);
    
};

