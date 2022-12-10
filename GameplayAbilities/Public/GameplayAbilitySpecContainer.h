#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpec.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "GameplayAbilitySpecContainer.generated.h"

class UAbilitySystemComponent;

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayAbilitySpecContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FGameplayAbilitySpec> Items;
    
    UPROPERTY(Instanced)
    UAbilitySystemComponent* Owner;
    
    FGameplayAbilitySpecContainer();
};

