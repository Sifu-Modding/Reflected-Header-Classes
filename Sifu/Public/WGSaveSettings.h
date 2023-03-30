#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SaveSettings -FallbackName=SaveSettings
#include "GameOptionMappingRange.h"
#include "WGSaveSettings.generated.h"

class UCharacterBuildDB;

UCLASS(Blueprintable)
class SIFU_API UWGSaveSettings : public USaveSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCharacterBuildDB> m_DefaultBuild;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameOptionMappingRange m_GameOptionValue[41];
    
    UWGSaveSettings();
};

