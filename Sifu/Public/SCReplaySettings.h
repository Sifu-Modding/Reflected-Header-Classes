#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CollisionResponseContainer -FallbackName=CollisionResponseContainer
#include "ReplayKeyDataCameraSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "SCReplaySettings.generated.h"

class UReplaySaveGame;
class ABaseReplayController;
class UObject;

UCLASS(BlueprintType, DefaultConfig, Config=Replay)
class SIFU_API USCReplaySettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<ABaseReplayController> m_PhotoModeGameplayControllerClass;
    
    UPROPERTY(Config, EditAnywhere)
    FString m_ScreenShotFileName;
    
    UPROPERTY(Config, EditAnywhere)
    FString m_ScreenShotDateFormat;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> m_StatesToSaveWhenStartRecording;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> m_RTPCToSaveWhenStartRecording;
    
    UPROPERTY(Config, EditAnywhere)
    FString m_EventToResetRTPCWhenStartRecording;
    
protected:
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UReplaySaveGame> m_ReplaySaveGameClass;
    
    UPROPERTY(Config, EditAnywhere)
    FReplayKeyDataCameraSettings m_DefaultCameraSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FCollisionResponseContainer m_CharacterNoCollisionContainer;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<TEnumAsByte<ECollisionChannel>> m_MeshCollisionsChannels;
    
    UPROPERTY(Config, EditAnywhere)
    FGameplayTag m_ReplayEditorAllowedContentTag;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bReplayEditorBuildEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bPhotomodeBuildEnabled;
    
    UPROPERTY(Config, EditAnywhere)
    bool m_bIsReplayEditorAllowedForPlatform;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FString, FText> m_LocalizedMapName;
    
    UPROPERTY(Config, EditAnywhere)
    int32 m_iReplaySkipTimeNoLoadingScreenMaxFrames;
    
    UPROPERTY(Config, EditAnywhere)
    FFloatRange m_ReplayRecordingTimeRange;
    
public:
    USCReplaySettings();
    UFUNCTION(BlueprintCallable)
    static bool BPF_LocalizeMapName(UPARAM(Ref) FString& _inOutMapName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static bool BPF_IsReplayEditorEnabled(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool BPF_IsPhotomodeEnabled();
    
    UFUNCTION(BlueprintPure)
    static FFloatRange BPF_GetReplayRecordingTimeRangeMS();
    
    UFUNCTION(BlueprintPure)
    static FReplayKeyDataCameraSettings BPF_GetDefaultCameraSettings();
    
};

