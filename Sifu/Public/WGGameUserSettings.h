#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DLSSBlueprint -ObjectName=UDLSSMode -FallbackName=UDLSSMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameUserSettings -FallbackName=GameUserSettings
#include "WGGameUserSettings.generated.h"

UCLASS(Blueprintable, Config=User)
class SIFU_API UWGGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDLSSMode DLSSQuality;
    
    UWGGameUserSettings();
};

