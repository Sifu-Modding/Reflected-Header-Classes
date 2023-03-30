#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBase.h"
#include "RigUnit_MathColorBase.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathColorBase : public FRigUnit_MathBase {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathColorBase();
};

