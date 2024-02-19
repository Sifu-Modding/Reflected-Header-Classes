#include "RailForMovable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

ARailForMovable::ARailForMovable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootComp"));
    this->m_Rail = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComp"));
    this->m_EntryBox = CreateDefaultSubobject<UBoxComponent>(TEXT("EntryBoxComp"));
    this->m_fSpeedThreshold = 0.00f;
}


