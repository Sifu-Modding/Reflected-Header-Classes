#include "FidgetDB.h"

UFidgetDB::UFidgetDB() {
    this->m_bAllowSyncFidgetMirrorWithQuadrant = true;
}

FSCGestureAndBlendProfile UFidgetDB::BPF_GetGestureContainer(AActor* _requester) {
    return FSCGestureAndBlendProfile{};
}

FSCConditionnalGestureAndBlendProfile UFidgetDB::BPF_GetConditionnalGestureContainer(AActor* _requester) {
    return FSCConditionnalGestureAndBlendProfile{};
}

float UFidgetDB::BPF_ComputeTimer() const {
    return 0.0f;
}


