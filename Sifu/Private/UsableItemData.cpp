#include "UsableItemData.h"

UUsableItemData::UUsableItemData() {
    this->m_fCooldown = 0.00f;
    this->m_UsableItemClass = NULL;
    this->m_Description = FText::FromString(TEXT("Item Description"));
    this->m_iTargetRecquirements = 255;
}


