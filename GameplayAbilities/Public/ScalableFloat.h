#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CurveTableRowHandle -FallbackName=CurveTableRowHandle
#include "ScalableFloat.generated.h"

USTRUCT(BlueprintType)
struct GAMEPLAYABILITIES_API FScalableFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle Curve;
    
    FScalableFloat();
};

