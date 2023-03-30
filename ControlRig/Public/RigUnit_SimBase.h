#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_SimBase.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SimBase : public FRigUnit {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_SimBase();
};

