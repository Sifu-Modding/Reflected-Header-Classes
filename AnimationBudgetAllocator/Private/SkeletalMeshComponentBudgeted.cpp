#include "SkeletalMeshComponentBudgeted.h"

USkeletalMeshComponentBudgeted::USkeletalMeshComponentBudgeted(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoRegisterWithBudgetAllocator = true;
    this->bAutoCalculateSignificance = false;
    this->bShouldUseActorRenderedFlag = false;
}

void USkeletalMeshComponentBudgeted::SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator) {
}


