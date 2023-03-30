#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CollisionResponseContainer -FallbackName=CollisionResponseContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ReplayKeyDataCameraSettings.h"
#include "SCReplaySettings.generated.h"

class ABaseReplayController;
class UObject;
class UReplaySaveGame;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Replay)
class SIFU_API USCReplaySettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ABaseReplayController> m_PhotoModeGameplayControllerClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_ScreenShotFileName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_ScreenShotDateFormat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_StatesToSaveWhenStartRecording;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_RTPCToSaveWhenStartRecording;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_EventToResetRTPCWhenStartRecording;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UReplaySaveGame> m_ReplaySaveGameClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayKeyDataCameraSettings m_DefaultCameraSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionResponseContainer m_CharacterNoCollisionContainer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ECollisionChannel>> m_MeshCollisionsChannels;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_ReplayEditorAllowedContentTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bReplayEditorBuildEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPhotomodeBuildEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsReplayEditorAllowedForPlatform;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FText> m_LocalizedMapName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iReplaySkipTimeNoLoadingScreenMaxFrames;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_ReplayRecordingTimeRange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDistanceForObjectTransparency;
    
public:
    USCReplaySettings();
    UFUNCTION(BlueprintCallable)
    static bool BPF_LocalizeMapName(UPARAM(Ref) FString& _inOutMapName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_worldContextObject"))
    static bool BPF_IsReplayEditorEnabled(const UObject* _worldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPF_IsPhotomodeEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFloatRange BPF_GetReplayRecordingTimeRangeMS();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FReplayKeyDataCameraSettings BPF_GetDefaultCameraSettings();
    
};

