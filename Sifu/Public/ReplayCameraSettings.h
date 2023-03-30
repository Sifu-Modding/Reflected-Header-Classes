#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CameraFilmbackSettings -FallbackName=CameraFilmbackSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CameraLensSettings -FallbackName=CameraLensSettings
#include "ReplayCameraSettings.generated.h"

USTRUCT(BlueprintType)
struct FReplayCameraSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraLensSettings m_Lens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraFilmbackSettings m_Filmback;
    
    SIFU_API FReplayCameraSettings();
};

