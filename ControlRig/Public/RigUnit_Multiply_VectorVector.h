#pragma once
#include "CoreMinimal.h"
#include "RigUnit_BinaryVectorOp.h"
#include "RigUnit_Multiply_VectorVector.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_Multiply_VectorVector : public FRigUnit_BinaryVectorOp {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_Multiply_VectorVector();
};

