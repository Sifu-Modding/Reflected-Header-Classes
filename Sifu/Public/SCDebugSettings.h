#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "EGameDifficulty.h"
#include "SCDebugSettings.generated.h"

UCLASS(Blueprintable, Config=User)
class SIFU_API USCDebugSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameDifficulty m_eForcedDifficulty;
    
    USCDebugSettings();

};

