#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CurveTableRowHandle -FallbackName=CurveTableRowHandle
#include "ScalableFloat.h"
#include "CustomCalculationBasedFloat.generated.h"

class UGameplayModMagnitudeCalculation;

USTRUCT(BlueprintType)
struct FCustomCalculationBasedFloat {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGameplayModMagnitudeCalculation> CalculationClassMagnitude;
    
    UPROPERTY(EditDefaultsOnly)
    FScalableFloat Coefficient;
    
    UPROPERTY(EditDefaultsOnly)
    FScalableFloat PreMultiplyAdditiveValue;
    
    UPROPERTY(EditDefaultsOnly)
    FScalableFloat PostMultiplyAdditiveValue;
    
    UPROPERTY(EditDefaultsOnly)
    FCurveTableRowHandle FinalLookupCurve;
    
    GAMEPLAYABILITIES_API FCustomCalculationBasedFloat();
};

