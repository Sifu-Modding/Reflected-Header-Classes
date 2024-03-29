#include "ARComponent.h"
#include "Net/UnrealNetwork.h"

UARComponent::UARComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseDefaultReplication = true;
    this->DefaultMeshMaterial = NULL;
    this->DefaultWireframeMeshMaterial = NULL;
    this->MRMeshComponent = NULL;
    this->MyTrackedGeometry = NULL;
}

void UARComponent::UpdateVisualization_Implementation() {
}

void UARComponent::SetNativeID(FGuid NewNativeID) {
}


void UARComponent::OnRep_Payload() {
}

UMRMeshComponent* UARComponent::GetMRMesh() {
    return NULL;
}

void UARComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UARComponent, NativeID);
}


