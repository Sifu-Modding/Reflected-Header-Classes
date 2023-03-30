#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathTransformUnaryOp.h"
#include "RigUnit_MathTransformInverse.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathTransformInverse : public FRigUnit_MathTransformUnaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathTransformInverse();
};

