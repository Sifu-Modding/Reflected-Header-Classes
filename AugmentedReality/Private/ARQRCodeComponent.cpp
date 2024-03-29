#include "ARQRCodeComponent.h"
#include "Net/UnrealNetwork.h"

UARQRCodeComponent::UARQRCodeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UARQRCodeComponent::SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode) {
}

void UARQRCodeComponent::ServerUpdatePayload_Implementation(const FARQRCodeUpdatePayload& NewPayload) {
}
bool UARQRCodeComponent::ServerUpdatePayload_Validate(const FARQRCodeUpdatePayload& NewPayload) {
    return true;
}



void UARQRCodeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UARQRCodeComponent, ReplicatedPayload);
}


