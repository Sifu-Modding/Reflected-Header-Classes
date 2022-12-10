#pragma once
#include "CoreMinimal.h"
#include "BaseTargetWeightEvaluation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "DistanceTargetWeightEvaluation.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UDistanceTargetWeightEvaluation : public UBaseTargetWeightEvaluation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve m_DistanceCurve;
    
public:
    UDistanceTargetWeightEvaluation();
};

