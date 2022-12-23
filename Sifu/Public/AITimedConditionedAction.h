#pragma once
#include "CoreMinimal.h"
#include "AIConditionedAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "AITimedConditionedAction.generated.h"

USTRUCT()
struct FAITimedConditionedAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatRange m_TimeRange;
    
    UPROPERTY(EditAnywhere)
    FAIConditionedAction m_Action;
    
    SIFU_API FAITimedConditionedAction();
};

