#include "RailForMovable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

ARailForMovable::ARailForMovable() {
    this->m_Rail = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComp"));
    this->m_EntryBox = CreateDefaultSubobject<UBoxComponent>(TEXT("EntryBoxComp"));
    this->m_fSpeedThreshold = 0.00f;
}

