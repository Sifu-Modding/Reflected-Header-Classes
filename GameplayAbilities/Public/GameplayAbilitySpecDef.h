#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ScalableFloat.h"
#include "EGameplayEffectGrantedAbilityRemovePolicy.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayAbilitySpecDef.generated.h"

class UObject;
class UGameplayAbility;

USTRUCT(BlueprintType)
struct FGameplayAbilitySpecDef {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    TSubclassOf<UGameplayAbility> Ability;
    
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    FScalableFloat LevelScalableFloat;
    
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    int32 InputID;
    
    UPROPERTY(EditDefaultsOnly, NotReplicated)
    EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy;
    
    UPROPERTY(NotReplicated)
    UObject* SourceObject;
    
    UPROPERTY()
    FGameplayAbilitySpecHandle AssignedHandle;
    
    GAMEPLAYABILITIES_API FGameplayAbilitySpecDef();
};

