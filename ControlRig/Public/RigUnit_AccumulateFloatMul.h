#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
#include "RigUnit_AccumulateFloatMul.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_AccumulateFloatMul : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Multiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIntegrateDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulatedValue;
    
    CONTROLRIG_API FRigUnit_AccumulateFloatMul();
};

