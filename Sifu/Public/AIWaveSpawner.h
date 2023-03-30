#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AISpawner.h"
#include "EAIArchetype.h"
#include "EGlobalBehaviors.h"
#include "AIWaveSpawner.generated.h"

UCLASS(Blueprintable)
class SIFU_API AAIWaveSpawner : public AAISpawner {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iArchetypesMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_WaveTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGlobalBehaviors m_eGlobalBehaviorAtSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAllowSpawnWhileVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHasPriorityIfVisible;
    
public:
    AAIWaveSpawner();
    UFUNCTION(BlueprintCallable)
    void BPF_SetArchetypeToSpawn(EAIArchetype _eArchetype);
    
};

