#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorUnaryOp.h"
#include "RigUnit_MathVectorAbs.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathVectorAbs : public FRigUnit_MathVectorUnaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathVectorAbs();
};

