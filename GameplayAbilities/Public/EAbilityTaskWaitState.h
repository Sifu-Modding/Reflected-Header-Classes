#pragma once
#include "CoreMinimal.h"
#include "EAbilityTaskWaitState.generated.h"

UENUM(BlueprintType)
enum class EAbilityTaskWaitState : uint8 {
    WaitingOnGame = 0x1,
    WaitingOnUser,
    WaitingOnAvatar = 0x4,
};

