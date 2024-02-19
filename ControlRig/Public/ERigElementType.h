#pragma once
#include "CoreMinimal.h"
#include "ERigElementType.generated.h"

UENUM(BlueprintType)
enum class ERigElementType : uint8 {
    None,
    Bone,
    Space,
    Control = 4,
    Curve = 8,
    All = 15,
};

