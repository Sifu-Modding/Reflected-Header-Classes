#include "DeathPositionSettings.h"

UDeathPositionSettings::UDeathPositionSettings() {
    this->m_CirclesDescriptions.AddDefaulted(3);
    this->m_fHeavySurpriseDistance = 350.00f;
    this->m_fLightSurpriseDistance = 650.00f;
    this->m_iProbaToPlayLightSurprise = 100;
}


