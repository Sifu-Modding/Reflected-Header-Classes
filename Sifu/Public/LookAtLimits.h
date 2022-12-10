#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "LookAtLimits.generated.h"

USTRUCT(BlueprintType)
struct FLookAtLimits {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bEnabled;
    
    UPROPERTY(EditAnywhere)
    float m_fYawLimit;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve m_pitchLimitByYaw;
    
    SIFU_API FLookAtLimits();
};

