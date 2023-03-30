#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
#include "RigUnit_AccumulateFloatLerp.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_AccumulateFloatLerp : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Blend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIntegrateDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulatedValue;
    
    CONTROLRIG_API FRigUnit_AccumulateFloatLerp();
};

