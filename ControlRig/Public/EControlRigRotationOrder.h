#pragma once
#include "CoreMinimal.h"
#include "EControlRigRotationOrder.generated.h"

UENUM(BlueprintType)
enum class EControlRigRotationOrder : uint8 {
    XYZ,
    XZY,
    YXZ,
    YZX,
    ZXY,
    ZYX,
};

