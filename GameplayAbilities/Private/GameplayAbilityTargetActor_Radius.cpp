#include "GameplayAbilityTargetActor_Radius.h"

AGameplayAbilityTargetActor_Radius::AGameplayAbilityTargetActor_Radius(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldProduceTargetDataOnServer = true;
    this->Radius = 0.00f;
}


