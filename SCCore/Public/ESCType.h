#pragma once
#include "CoreMinimal.h"
#include "ESCType.generated.h"

UENUM(BlueprintType)
enum class ESCType : uint8 {
    Float,
    Vector,
    Color,
    Int,
    Bool,
    None,
};

