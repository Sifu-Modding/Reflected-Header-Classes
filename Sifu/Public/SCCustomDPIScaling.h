#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DPICustomScalingRule -FallbackName=DPICustomScalingRule
#include "SCCustomDPIScaling.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class SIFU_API USCCustomDPIScaling : public UDPICustomScalingRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fBaseRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CurveBelowRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_CurveAboveRatio;
    
    USCCustomDPIScaling();
};

