#include "AbilityTask_WaitMovementModeChange.h"

UAbilityTask_WaitMovementModeChange::UAbilityTask_WaitMovementModeChange() {
}

void UAbilityTask_WaitMovementModeChange::OnMovementModeChange(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

UAbilityTask_WaitMovementModeChange* UAbilityTask_WaitMovementModeChange::CreateWaitMovementModeChange(UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode) {
    return NULL;
}


