#include "ControlRigControlActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AControlRigControlActor::AControlRigControlActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActorToTrack = NULL;
    this->ControlRigClass = NULL;
    this->bRefreshOnTick = true;
    this->bIsSelectable = true;
    this->MaterialOverride = NULL;
    this->ColorParameter = TEXT("Color");
    this->bCastShadows = false;
    this->ActorRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent0"));
    this->ControlRig = NULL;
}

void AControlRigControlActor::Refresh() {
}

void AControlRigControlActor::Clear() {
}


