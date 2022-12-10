#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkCommonInitializationSettingsWithSampleRate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AkPlatformInitialisationSettingsBase.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkMacInitializationSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class AKAUDIO_API UAkMacInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;
    
    UAkMacInitializationSettings();
    UFUNCTION()
    void MigrateMultiCoreRendering(bool NewValue);
    
    
    // Fix for true pure virtual functions not being implemented
};

