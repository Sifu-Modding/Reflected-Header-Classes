#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCPoolableActorComponent -FallbackName=SCPoolableActorComponent
#include "ReplicatedSequencerAnimMontage.h"
#include "ReplicatedSequencerAnimMontagePosition.h"
#include "LevelSequenceAnimReplicationComponent.generated.h"

class ULevelSequenceDirector;
class ALevelSequenceActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API ULevelSequenceAnimReplicationComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient)
    TArray<FReplicatedSequencerAnimMontage> m_SequencerMontages;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SequencerMontagesPosition)
    TArray<FReplicatedSequencerAnimMontagePosition> m_SequencerAnimMontagesPosition;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CinematicSlotWeight)
    float m_fCinematicSlotWeight;
    
    UPROPERTY(Replicated, Transient)
    int32 m_iPlayingSequenceId;
    
public:
    ULevelSequenceAnimReplicationComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnReplaySystemRecordingChanged(bool _bIsRecording);
    
private:
    UFUNCTION()
    void OnRep_SequencerMontagesPosition();
    
    UFUNCTION()
    void OnRep_CinematicSlotWeight();
    
public:
    UFUNCTION(BlueprintCallable)
    void BPF_OnSequenceRegisterActor(ALevelSequenceActor* _levelSequenceActor, ULevelSequenceDirector* _director);
    
    UFUNCTION(BlueprintCallable)
    void BPF_OnSequenceFinished(ALevelSequenceActor* _levelSequenceActor);
    
    
    // Fix for true pure virtual functions not being implemented
};

