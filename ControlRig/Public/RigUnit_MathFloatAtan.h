#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatUnaryOp.h"
#include "RigUnit_MathFloatAtan.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathFloatAtan : public FRigUnit_MathFloatUnaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathFloatAtan();
};

