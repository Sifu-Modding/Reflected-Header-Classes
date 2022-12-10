#pragma once
#include "CoreMinimal.h"
#include "MinimalGameplayCueReplicationProxy.generated.h"

class UAbilitySystemComponent;

USTRUCT()
struct GAMEPLAYABILITIES_API FMinimalGameplayCueReplicationProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UAbilitySystemComponent* Owner;
    
public:
    FMinimalGameplayCueReplicationProxy();
};

