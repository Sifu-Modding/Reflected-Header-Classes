#include "AkReplication.h"

UAkReplication::UAkReplication(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UAkReplication::MulticastSetSwitch_Implementation(uint32 _uiGroupID, uint32 _uiValueID, AActor* _actor) const {
}

void UAkReplication::MulticastSetState_Implementation(uint32 _uiGroupID, uint32 _uiValueID) const {
}

void UAkReplication::MulticastSetRTPCValueWithName_Implementation(const FString& _rtpcName, float _akRtpcValue, int32 _iInterpolationTimeMs, const AActor* _actor) const {
}

void UAkReplication::MulticastSetRTPCValue_Implementation(uint32 _uiRtpc, float _akRtpcValue, int32 _iInterpolationTimeMs, const AActor* _actor) const {
}

void UAkReplication::MulticastPostEventAtLocation_Implementation(const FString& _eventName, const FVector& _vLocation, const FRotator& _rotation) const {
}

void UAkReplication::MulticastPostEvent_Implementation(const FString& _eventName, const AActor* _owner, uint32 _uFlags) const {
}


