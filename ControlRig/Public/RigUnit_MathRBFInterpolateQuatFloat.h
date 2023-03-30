#pragma once
#include "CoreMinimal.h"
#include "MathRBFInterpolateQuatFloat_Target.h"
#include "RigUnit_MathRBFInterpolateQuatBase.h"
#include "RigUnit_MathRBFInterpolateQuatFloat.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathRBFInterpolateQuatFloat : public FRigUnit_MathRBFInterpolateQuatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMathRBFInterpolateQuatFloat_Target> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Output;
    
    CONTROLRIG_API FRigUnit_MathRBFInterpolateQuatFloat();
};

