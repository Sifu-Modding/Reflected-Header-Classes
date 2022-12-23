#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FilePath -FallbackName=FilePath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectoryPath -FallbackName=DirectoryPath
#include "AkGeometrySurfacePropertiesToMap.h"
#include "AkSettings.generated.h"

class UPhysicalMaterial;

UCLASS(DefaultConfig, Config=Game)
class AKAUDIO_API UAkSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    uint8 MaxSimultaneousReverbVolumes;
    
    UPROPERTY(Config, EditAnywhere)
    FFilePath WwiseProjectPath;
    
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath WwiseSoundDataFolder;
    
    UPROPERTY(Config)
    bool bAutoConnectToWAAPI;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> DefaultOcclusionCollisionChannel;
    
    UPROPERTY(Config, EditAnywhere, EditFixedSize)
    TMap<TSoftObjectPtr<UPhysicalMaterial>, FAkGeometrySurfacePropertiesToMap> AkGeometryMap;
    
    UPROPERTY(Config, EditAnywhere)
    bool SplitSwitchContainerMedia;
    
    UPROPERTY(Config, EditAnywhere)
    bool SplitMediaPerFolder;
    
    UPROPERTY(Config, EditAnywhere)
    bool UseEventBasedPackaging;
    
    UPROPERTY(Config)
    bool EnableAutomaticAssetSynchronization;
    
    UPROPERTY(Config, EditAnywhere)
    FString CommandletCommitMessage;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FString, FText> MapOfWWiseCulture;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FString, FString> UnrealCultureToWwiseCulture;
    
    UPROPERTY(Config)
    bool AskedToUseNewAssetManagement;
    
    UPROPERTY(Config)
    bool bEnableMultiCoreRendering;
    
    UPROPERTY(Config)
    bool MigratedEnableMultiCoreRendering;
    
    UPROPERTY(Config)
    bool FixupRedirectorsDuringMigration;
    
    UPROPERTY(Config)
    FDirectoryPath WwiseWindowsInstallationPath;
    
    UPROPERTY(Config)
    FFilePath WwiseMacInstallationPath;
    
    UPROPERTY(Config)
    float ReverbVolumeUpdateDelay;
    
    UAkSettings();
};

