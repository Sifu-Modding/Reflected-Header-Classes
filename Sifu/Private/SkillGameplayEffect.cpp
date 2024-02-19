#include "SkillGameplayEffect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=EGameplayEffectDurationType -FallbackName=EGameplayEffectDurationType

USkillGameplayEffect::USkillGameplayEffect() {
    this->DurationPolicy = EGameplayEffectDurationType::Infinite;
    this->m_iSkillPointCost = 0;
    this->m_eStatUsedToUnlockSkill = ECharacterStat::SpareStatPoints;
}


