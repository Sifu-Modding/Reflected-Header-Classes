#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_DebugBase.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_DebugBase : public FRigUnit {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_DebugBase();
};

