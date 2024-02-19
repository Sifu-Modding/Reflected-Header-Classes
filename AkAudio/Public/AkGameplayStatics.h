#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAttachLocation -FallbackName=EAttachLocation
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "AkActionOnEventType.h"
#include "AkChannelConfiguration.h"
#include "AkChannelMask.h"
#include "AkExternalSourceInfo.h"
#include "AkMultiPositionType.h"
#include "EAkCurveInterpolation.h"
#include "ERTPCValueType.h"
#include "OnAkBankCallbackDelegate.h"
#include "OnAkPostEventCallbackDelegate.h"
#include "OnSetCurrentAudioCultureCallbackDelegate.h"
#include "PanningRule.h"
#include "AkGameplayStatics.generated.h"

class AActor;
class UAkAudioBank;
class UAkAudioEvent;
class UAkAudioType;
class UAkAuxBus;
class UAkComponent;
class UAkMediaAsset;
class UAkRtpc;
class UAkStateValue;
class UAkSwitchValue;
class UAkTrigger;
class UObject;
class USceneComponent;

UCLASS(Blueprintable)
class AKAUDIO_API UAkGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAkGameplayStatics();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void UseReverbVolumes(bool inUseReverbVolumes, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void UseEarlyReflections(AActor* Actor, UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const FString& AuxBusName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void UnloadBankByName(const FString& BankName);
    
    UFUNCTION(BlueprintCallable)
    static void UnloadBankAsync(UAkAudioBank* Bank, const FOnAkBankCallback& BankUnloadedCallback);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void UnloadBank(UAkAudioBank* Bank, const FString& BankName, FLatentActionInfo LatentInfo, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopProfilerCapture();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopOutputCapture();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void StopAllAmbientSounds(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopAll();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StartProfilerCapture(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StartOutputCapture(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void StartAllAmbientSounds(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UAkComponent* SpawnAkComponentAtLocation(UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, const FString& EventName, bool AutoDestroy, const bool _bReplicates);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetSwitch(UAkSwitchValue* SwitchValue, AActor* Actor, FName SwitchGroup, FName SwitchState, const bool bReplicates);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="_worldContextObject"))
    static void SetState(UAkStateValue* StateValue, FName StateGroup, FName State, const UObject* _worldContextObject, const bool bReplicates, const bool bSaveGame);
    
    UFUNCTION(BlueprintCallable)
    static void SetSpeakerAngles(const TArray<float>& SpeakerAngles, float HeightAngle, const FString& DeviceShareset);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="_worldContextObject"))
    static void SetRTPCValue(UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, AActor* Actor, FName RTPC, const UObject* _worldContextObject, const bool _bReplicates);
    
    UFUNCTION(BlueprintCallable)
    static void SetReflectionsOrder(int32 Order, bool RefreshPaths);
    
    UFUNCTION(BlueprintCallable)
    static void SetPanningRule(PanningRule PanRule);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetOutputBusVolume(float BusVolume, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void SetOcclusionScalingFactor(float ScalingFactor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetOcclusionRefreshInterval(float RefreshInterval, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void SetMultiplePositions(UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    
    UFUNCTION(BlueprintCallable)
    static void SetMultipleChannelMaskEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<FAkChannelMask> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    
    UFUNCTION(BlueprintCallable)
    static void SetMultipleChannelEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentAudioCultureAsync(const FString& AudioCulture, const FOnSetCurrentAudioCultureCallback& Completed);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SetCurrentAudioCulture(const FString& AudioCulture, FLatentActionInfo LatentInfo, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetBusConfig(const FString& BusName, AkChannelConfiguration ChannelConfiguration);
    
    UFUNCTION(BlueprintCallable)
    static UAkComponent* SCGetAkComponent(USceneComponent* AttachToComponent, bool& ComponentCreated);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ResetRTPCValue(UAkRtpc* RTPCValue, int32 InterpolationTimeMs, AActor* Actor, FName RTPC);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PostTrigger(UAkTrigger* TriggerValue, AActor* Actor, FName Trigger);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PostEventByName(const FString& EventName, AActor* Actor, bool bStopWhenAttachedToDestroyed);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostEventAttached(UAkAudioEvent* AkEvent, AActor* Actor, FName AttachPointName, bool bStopWhenAttachedToDestroyed, const FString& EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void PostEventAtLocationByName(const FString& EventName, FVector Location, FRotator Orientation, UObject* WorldContextObject, const bool _bReplicates);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static int32 PostEventAtLocation(UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, const FString& EventName, UObject* WorldContextObject, const bool _bReplicates);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostEvent(UAkAudioEvent* AkEvent, AActor* Actor, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, const FString& EventName, const bool _bReplicates);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void PostAndWaitForEndOfEventAsync(UAkAudioEvent* AkEvent, AActor* Actor, int32& PlayingID, bool bStopWhenAttachedToDestroyed, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static int32 PostAndWaitForEndOfEvent(UAkAudioEvent* AkEvent, AActor* Actor, bool bStopWhenAttachedToDestroyed, const TArray<FAkExternalSourceInfo>& ExternalSources, const FString& EventName, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void LoadInitBank();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void LoadBanks(const TArray<UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void LoadBankByName(const FString& BankName);
    
    UFUNCTION(BlueprintCallable)
    static void LoadBankAsync(UAkAudioBank* Bank, const FOnAkBankCallback& BankLoadedCallback);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LoadBank(UAkAudioBank* Bank, const FString& BankName, FLatentActionInfo LatentInfo, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsGame(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEditor();
    
    UFUNCTION(BlueprintCallable)
    static void GetSpeakerAngles(TArray<float>& SpeakerAngles, float& HeightAngle, const FString& DeviceShareset);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void GetRTPCValue(UAkRtpc* RTPCValue, int32 PlayingID, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, AActor* Actor, FName RTPC);
    
    UFUNCTION(BlueprintCallable)
    static float GetOcclusionScalingFactor();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCurrentAudioCulture();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetAvailableAudioCultures();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<FString, FText> GetAkSupportedLanguagesWithDisplayText();
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetAkMediaAssetUserData(const UAkMediaAsset* Instance, const UClass* Type);
    
    UFUNCTION(BlueprintCallable)
    static UAkComponent* GetAkComponent(USceneComponent* AttachToComponent, bool& ComponentCreated, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetAkAudioTypeUserData(const UAkAudioType* Instance, const UClass* Type);
    
    UFUNCTION(BlueprintCallable)
    static void ForceAkAudioDeviceUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ExecuteActionOnPlayingID(AkActionOnEventType ActionType, int32 PlayingID, int32 TransitionDuration, EAkCurveInterpolation FadeCurve);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ExecuteActionOnEvent(UAkAudioEvent* AkEvent, AkActionOnEventType ActionType, AActor* Actor, int32 TransitionDuration, EAkCurveInterpolation FadeCurve, int32 PlayingID);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ClearBanks();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void CancelEventCallback(const FOnAkPostEventCallback& PostEventCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void AddOutputCaptureMarker(const FString& MarkerText);
    
};

