#include "GameplayEffectCustomApplicationRequirement.h"

UGameplayEffectCustomApplicationRequirement::UGameplayEffectCustomApplicationRequirement() {
}

bool UGameplayEffectCustomApplicationRequirement::CanApplyGameplayEffect_Implementation(const UGameplayEffect* GameplayEffect, const FGameplayEffectSpec& Spec, UAbilitySystemComponent* ASC) const {
    return false;
}


