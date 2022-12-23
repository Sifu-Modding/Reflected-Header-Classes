#pragma once
#include "CoreMinimal.h"
#include "AkGameObject.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "AkExternalSourceInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "ERTPCValueType.h"
#include "AkComponent.generated.h"

class UAkRtpc;
class UAkSwitchValue;
class AActor;
class UAkAuxBus;
class UAkTrigger;
class UAkComponent;
class UAkAudioEvent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkComponent : public UAkGameObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bUseSpatialAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> OcclusionCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 EnableSpotReflectors: 1;
    
private:
    UPROPERTY(EditAnywhere)
    UAkAuxBus* EarlyReflectionAuxBus;
    
    UPROPERTY(EditAnywhere)
    FString EarlyReflectionAuxBusName;
    
    UPROPERTY(VisibleAnywhere)
    int32 EarlyReflectionOrder;
    
    UPROPERTY(EditAnywhere)
    float EarlyReflectionBusSendGain;
    
    UPROPERTY(VisibleAnywhere)
    float EarlyReflectionMaxPathLength;
    
    UPROPERTY(VisibleAnywhere)
    float roomReverbAuxBusGain;
    
    UPROPERTY(VisibleAnywhere)
    int32 diffractionMaxEdges;
    
    UPROPERTY(VisibleAnywhere)
    int32 diffractionMaxPaths;
    
    UPROPERTY(VisibleAnywhere)
    float diffractionMaxPathLength;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 DrawFirstOrderReflections: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 DrawSecondOrderReflections: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 DrawHigherOrderReflections: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 DrawDiffraction: 1;
    
    UPROPERTY()
    bool StopWhenOwnerDestroyed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AttenuationScalingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OcclusionRefreshInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseReverbVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
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
    UFUNCTION()
    void OnComponentStartOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void OnComponentEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void GetRTPCValue(UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, const FString& RTPC, int32 PlayingID);
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    float GetAttenuationRadius() const;
    
};

