#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntBinaryOp.h"
#include "RigUnit_MathIntPow.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathIntPow : public FRigUnit_MathIntBinaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathIntPow();
};

