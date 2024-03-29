#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetDataHandle -FallbackName=GameplayAbilityTargetDataHandle
#include "CSCGameplayAbilityTargetDataLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class UCSCGameplayAbilityTargetDataLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCSCGameplayAbilityTargetDataLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAbilityTargetDataHandle BP_AbilityTargetDataWithTarget(AActor* _target);
    
};

