#include "MRMeshComponent.h"

UMRMeshComponent::UMRMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Material = NULL;
    this->WireframeMaterial = NULL;
    this->bCreateMeshProxySections = true;
    this->bUpdateNavMeshOnMeshUpdate = true;
    this->bNeverCreateCollisionMesh = false;
    this->CachedBodySetup = NULL;
}

void UMRMeshComponent::SetWireframeMaterial(UMaterialInterface* InMaterial) {
}

void UMRMeshComponent::SetWireframeColor(const FLinearColor& InColor) {
}

void UMRMeshComponent::SetUseWireframe(bool bUseWireframe) {
}

void UMRMeshComponent::SetEnableMeshOcclusion(bool bEnable) {
}

bool UMRMeshComponent::IsConnected() const {
    return false;
}

FLinearColor UMRMeshComponent::GetWireframeColor() const {
    return FLinearColor{};
}

bool UMRMeshComponent::GetUseWireframe() const {
    return false;
}

bool UMRMeshComponent::GetEnableMeshOcclusion() const {
    return false;
}

void UMRMeshComponent::ForceNavMeshUpdate() {
}

void UMRMeshComponent::Clear() {
}


