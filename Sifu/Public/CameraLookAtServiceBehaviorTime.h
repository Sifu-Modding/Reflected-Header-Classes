#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCBlendType -FallbackName=ESCBlendType
#include "CameraLookAtServiceBehaviorTime.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct SIFU_API FCameraLookAtServiceBehaviorTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fReachDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_CurveReachDurationPerAngleDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESCBlendType m_eReachBlendType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* m_ReachCurveDynamic;
    
    FCameraLookAtServiceBehaviorTime();
};

