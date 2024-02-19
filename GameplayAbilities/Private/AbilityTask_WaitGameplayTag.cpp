#include "AbilityTask_WaitGameplayTag.h"

UAbilityTask_WaitGameplayTag::UAbilityTask_WaitGameplayTag() {
    this->OptionalExternalTarget = NULL;
}

void UAbilityTask_WaitGameplayTag::GameplayTagCallback(const FGameplayTag Tag, int32 NewCount) {
}


