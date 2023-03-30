#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CurveTableRowHandle -FallbackName=CurveTableRowHandle
#include "ScalableFloat.h"
#include "Templates/SubclassOf.h"
#include "CustomCalculationBasedFloat.generated.h"

class UGameplayModMagnitudeCalculation;

USTRUCT(BlueprintType)
struct FCustomCalculationBasedFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayModMagnitudeCalculation> CalculationClassMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Coefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PreMultiplyAdditiveValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PostMultiplyAdditiveValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle FinalLookupCurve;
    
    GAMEPLAYABILITIES_API FCustomCalculationBasedFloat();
};

