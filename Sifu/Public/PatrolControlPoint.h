#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "ESpeedState.h"
#include "PatrolControlPoint.generated.h"

USTRUCT(BlueprintType)
struct FPatrolControlPoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector m_vLocalPosition;
    
    UPROPERTY(EditAnywhere)
    bool m_bOverrideActivityAnimation;
    
    UPROPERTY(EditAnywhere)
    FName m_ActivityName;
    
    UPROPERTY(EditAnywhere)
    FAnimContainer m_ActivityAnimContainer;
    
    UPROPERTY(EditAnywhere)
    bool m_bOverrideActivityDuration;
    
    UPROPERTY(EditAnywhere)
    float m_fOverridenActivityDuration;
    
    UPROPERTY(EditAnywhere)
    ESpeedState m_eSpeedStateToUse;
    
    SIFU_API FPatrolControlPoint();
};

