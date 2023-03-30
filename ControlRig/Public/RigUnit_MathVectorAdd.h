#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorBinaryOp.h"
#include "RigUnit_MathVectorAdd.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathVectorAdd : public FRigUnit_MathVectorBinaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathVectorAdd();
};

