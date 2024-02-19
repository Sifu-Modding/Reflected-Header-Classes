#include "GameplayModMagnitudeCalculation.h"

UGameplayModMagnitudeCalculation::UGameplayModMagnitudeCalculation() {
    this->bAllowNonNetAuthorityDependencyRegistration = false;
}

float UGameplayModMagnitudeCalculation::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const {
    return 0.0f;
}


