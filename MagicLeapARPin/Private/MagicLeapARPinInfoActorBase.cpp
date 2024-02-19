#include "MagicLeapARPinInfoActorBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AMagicLeapARPinInfoActorBase::AMagicLeapARPinInfoActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bVisibilityOverride = true;
}



