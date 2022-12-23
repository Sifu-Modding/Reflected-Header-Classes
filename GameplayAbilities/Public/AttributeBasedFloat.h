#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CurveTableRowHandle -FallbackName=CurveTableRowHandle
#include "ScalableFloat.h"
#include "GameplayEffectAttributeCaptureDefinition.h"
#include "EAttributeBasedFloatCalculationType.h"
#include "EGameplayModEvaluationChannel.h"
#include "AttributeBasedFloat.generated.h"

USTRUCT(BlueprintType)
struct FAttributeBasedFloat {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FScalableFloat Coefficient;
    
    UPROPERTY(EditDefaultsOnly)
    FScalableFloat PreMultiplyAdditiveValue;
    
    UPROPERTY(EditDefaultsOnly)
    FScalableFloat PostMultiplyAdditiveValue;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayEffectAttributeCaptureDefinition BackingAttribute;
    
    UPROPERTY(EditDefaultsOnly)
    FCurveTableRowHandle AttributeCurve;
    
    UPROPERTY(EditDefaultsOnly)
    EAttributeBasedFloatCalculationType AttributeCalculationType;
    
    UPROPERTY(EditDefaultsOnly)
    EGameplayModEvaluationChannel FinalChannel;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer SourceTagFilter;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer TargetTagFilter;
    
    GAMEPLAYABILITIES_API FAttributeBasedFloat();
};

