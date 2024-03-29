#pragma once
#include "CoreMinimal.h"
#include "AkAssetBase.h"
#include "AkAudioBank.generated.h"

class UAkAssetPlatformData;
class UAkAudioEvent;

UCLASS(Blueprintable)
class AKAUDIO_API UAkAudioBank : public UAkAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftObjectPtr<UAkAudioEvent>> LinkedAkEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocalized;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAssetPlatformData* CurrentLocalizedPlatformAssetData;
    
public:
    UAkAudioBank();

};

