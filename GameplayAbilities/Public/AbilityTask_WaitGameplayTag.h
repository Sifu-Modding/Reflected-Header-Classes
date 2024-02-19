#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AbilityTask.h"
#include "AbilityTask_WaitGameplayTag.generated.h"

class UAbilitySystemComponent;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayTag : public UAbilityTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* OptionalExternalTarget;
    
public:
    UAbilityTask_WaitGameplayTag();

    UFUNCTION(BlueprintCallable)
    void GameplayTagCallback(const FGameplayTag Tag, int32 NewCount);
    
};

