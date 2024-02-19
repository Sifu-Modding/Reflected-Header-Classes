#include "SoundTransitionVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

ASoundTransitionVolume::ASoundTransitionVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->m_SplineComponent->SetupAttachment(RootComponent);
}


