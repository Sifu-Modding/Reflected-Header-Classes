#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCDelegate -FallbackName=SCDelegate
#include "VolumesArray.h"
#include "EDownState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ArenaHardpointAreaActor.generated.h"

class UPrimitiveComponent;
class UCharacterHealthComponent;
class USceneComponent;
class AFightingCharacter;
class ASCVolume;
class AAISituationActor;

UCLASS()
class SIFU_API AArenaHardpointAreaActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnScoreMultiplierChanged;
    
    UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnEnemyPresenceInsideHardpointChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TArray<ASCVolume*> m_ChildrenVolumes;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsActive;
    
    UPROPERTY(BlueprintReadOnly)
    float m_fCurrentScoreMultiplier;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bIsAnyEnemyInsideHardpoint;
    
private:
    UPROPERTY(Instanced)
    USceneComponent* m_RootComponent;
    
    UPROPERTY()
    TMap<AFightingCharacter*, FVolumesArray> m_overlappedVolumesPerEnemy;
    
public:
    AArenaHardpointAreaActor();
private:
    UFUNCTION()
    void OnOverlappingEnemyDown(UCharacterHealthComponent* _healthComponent, EDownState _eState);
    
    UFUNCTION()
    void OnHardpointSituationResolved(AAISituationActor* _situationChanged);
    
    UFUNCTION()
    void OnChildComponentStartOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
    UFUNCTION()
    void OnChildComponentEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex);
    
public:
    UFUNCTION(BlueprintPure)
    TArray<ASCVolume*> GetAreaVolumes() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_HasBeenCaptured() const;
    
    UFUNCTION(BlueprintPure)
    bool BPF_GetIsActive() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetCurrentCaptureRatio() const;
    
    UFUNCTION(BlueprintPure)
    float BPF_GetCaptureValue() const;
    
    UFUNCTION(BlueprintPure)
    FName BPF_GetAreaName() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnStopCapturing();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnStartCapturing(float _CurrentScore);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnScoreCaptureValueChanged(float _fCurrentValue, float _fMaxValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnReactivate();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnHardpointCaptured();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnDeactivate();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnActivate();
    
};

