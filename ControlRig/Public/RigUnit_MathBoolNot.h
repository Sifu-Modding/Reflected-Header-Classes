#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBoolUnaryOp.h"
#include "RigUnit_MathBoolNot.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathBoolNot : public FRigUnit_MathBoolUnaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathBoolNot();
};

