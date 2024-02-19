#include "CheckPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ACheckPoint::ACheckPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bKeepBackGroundDuringStartupMenu = true;
    this->m_TriggerCheckpointEnter = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerCheckpoint"));
    this->m_TriggerCheckpointEnter->SetupAttachment(RootComponent);
}

void ACheckPoint::OnBeginOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult) {
}

void ACheckPoint::BPF_SetNewCheckPointInSave() {
}


