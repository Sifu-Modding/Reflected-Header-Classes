#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "BaseTargetWeightEvaluation.h"
#include "DistanceTargetWeightEvaluation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UDistanceTargetWeightEvaluation : public UBaseTargetWeightEvaluation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve m_DistanceCurve;
    
public:
    UDistanceTargetWeightEvaluation();

};

