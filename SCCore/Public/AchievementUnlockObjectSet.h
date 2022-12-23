#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AchievementUnlockConditionStruct.h"
#include "AchievementUnlockObjectSet.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FAchievementUnlockObjectSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString m_EditorTitle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FGameplayTag, FAchievementUnlockConditionStruct> m_Unlocks;
    
    FAchievementUnlockObjectSet();
};

