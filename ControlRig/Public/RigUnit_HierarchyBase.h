#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_HierarchyBase.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_HierarchyBase : public FRigUnit {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigUnit_HierarchyBase();
};

