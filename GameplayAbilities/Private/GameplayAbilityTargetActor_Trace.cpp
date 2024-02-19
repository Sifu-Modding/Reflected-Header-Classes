#include "GameplayAbilityTargetActor_Trace.h"

AGameplayAbilityTargetActor_Trace::AGameplayAbilityTargetActor_Trace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxRange = 999999.00f;
    this->bTraceAffectsAimPitch = true;
}


