#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatUnaryOp.h"
#include "RigUnit_MathFloatAbs.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathFloatAbs : public FRigUnit_MathFloatUnaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathFloatAbs();
};

