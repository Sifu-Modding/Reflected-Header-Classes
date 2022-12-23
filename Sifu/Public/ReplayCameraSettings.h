#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CameraLensSettings -FallbackName=CameraLensSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CameraFilmbackSettings -FallbackName=CameraFilmbackSettings
#include "ReplayCameraSettings.generated.h"

USTRUCT(BlueprintType)
struct FReplayCameraSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FCameraLensSettings m_Lens;
    
    UPROPERTY(EditDefaultsOnly)
    FCameraFilmbackSettings m_Filmback;
    
    SIFU_API FReplayCameraSettings();
};

