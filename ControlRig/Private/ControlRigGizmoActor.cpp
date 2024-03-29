#include "ControlRigGizmoActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AControlRigGizmoActor::AControlRigGizmoActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent0"));
    this->ActorRootComponent = (USceneComponent*)RootComponent;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
    this->ControlRigIndex = 4294967295;
    this->bEnabled = true;
    this->bSelected = false;
    this->bSelectable = true;
    this->bHovered = false;
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}

void AControlRigGizmoActor::SetSelected(bool bInSelected) {
}

void AControlRigGizmoActor::SetSelectable(bool bInSelectable) {
}

void AControlRigGizmoActor::SetHovered(bool bInHovered) {
}

void AControlRigGizmoActor::SetGlobalTransform(const FTransform& InTransform) {
}

void AControlRigGizmoActor::SetEnabled(bool bInEnabled) {
}






bool AControlRigGizmoActor::IsSelectedInEditor() const {
    return false;
}

bool AControlRigGizmoActor::IsHovered() const {
    return false;
}

bool AControlRigGizmoActor::IsEnabled() const {
    return false;
}

FTransform AControlRigGizmoActor::GetGlobalTransform() const {
    return FTransform{};
}


