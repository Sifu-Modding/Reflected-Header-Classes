#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBase.h"
#include "RigUnit_MathBoolBase.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathBoolBase : public FRigUnit_MathBase {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathBoolBase();
};

