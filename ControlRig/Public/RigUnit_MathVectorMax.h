#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorBinaryOp.h"
#include "RigUnit_MathVectorMax.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathVectorMax : public FRigUnit_MathVectorBinaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathVectorMax();
};

