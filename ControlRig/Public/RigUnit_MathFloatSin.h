#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatUnaryOp.h"
#include "RigUnit_MathFloatSin.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathFloatSin : public FRigUnit_MathFloatUnaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathFloatSin();
};

