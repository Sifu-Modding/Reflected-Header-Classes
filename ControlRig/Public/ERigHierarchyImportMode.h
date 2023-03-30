#pragma once
#include "CoreMinimal.h"
#include "ERigHierarchyImportMode.generated.h"

UENUM(BlueprintType)
enum class ERigHierarchyImportMode : uint8 {
    Append,
    Replace,
    ReplaceLocalTransform,
    ReplaceGlobalTransform,
    Max,
};

