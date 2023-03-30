#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "BaseDirectionalTargetWeightEvaluation.h"
#include "AngleTargetWeightEvaluation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UAngleTargetWeightEvaluation : public UBaseDirectionalTargetWeightEvaluation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve m_AngleCurve;
    
public:
    UAngleTargetWeightEvaluation();
};

