#include "AbilityTask_WaitOverlap.h"

UAbilityTask_WaitOverlap::UAbilityTask_WaitOverlap() {
}

UAbilityTask_WaitOverlap* UAbilityTask_WaitOverlap::WaitForOverlap(UGameplayAbility* OwningAbility) {
    return NULL;
}

void UAbilityTask_WaitOverlap::OnHitCallback(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


