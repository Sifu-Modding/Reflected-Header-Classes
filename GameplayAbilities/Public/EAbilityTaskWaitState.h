#pragma once
#include "CoreMinimal.h"
#include "EAbilityTaskWaitState.generated.h"

UENUM(BlueprintType)
enum class EAbilityTaskWaitState : uint8 {
    WaitingOnGame = 1,
    WaitingOnUser,
    WaitingOnAvatar = 4,
};

