#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ECharacterGender -FallbackName=ECharacterGender
#include "ReplayVoiceReplication.generated.h"

USTRUCT(BlueprintType)
struct FReplayVoiceReplication {
    GENERATED_BODY()
public:
    UPROPERTY()
    ECharacterGender m_eGender;
    
    UPROPERTY()
    FName m_VoiceArchetypeSwitchName;
    
    UPROPERTY()
    FName m_VoiceVariationSwitchName;
    
    SIFU_API FReplayVoiceReplication();
};

