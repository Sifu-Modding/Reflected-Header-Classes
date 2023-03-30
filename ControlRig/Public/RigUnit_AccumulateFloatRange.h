#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
#include "RigUnit_AccumulateFloatRange.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_AccumulateFloatRange : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Minimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Maximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulatedMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulatedMaximum;
    
    CONTROLRIG_API FRigUnit_AccumulateFloatRange();
};

