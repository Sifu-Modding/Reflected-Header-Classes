#include "GizmoLineHandleComponent.h"

UGizmoLineHandleComponent::UGizmoLineHandleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HandleSize = 10.00f;
    this->Thickness = 2.00f;
    this->Length = 0.00f;
    this->bImageScale = true;
}


