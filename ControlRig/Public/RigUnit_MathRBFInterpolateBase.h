#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBase.h"
#include "RigUnit_MathRBFInterpolateBase.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathRBFInterpolateBase : public FRigUnit_MathBase {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathRBFInterpolateBase();
};

