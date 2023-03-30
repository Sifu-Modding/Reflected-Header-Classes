#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorBinaryOp.h"
#include "RigUnit_MathVectorMin.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathVectorMin : public FRigUnit_MathVectorBinaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathVectorMin();
};

