#include "UsableItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AUsableItem::AUsableItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->m_ShapeComponent = NULL;
    this->m_iMatchesWithAvoid = 0;
}

EItemUseState AUsableItem::BPF_GetItemUseState() const {
    return EItemUseState::BuildUp;
}

float AUsableItem::BPF_ComputeAttackKnockbackCoeff_Implementation(AActor* _Instigator, AActor* Target, const FHitResult& _hitResult) const {
    return 0.0f;
}








