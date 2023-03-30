#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Blueprint -FallbackName=Blueprint
#include "GameplayAbilityBlueprint.generated.h"

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UGameplayAbilityBlueprint : public UBlueprint {
    GENERATED_BODY()
public:
    UGameplayAbilityBlueprint();
};

