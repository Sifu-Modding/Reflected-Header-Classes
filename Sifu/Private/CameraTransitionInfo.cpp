#include "CameraTransitionInfo.h"

UCameraTransitionInfo::UCameraTransitionInfo() {
    this->m_fDuration = 1.00f;
    this->m_Curve = NULL;
    this->m_CurveForAngle = NULL;
    this->m_bFreezeUnderneathTransition = false;
    this->m_bWantUseAngleFromStartNode = true;
    this->m_eUpdateAngleMode = EUpdateAngleMode::Both;
}


