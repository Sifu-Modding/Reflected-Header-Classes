#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBinaryOp.h"
#include "RigUnit_MathFloatMod.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathFloatMod : public FRigUnit_MathFloatBinaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathFloatMod();
};

