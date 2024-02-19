#include "GameplayAbility_Montage.h"

UGameplayAbility_Montage::UGameplayAbility_Montage() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->MontageToPlay = NULL;
    this->PlayRate = 1.00f;
}


