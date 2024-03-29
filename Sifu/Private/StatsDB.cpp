#include "StatsDB.h"

UStatsDB::UStatsDB() {
    this->m_iRestatCost = -30;
    this->m_iChangeSchoolCost = -3;
    this->m_fFightingStyleStatScaleCoef = 1.00f;
    this->m_FightingStyleStatScaleBonusCurves[0] = NULL;
    this->m_FightingStyleStatScaleBonusCurves[1] = NULL;
    this->m_FightingStyleStatScaleBonusCurves[2] = NULL;
    this->m_FightingStyleStatScaleBonusCurves[3] = NULL;
    this->m_FightingStyleStatScaleBonusCurves[4] = NULL;
    this->m_FightingStyleStatScaleBonusCurves[5] = NULL;
    this->m_StatScaleBonusCurves[0] = NULL;
    this->m_StatScaleBonusCurves[1] = NULL;
    this->m_StatScaleBonusCurves[2] = NULL;
    this->m_StatScaleBonusCurves[3] = NULL;
    this->m_StatScaleBonusCurves[4] = NULL;
    this->m_StatScaleBonusCurves[5] = NULL;
    this->m_MaxStatDamageCurve = NULL;
    this->m_WRScaleBonusCurves[0] = NULL;
    this->m_WRScaleBonusCurves[1] = NULL;
    this->m_WRScaleBonusCurves[2] = NULL;
    this->m_WRScaleBonusCurves[3] = NULL;
    this->m_WRScaleBonusCurves[4] = NULL;
    this->m_WRScaleBonusCurves[5] = NULL;
    this->m_MaxWRDamageCurve = NULL;
    this->m_fMaxDamage = 300.00f;
    this->m_fMaxRange = 300.00f;
    this->m_fMinSpeed = 0.00f;
    this->m_fMaxSpeed = 1.00f;
    this->m_fMaxDamageBonus = 60.00f;
    this->m_iMaxLevel = 60;
    this->m_iStatBonusMaxLevel = 99;
    this->m_WeightCategoryThresholds[0] = 0.00f;
    this->m_WeightCategoryThresholds[1] = 0.00f;
    this->m_WeightCategoryThresholds[2] = 0.00f;
    this->m_WeightCategoryThresholds[3] = 0.00f;
    this->m_fXPGainRatioForAssist = 0.70f;
    this->m_fXPGainRatioForKillingBlow = 0.10f;
    this->m_iXPGainThresholdForKillingBlow = 150;
    this->m_StrengthAverageCurve = NULL;
    this->m_AgilityAverageCurve = NULL;
    this->m_WeightRatioAverageCurve = NULL;
    this->m_WeaponDamageAverageCurve = NULL;
    this->m_AttackBonusCurve = NULL;
    this->m_GearAttackBonusScaleCurves[0] = NULL;
    this->m_GearAttackBonusScaleCurves[1] = NULL;
    this->m_GearAttackBonusScaleCurves[2] = NULL;
    this->m_GearAttackBonusScaleCurves[3] = NULL;
    this->m_GearAttackBonusScaleCurves[4] = NULL;
    this->m_GearAttackBonusScaleCurves[5] = NULL;
    this->m_iBonusXPWhenPendantIsFull = 100;
}


