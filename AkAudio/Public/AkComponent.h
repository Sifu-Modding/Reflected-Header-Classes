#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "AkExternalSourceInfo.h"
#include "AkGameObject.h"
#include "ERTPCValueType.h"
#include "AkComponent.generated.h"

class AActor;
class UAkAudioEvent;
class UAkAuxBus;
class UAkComponent;
class UAkRtpc;
class UAkSwitchValue;
class UAkTrigger;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkComponent : public UAkGameObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSpatialAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> OcclusionCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EnableSpotReflectors: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAuxBus* EarlyReflectionAuxBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EarlyReflectionAuxBusName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EarlyReflectionOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EarlyReflectionBusSendGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EarlyReflectionMaxPathLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float roomReverbAuxBusGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 diffractionMaxEdges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 diffractionMaxPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float diffractionMaxPathLength;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DrawFirstOrderReflections: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DrawSecondOrderReflections: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DrawHigherOrderReflections: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DrawDiffraction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopWhenOwnerDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttenuationScalingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OcclusionRefreshInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseReverbVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateReverbVolumesLocation;
    
    UAkComponent();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void UseReverbVolumes(bool inUseReverbVolumes);
    
    UFUNCTION(BlueprintCallable)
    void UseEarlyReflections(UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const FString& AuxBusName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetSwitch(UAkSwitchValue* SwitchValue, const FString& SwitchGroup, const FString& SwitchState, const bool _bReplicates);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetRTPCValue(UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, const FString& RTPC, const bool _bReplicates);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetOutputBusVolume(float BusVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetListeners(const TArray<UAkComponent*>& Listeners);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetEarlyReflectionsVolume(float SendVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetEarlyReflectionsAuxBus(const FString& AuxBusName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetAttenuationScalingFactor(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PostTrigger(UAkTrigger* TriggerValue, const FString& Trigger);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void PostAssociatedAkEventAndWaitForEndAsync(int32& PlayingID, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    int32 PostAssociatedAkEventAndWaitForEnd(const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 PostAkEventByName(const FString& in_EventName);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void PostAkEventAndWaitForEndAsync(UAkAudioEvent* AkEvent, int32& PlayingID, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    int32 PostAkEventAndWaitForEnd(UAkAudioEvent* AkEvent, const FString& in_EventName, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnComponentStartOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void GetRTPCValue(UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, const FString& RTPC, int32 PlayingID);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    float GetAttenuationRadius() const;
    
};

