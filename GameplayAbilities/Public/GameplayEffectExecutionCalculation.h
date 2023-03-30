#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectCalculation.h"
#include "GameplayEffectCustomExecutionOutput.h"
#include "GameplayEffectCustomExecutionParameters.h"
#include "GameplayEffectExecutionCalculation.generated.h"

UCLASS(Abstract, Blueprintable)
class GAMEPLAYABILITIES_API UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresPassedInTags;
    
public:
    UGameplayEffectExecutionCalculation();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Execute(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const;
    
};

