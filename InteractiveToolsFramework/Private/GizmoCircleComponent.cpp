#include "GizmoCircleComponent.h"

UGizmoCircleComponent::UGizmoCircleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Radius = 100.00f;
    this->Thickness = 2.00f;
    this->NumSides = 64;
    this->bViewAligned = false;
    this->bOnlyAllowFrontFacingHits = true;
}


