#pragma once
#include "CoreMinimal.h"
#include "EGooglePADStorageMethod.generated.h"

UENUM(BlueprintType)
enum class EGooglePADStorageMethod : uint8 {
    AssetPack_STORAGE_FILES,
    AssetPack_STORAGE_APK,
    AssetPack_STORAGE_UNKNOWN,
    AssetPack_STORAGE_NOT_INSTALLED,
};

