#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorUnaryOp.h"
#include "RigUnit_MathVectorNegate.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathVectorNegate : public FRigUnit_MathVectorUnaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathVectorNegate();
};

