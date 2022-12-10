#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCAttributeSet -FallbackName=SCAttributeSet
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAttributeData -FallbackName=GameplayAttributeData
#include "StatModifiersAttributeSet.generated.h"

UCLASS(BlueprintType)
class SIFU_API UStatModifiersAttributeSet : public USCAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData FocusGainMultiplier;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData AvoidFocusGainBonus;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData DeflectFocusGainBonus;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData ParryImpactOnStructureBonus;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData ParryImpactOnWeaponBonus;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData StructureGainOnAvoidBonus;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData StructureImpactWithBluntBonus;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData WeaponHealthMultiplier;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData WeaponDamageMultiplier;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData WeaponStructureImpactMultiplier;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData BarehandsDamageMultiplier;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData BarehandsStructureImpactMultiplier;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData TakedownHealthGainMultiplier;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayAttributeData DamageReceivedMultiplier;
    
    UStatModifiersAttributeSet();
};

