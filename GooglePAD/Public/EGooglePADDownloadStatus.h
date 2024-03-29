#pragma once
#include "CoreMinimal.h"
#include "EGooglePADDownloadStatus.generated.h"

UENUM(BlueprintType)
enum class EGooglePADDownloadStatus : uint8 {
    AssetPack_UNKNOWN,
    AssetPack_DOWNLOAD_PENDING,
    AssetPack_DOWNLOADING,
    AssetPack_TRANSFERRING,
    AssetPack_DOWNLOAD_COMPLETED,
    AssetPack_DOWNLOAD_FAILED,
    AssetPack_DOWNLOAD_CANCELED,
    AssetPack_WAITING_FOR_WIFI,
    AssetPack_NOT_INSTALLED,
    AssetPack_INFO_PENDING,
    AssetPack_INFO_FAILED,
    AssetPack_REMOVAL_PENDING,
    AssetPack_REMOVAL_FAILED,
};

