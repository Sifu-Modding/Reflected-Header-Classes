#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EGlobalBehaviors.h"
#include "SpawnerGroupSoundData.h"
#include "AISituationNamedActor.h"
#include "SCImpostorForSave.h"
#include "AIPhaseTransitionData.h"
#include "EFightingState.h"
#include "EAlertLevel.h"
#include "AISituationActor.generated.h"

class AAISpawner;
class ABaseCharacter;
class AAISituationActor;
class UAIFightingComponent;
class USCSaveGameComponent;
class ASpawnerGroup;
class AFightingCharacter;
class ALockableDoor;

UCLASS()
class SIFU_API AAISituationActor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventWithCharacterDynamic, ABaseCharacter*, _character);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAISituationGlobalBehaviorChangedDynamic, AAISituationActor*, SituationChanged, const UAIFightingComponent*, AI, EGlobalBehaviors, NewBehavior);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAISituationDynamicMulticastDelegate, AAISituationActor*, SituationChanged);
    
    UPROPERTY(BlueprintAssignable)
    FAISituationDynamicMulticastDelegate OnSituationActivated;
    
    UPROPERTY(BlueprintAssignable)
    FAISituationDynamicMulticastDelegate OnSituationResolved;
    
    UPROPERTY(BlueprintAssignable)
    FAISituationGlobalBehaviorChangedDynamic OnAnyAiBehaviorChanged;
    
    UPROPERTY(BlueprintAssignable)
    FAISituationDynamicMulticastDelegate OnSituationSpawnedDynamic;
    
    UPROPERTY(BlueprintAssignable)
    FEventWithCharacterDynamic OnAISpawned;
    
    UPROPERTY(BlueprintAssignable)
    FEventWithCharacterDynamic OnAIDeath;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_bHasActiveLDVisibilityOverride;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    USCSaveGameComponent* m_SaveComponent;
    
private:
    UPROPERTY(EditInstanceOnly)
    TArray<ASpawnerGroup*> m_AssociatedSpawnerGroups;
    
    UPROPERTY(EditInstanceOnly)
    TArray<ALockableDoor*> m_AssociatedLockableDoors;
    
    UPROPERTY(EditInstanceOnly)
    TArray<AActor*> m_PositioningPOIs;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bIsLastManAllowed;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bForceLastMan;
    
    UPROPERTY(EditInstanceOnly)
    int32 m_iMinKillBeforeLastMan;
    
    UPROPERTY(AdvancedDisplay, EditInstanceOnly)
    int32 m_iLastManGaugeIncrementValue;
    
    UPROPERTY(AdvancedDisplay, EditInstanceOnly)
    int32 m_iLastManMaxOccuranceCount;
    
    UPROPERTY(EditAnywhere)
    FSpawnerGroupSoundData m_SoundData;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bRepeatBarksWhenExhausted;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bEnableMaxImpostorsLimit;
    
    UPROPERTY(SaveGame)
    TArray<FName> m_SpawnerGroupClearedPathName;
    
    UPROPERTY(SaveGame)
    TArray<FSCImpostorForSave> m_ImpostorToSpawnOnSaveLoaded;
    
    UPROPERTY(SaveGame)
    bool m_bSpawnRequestedOnSaveLoaded;
    
    UPROPERTY(SaveGame)
    int32 m_iCurrentLastManOccuranceCount;
    
    UPROPERTY(EditInstanceOnly)
    bool m_bAutoSpawnedOnSaveLoaded;
    
    UPROPERTY(SaveGame)
    EGlobalBehaviors m_eBehaviorToSetOnSpawn;
    
    UPROPERTY(SaveGame)
    TWeakObjectPtr<AActor> m_targetForHostileBehaviorsOnSpawn;
    
public:
    AAISituationActor();
private:
    UFUNCTION()
    void OnUpdatedFromSaveCallback();
    
public:
    UFUNCTION(BlueprintPure)
    static FAISituationNamedActor Conv_NameToAISituationNamedActor(FName _name);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UnSpawnSituation();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchToFriendly(bool _bFriendly);
    
    UFUNCTION(BlueprintCallable)
    void BPF_SwitchToAbandoning();
    
    UFUNCTION(BlueprintCallable)
    void BPF_SpawnSituation(EGlobalBehaviors _eBehaviorToSetOnSpawn, AActor* _targetForHostileBehaviors, bool _bForce, bool _bSkipBark);
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetSpawnersUsedCount(bool _bIncludeAlerted, bool _bOnlyCurrentlyUsed) const;
    
    UFUNCTION(BlueprintPure)
    void BPF_GetSpawnersUsed(TArray<AAISpawner*>& _outSpawners, bool _bIncludeAlerted, bool _bOnlyCurrentlyUsed) const;
    
    UFUNCTION(BlueprintPure)
    void BPF_GetSpawnerGroupsUsed(TArray<ASpawnerGroup*>& _outSpawnerGroups) const;
    
    UFUNCTION(BlueprintPure)
    AActor* BPF_GetNamedActor(const FAISituationNamedActor& _namedActor) const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetAis(TArray<UAIFightingComponent*>& _outAiComponents, bool _bIncludeAlertedSpawners, bool _bAppendToArray, bool _bIncludeAbandonningAIs) const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_EnableHitOnAI(bool _bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BPF_ChangeAiPerception(bool _bActivate);
    
    UFUNCTION(BlueprintPure)
    bool BPF_AreAllSpawnerGroupsCleared() const;
    
    UFUNCTION(BlueprintCallable)
    void BPF_AddNamedActor(AActor* _actor, FName _name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_UpdateLDVisibilityOverride(bool _bVisibility);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnStartAIPhaseChanged(AFightingCharacter* _fightingChar, const FAIPhaseTransitionData& _phaseTransition);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnInteractiveDialogInterrupted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnEndAIPhaseChanged(AFightingCharacter* _fightingChar, int32 _iPreviousPhaseIndex, int32 _iCurrentPhaseIndex, FName _currentPhaseName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnAIPhaseChangeSequenceFinished(AFightingCharacter* _fightingChar, const FAIPhaseTransitionData& _phaseTransition);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnAIFightingStateChanged(AFightingCharacter* _fightingChar, EFightingState _ePreviousFightingState, EFightingState _eNewFightingState);
    
private:
    UFUNCTION()
    void AlertLevelChangedCallback(EAlertLevel _eNewLevel);
    
};

