#include "BaseHitDetectionDB.h"

UBaseHitDetectionDB::UBaseHitDetectionDB() {
    this->m_bUseBoneTransform = false;
    this->m_bIsSocket = false;
    this->m_bOnTargetOnly = false;
}

FName UBaseHitDetectionDB::BPF_GetRealBoneName(USkeletalMeshComponent* _meshComponent) const {
    return NAME_None;
}

FName UBaseHitDetectionDB::BPF_GetBoneOnCharacter(ABaseCharacter* _character, bool _bMirror, FTransform& _delta) const {
    return NAME_None;
}


