#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntBinaryOp.h"
#include "RigUnit_MathIntMod.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathIntMod : public FRigUnit_MathIntBinaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathIntMod();
};

