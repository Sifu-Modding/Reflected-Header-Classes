#pragma once
#include "CoreMinimal.h"
#include "ESequenceRoleCasting.generated.h"

UENUM(BlueprintType)
enum class ESequenceRoleCasting : uint8 {
    None,
    Role_A,
    Role_B,
    Role_C,
    Role_D,
    Role_E,
    Count,
};

