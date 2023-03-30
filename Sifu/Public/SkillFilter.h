#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ENullableCondition -FallbackName=ENullableCondition
#include "SkillFilter.generated.h"

USTRUCT(BlueprintType)
struct FSkillFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENullableCondition m_eAcquired;
    
    SIFU_API FSkillFilter();
};

