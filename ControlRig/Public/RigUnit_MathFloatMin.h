#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBinaryOp.h"
#include "RigUnit_MathFloatMin.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathFloatMin : public FRigUnit_MathFloatBinaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathFloatMin();
};

