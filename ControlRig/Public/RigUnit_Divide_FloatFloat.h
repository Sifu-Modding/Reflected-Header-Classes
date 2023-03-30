#pragma once
#include "CoreMinimal.h"
#include "RigUnit_BinaryFloatOp.h"
#include "RigUnit_Divide_FloatFloat.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_Divide_FloatFloat : public FRigUnit_BinaryFloatOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_Divide_FloatFloat();
};

