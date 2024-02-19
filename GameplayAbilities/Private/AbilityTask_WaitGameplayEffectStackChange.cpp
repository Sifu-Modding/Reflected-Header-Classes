#include "AbilityTask_WaitGameplayEffectStackChange.h"

UAbilityTask_WaitGameplayEffectStackChange::UAbilityTask_WaitGameplayEffectStackChange() {
}

UAbilityTask_WaitGameplayEffectStackChange* UAbilityTask_WaitGameplayEffectStackChange::WaitForGameplayEffectStackChange(UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle) {
    return NULL;
}

void UAbilityTask_WaitGameplayEffectStackChange::OnGameplayEffectStackChange(FActiveGameplayEffectHandle Handle, int32 NewCount, int32 OldCount) {
}


