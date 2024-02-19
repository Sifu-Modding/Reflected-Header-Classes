#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCDelegate -FallbackName=SCDelegate
#include "EDownState.h"
#include "VolumesArray.h"
#include "ArenaHardpointAreaActor.generated.h"

class AAISituationActor;
class AFightingCharacter;
class ASCVolume;
class UCharacterHealthComponent;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable)
class SIFU_API AArenaHardpointAreaActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast OnScoreMultiplierChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast OnEnemyPresenceInsideHardpointChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast OnScoreDecreaseStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast OnScoreDecreaseEnded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_HardpointAreaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASCVolume*> m_ChildrenVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCurrentScoreMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsAnyEnemyInsideHardpoint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_RootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AFightingCharacter*, FVolumesArray> m_overlappedVolumesPerEnemy;
    
public:
    AArenaHardpointAreaActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateVolumeBounds();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOverlappingEnemyDown(UCharacterHealthComponent* _healthComponent, EDownState _eState);
    
    UFUNCTION(BlueprintCallable)
    void OnHardpointSituationResolved(AAISituationActor* _situationChanged);
    
    UFUNCTION(BlueprintCallable)
    void OnChildComponentStartOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex, bool _bFromSweep, const FHitResult& _sweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnChildComponentEndOverlap(UPrimitiveComponent* _overlappedComponent, AActor* _otherActor, UPrimitiveComponent* _otherComp, int32 _iOtherBodyIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASCVolume*> GetAreaVolumes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsScoreDecreasing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_IsPlayerCapturing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_HasBeenCaptured() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BPF_GetIsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText BPF_GetHardpointAreaName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetCurrentCaptureRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BPF_GetCaptureValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName BPF_GetAreaName() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_ForceCapture();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnStopCapturing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnStartCapturing(float _CurrentScore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnScoreCaptureValueChanged(float _fCurrentValue, float _fMaxValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnReactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnHardpointCaptured();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnDeactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BFF_GetCurrentCaptureScore() const;
    
};

