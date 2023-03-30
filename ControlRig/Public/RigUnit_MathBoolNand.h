#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBoolBinaryOp.h"
#include "RigUnit_MathBoolNand.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathBoolNand : public FRigUnit_MathBoolBinaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathBoolNand();
};

