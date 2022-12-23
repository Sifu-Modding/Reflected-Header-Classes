#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InputMappingProfileEnumHandler.h"
#include "FilterProperties.h"
#include "SaveAdditionalInfos.h"
#include "InputMappingProfileData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "ProfileData.generated.h"

class USkillGameplayEffect;

USTRUCT(BlueprintType)
struct FProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame, VisibleAnywhere)
    TArray<FFilterProperties> m_FilterPresets;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    float m_GameOptions[41];
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    TMap<FString, FSaveAdditionalInfos> m_SaveAdditionalInfoMap;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    FInputMappingProfileEnumHandler m_GamepadProfile;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    FInputMappingProfileEnumHandler m_KeyboardProfile;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FInputMappingProfileData m_GamepadCustomMapping;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FInputMappingProfileData m_KeyboardCustomMapping;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    bool m_bInputHoldToggleActivated;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FGameplayTagContainer m_UnlockedCheats;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    TMap<TSubclassOf<USkillGameplayEffect>, int32> m_SkillConsolidationLevel;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    int32 m_iCheatUnlockPoints;
    
    SIFU_API FProfileData();
};

