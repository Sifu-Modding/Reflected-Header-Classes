#pragma once
#include "CoreMinimal.h"
#include "EDestructibleFractureType.generated.h"

UENUM(BlueprintType)
enum class EDestructibleFractureType : uint8 {
    None,
    Radius,
    Default,
};

