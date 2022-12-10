#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ECharacterGender -FallbackName=ECharacterGender
#include "SCImpostorForSave.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FSCImpostorForSave {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    FName m_PoolName;
    
    UPROPERTY(SaveGame)
    TSoftObjectPtr<USkeletalMesh> m_ImpostorSkeletalMesh;
    
    UPROPERTY(SaveGame)
    FTransform m_Transform;
    
    UPROPERTY(SaveGame)
    FName m_StreamLevelName;
    
    UPROPERTY(SaveGame)
    FName m_VoiceArchetypeSwitchName;
    
    UPROPERTY(SaveGame)
    ECharacterGender m_eGender;
    
    UPROPERTY(SaveGame)
    FName m_VoiceVariationSwitchValue;
    
    SIFU_API FSCImpostorForSave();
};

