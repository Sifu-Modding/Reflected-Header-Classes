#include "SCFootIkRaycast.h"

USCFootIkRaycast::USCFootIkRaycast() {
    this->m_fTraceUpLength = 100.00f;
    this->m_fTraceDownLength = 100.00f;
    this->m_eCollisionChannel = ECC_Pawn;
}

bool USCFootIkRaycast::DoRaycast(FHitResult& _outHitResult, USCFootIkAnimInstance* _footAnimInstance, const FVector& _vStart, const FVector& _vEnd) const {
    return false;
}


