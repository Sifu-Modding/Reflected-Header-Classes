#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_SimBase.h"
#include "RigUnit_AccumulateTransformLerp.generated.h"

USTRUCT()
struct FRigUnit_AccumulateTransformLerp : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform TargetValue;
    
    UPROPERTY()
    FTransform InitialValue;
    
    UPROPERTY()
    float Blend;
    
    UPROPERTY()
    bool bIntegrateDeltaTime;
    
    UPROPERTY()
    FTransform Result;
    
    UPROPERTY()
    FTransform AccumulatedValue;
    
    CONTROLRIG_API FRigUnit_AccumulateTransformLerp();
};

