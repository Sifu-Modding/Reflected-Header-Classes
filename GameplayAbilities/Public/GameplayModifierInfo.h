#pragma once
#include "CoreMinimal.h"
#include "GameplayTagRequirements.h"
#include "GameplayAttribute.h"
#include "EGameplayModOp.h"
#include "ScalableFloat.h"
#include "GameplayModEvaluationChannelSettings.h"
#include "GameplayEffectModifierMagnitude.h"
#include "GameplayModifierInfo.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FGameplayModifierInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayAttribute Attribute;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EGameplayModOp::Type> ModifierOp;
    
    UPROPERTY()
    FScalableFloat Magnitude;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayEffectModifierMagnitude ModifierMagnitude;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayModEvaluationChannelSettings EvaluationChannelSettings;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagRequirements SourceTags;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagRequirements TargetTags;
    
    FGameplayModifierInfo();
};

