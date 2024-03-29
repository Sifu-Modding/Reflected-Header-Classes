#pragma once
#include "CoreMinimal.h"
#include "EGooglePADCellularDataConfirmStatus.generated.h"

UENUM(BlueprintType)
enum class EGooglePADCellularDataConfirmStatus : uint8 {
    AssetPack_CONFIRM_UNKNOWN,
    AssetPack_CONFIRM_PENDING,
    AssetPack_CONFIRM_USER_APPROVED,
    AssetPack_CONFIRM_USER_CANCELED,
};

