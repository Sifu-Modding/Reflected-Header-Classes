#include "GameplayEffectExecutionCalculation.h"

UGameplayEffectExecutionCalculation::UGameplayEffectExecutionCalculation() {
    this->bRequiresPassedInTags = false;
}

void UGameplayEffectExecutionCalculation::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const {
}


