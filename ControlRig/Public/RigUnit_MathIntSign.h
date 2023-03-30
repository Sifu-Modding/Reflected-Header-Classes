#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntUnaryOp.h"
#include "RigUnit_MathIntSign.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathIntSign : public FRigUnit_MathIntUnaryOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_MathIntSign();
};

