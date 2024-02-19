#include "AbilityTask_WaitGameplayEvent.h"

UAbilityTask_WaitGameplayEvent::UAbilityTask_WaitGameplayEvent() {
    this->OptionalExternalTarget = NULL;
}

UAbilityTask_WaitGameplayEvent* UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(UGameplayAbility* OwningAbility, FGameplayTag EventTag, AActor* NewOptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact) {
    return NULL;
}


