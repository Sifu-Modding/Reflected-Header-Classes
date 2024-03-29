#pragma once
#include "CoreMinimal.h"
#include "ECameraTeleportationRotationBehavior.generated.h"

UENUM(BlueprintType)
enum class ECameraTeleportationRotationBehavior : uint8 {
    None,
    ResetToOwnerForward,
    KeepRotationLocalToOwner,
};

