#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "BaseTargetWeightEvaluation.h"
#include "LastTimeOnScreenTargetWeightEvaluation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API ULastTimeOnScreenTargetWeightEvaluation : public UBaseTargetWeightEvaluation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve m_TimeCurve;
    
public:
    ULastTimeOnScreenTargetWeightEvaluation();
};

