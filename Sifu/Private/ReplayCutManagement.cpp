#include "ReplayCutManagement.h"

UReplayCutManagement::UReplayCutManagement() {
    this->m_Model = NULL;
}

void UReplayCutManagement::BPF_RemoveCut(UReplayKey* _key) {
}

bool UReplayCutManagement::BPF_CanAddCut(float _fDemoTime) const {
    return false;
}


