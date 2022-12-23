#include "AbilityTask_WaitGameplayEffectBlockedImmunity.h"

class UAbilityTask_WaitGameplayEffectBlockedImmunity;
class UGameplayAbility;
class AActor;

UAbilityTask_WaitGameplayEffectBlockedImmunity* UAbilityTask_WaitGameplayEffectBlockedImmunity::WaitGameplayEffectBlockedByImmunity(UGameplayAbility* OwningAbility, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, AActor* OptionalExternalTarget, bool OnlyTriggerOnce) {
    return NULL;
}

UAbilityTask_WaitGameplayEffectBlockedImmunity::UAbilityTask_WaitGameplayEffectBlockedImmunity() {
    this->ExternalOwner = NULL;
}

