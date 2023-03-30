#include "InteractiveMovable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCSaveGameComponent -FallbackName=SCSaveGameComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCStreamingActorComponent -FallbackName=SCStreamingActorComponent
#include "InteractiveDestructionComponent.h"
#include "MovableInteractionComponent.h"

class AActor;

void AInteractiveMovable::OnUpdatedFromSaveCallback() {
}

void AInteractiveMovable::OnPreSaveLevel() {
}

void AInteractiveMovable::BPF_SetInstigator(AActor* _Instigator) {
}

void AInteractiveMovable::BPF_SetActivate(bool _bActivated) {
}

bool AInteractiveMovable::BPF_IsReadyToUse() const {
    return false;
}

FVector AInteractiveMovable::BPF_GetPivotLoc() const {
    return FVector{};
}

AActor* AInteractiveMovable::BPF_GetInstigator() {
    return NULL;
}

FVector AInteractiveMovable::BPF_GetHUDLocation() const {
    return FVector{};
}

EDebugMovableState AInteractiveMovable::BPF_GetDebugMovableState() const {
    return EDebugMovableState::TooFar;
}








AInteractiveMovable::AInteractiveMovable() {
    this->m_StreamingComponent = CreateDefaultSubobject<USCStreamingActorComponent>(TEXT("StreamingActorComponent"));
    this->m_bEnableSreamingEvents = false;
    this->m_InteractionComponent = CreateDefaultSubobject<UMovableInteractionComponent>(TEXT("InteractionObjectComponent"));
    this->m_DestructibleComponent = CreateDefaultSubobject<UInteractiveDestructionComponent>(TEXT("DestructibleComponent"));
    this->m_SaveComponent = CreateDefaultSubobject<USCSaveGameComponent>(TEXT("SaveGameComponent"));
    this->m_fAngularFallingSpeedThreshold = 0.00f;
    this->m_fLinearFallingSpeedThreshold = 0.00f;
    this->m_bIsBreakSilent = false;
    this->m_throwTargetSettingsDB = NULL;
}

