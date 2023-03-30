#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBinaryOp.h"
#include "RigUnit_MathFloatPow.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathFloatPow : public FRigUnit_MathFloatBinaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathFloatPow();
};

