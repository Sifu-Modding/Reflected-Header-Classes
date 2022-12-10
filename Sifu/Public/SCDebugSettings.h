#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "EGameDifficulty.h"
#include "SCDebugSettings.generated.h"

UCLASS(Config=User)
class SIFU_API USCDebugSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    EGameDifficulty m_eForcedDifficulty;
    
    USCDebugSettings();
};

