#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectoryPath -FallbackName=DirectoryPath
#include "SCDialogPerUserSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class SCDIALOGMANAGERPLUGIN_API USCDialogPerUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath m_DialogProjectPath;
    
    USCDialogPerUserSettings();
};

