#pragma once
#include "CoreMinimal.h"
#include "ArenaChallengeScoreUnion.h"
#include "ArenaChallengeRefillDescription.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AchievementUnlockConditionClassInstance -FallbackName=AchievementUnlockConditionClassInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ECharacterGender -FallbackName=ECharacterGender
#include "ArenaChallengeDescription.generated.h"

class UWorld;
class AAIWaveRefillDirector;
class UBaseArenaObjective;

UCLASS(BlueprintType)
class SIFU_API UArenaChallengeDescription : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_Title;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FArenaChallengeScoreUnion> m_ScoreThreshold;
    
    UPROPERTY(EditAnywhere)
    FAchievementUnlockConditionClassInstance m_MasterObjective;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FGameplayTag> m_CheatsToActivate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FGameplayTag, FString> m_CheatArguments;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iAge;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_iDeathCount;
    
    UPROPERTY(EditAnywhere)
    ECharacterGender m_eCharacterGender;
    
    UPROPERTY(EditAnywhere)
    bool m_bOverrideOutfit;
    
    UPROPERTY(EditAnywhere)
    int32 m_iOutfitIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UWorld> m_AIInitialSpawnSublevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FArenaChallengeRefillDescription m_RefillDescription;
    
    UArenaChallengeDescription();
    UFUNCTION(BlueprintPure)
    FArenaChallengeScoreUnion BPF_GetWantedScore(int32 _iLevel) const;
    
    UFUNCTION(BlueprintPure)
    AAIWaveRefillDirector* BPF_GetRefillDirector() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetNbWaves() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetDeathCount() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FGameplayTag> BPF_GetCheatsToActivate() const;
    
    UFUNCTION(BlueprintPure)
    TMap<FGameplayTag, FString> BPF_GetCheatsArguments() const;
    
    UFUNCTION(BlueprintPure)
    UBaseArenaObjective* BPF_GetArenaObjective() const;
    
    UFUNCTION(BlueprintPure)
    int32 BPF_GetAge() const;
    
};

