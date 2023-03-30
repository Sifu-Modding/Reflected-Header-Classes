#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "RigUnit_DebugBaseMutable.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_DebugBaseMutable : public FRigUnitMutable {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_DebugBaseMutable();
};

