#pragma once
#include "CoreMinimal.h"
#include "ArenaParams.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ArenaManagerBlueprintHelper.generated.h"

class UArenaChallengeDescription;
class UBaseArenaObjective;

UCLASS(BlueprintType)
class SIFU_API UArenaManagerBlueprintHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UArenaManagerBlueprintHelper();
    UFUNCTION(BlueprintCallable)
    static void BPF_SetChallengeIndex(int32 _iChallengeIndex);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_SetArena(FGameplayTag _arenaTag);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_OnCurrentChallengeSpecificLevelLoaded();
    
    UFUNCTION(BlueprintCallable)
    static int32 BPF_GetMaxAICharactersPerPool();
    
    UFUNCTION(BlueprintPure)
    static FArenaParams BPF_GetCurrentParams();
    
    UFUNCTION(BlueprintPure)
    static UBaseArenaObjective* BPF_GetCurrentMasterObjective();
    
    UFUNCTION(BlueprintPure)
    static int32 BPF_GetCurrentChallengeIndex();
    
    UFUNCTION(BlueprintPure)
    static UArenaChallengeDescription* BPF_GetCurrentChallenge();
    
    UFUNCTION(BlueprintPure)
    static FGameplayTag BPF_GetCurrentArena();
    
    UFUNCTION(BlueprintCallable)
    static int32 BPF_GetChallengeHighScore(UArenaChallengeDescription* _challengeDescription);
    
};

