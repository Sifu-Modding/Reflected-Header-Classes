#include "TE_Nearest.h"
#include "ETargetingPrio.h"

UTE_Nearest::UTE_Nearest() {
    this->m_eTargettingType = ETargetingPrio::Nearest;
    this->m_fOutOfSightTimer = 0.00f;
    this->m_fAutoSelectTargetCooldown = 0.50f;
    this->m_bWantKeepPreviousTarget = false;
    this->m_bAutoResetBestTarget = true;
}


