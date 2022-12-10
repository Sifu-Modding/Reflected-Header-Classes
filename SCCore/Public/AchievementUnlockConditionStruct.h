#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AchievementUnlockConditionStruct.generated.h"

USTRUCT(BlueprintType)
struct SCCORE_API FAchievementUnlockConditionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_NotificationTitle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_ObjectDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_UnlockDescription;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagQuery m_ConditionQuery;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag m_UnlockObjectType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_bShowNotificationOnUnlocking;
    
    FAchievementUnlockConditionStruct();
};

