#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBase.h"
#include "RigUnit_MathFloatBase.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathFloatBase : public FRigUnit_MathBase {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathFloatBase();
};

