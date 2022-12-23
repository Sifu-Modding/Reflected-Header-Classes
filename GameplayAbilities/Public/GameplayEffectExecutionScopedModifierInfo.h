#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectAttributeCaptureDefinition.h"
#include "GameplayEffectModifierMagnitude.h"
#include "EGameplayEffectScopedModifierAggregatorType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EGameplayModOp.h"
#include "GameplayModEvaluationChannelSettings.h"
#include "GameplayTagRequirements.h"
#include "GameplayEffectExecutionScopedModifierInfo.generated.h"

USTRUCT(BlueprintType)
struct FGameplayEffectExecutionScopedModifierInfo {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleDefaultsOnly)
    FGameplayEffectAttributeCaptureDefinition CapturedAttribute;
    
    UPROPERTY(VisibleDefaultsOnly)
    FGameplayTag TransientAggregatorIdentifier;
    
    UPROPERTY(VisibleDefaultsOnly)
    EGameplayEffectScopedModifierAggregatorType AggregatorType;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EGameplayModOp::Type> ModifierOp;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayEffectModifierMagnitude ModifierMagnitude;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayModEvaluationChannelSettings EvaluationChannelSettings;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagRequirements SourceTags;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagRequirements TargetTags;
    
    GAMEPLAYABILITIES_API FGameplayEffectExecutionScopedModifierInfo();
};

