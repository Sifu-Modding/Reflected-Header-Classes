#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTasks -ObjectName=GameplayTask -FallbackName=GameplayTask
#include "AbilityTask.h"
#include "AbilityTask_WaitConfirm.generated.h"

class UAbilityTask_WaitConfirm;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitConfirm : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayTask::FGenericGameplayTaskDelegate OnConfirm;
    
    UAbilityTask_WaitConfirm();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitConfirm* WaitConfirm(UGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmCallback(UGameplayAbility* InAbility);
    
};

