#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ArenaParams.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "ArenaSettings.generated.h"

UCLASS()
class SIFU_API UArenaSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, FArenaParams> m_ArenaParams;
    
    UPROPERTY(EditAnywhere)
    int32 m_iMaxNumberOfDifferentCharacterBP;
    
    UPROPERTY(EditAnywhere)
    int32 m_iNbImpostorPerClasses;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_fDelayBetweenSpawns;
    
    UPROPERTY(EditAnywhere)
    float m_fOutsideVolumeCaptureTimeDelay;
    
    UPROPERTY(EditAnywhere)
    float m_fBaseCaptureSpeedPerSecond;
    
    UPROPERTY(EditAnywhere)
    float m_fCaptureSpeedMultiplierPerScoreMultiplier[3];
    
    UPROPERTY(EditAnywhere)
    float m_fNoEnemyInsideHardpointMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool m_bEnableAllHardpointsEnemiesKilledMultiplier;
    
    UPROPERTY(EditAnywhere)
    float m_fAllHardpointsEnemiesKilledMultiplier;
    
    UPROPERTY(EditAnywhere)
    float m_fDelayBetweenHardpointActivation;
    
    UArenaSettings();
};

