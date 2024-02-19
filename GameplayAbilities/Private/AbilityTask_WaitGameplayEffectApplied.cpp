#include "AbilityTask_WaitGameplayEffectApplied.h"

UAbilityTask_WaitGameplayEffectApplied::UAbilityTask_WaitGameplayEffectApplied() {
    this->ExternalOwner = NULL;
}

void UAbilityTask_WaitGameplayEffectApplied::OnApplyGameplayEffectCallback(UAbilitySystemComponent* Target, const FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle) {
}


