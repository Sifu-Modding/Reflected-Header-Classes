#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTask_MoveTo -FallbackName=BTTask_MoveTo
#include "MoveToTargetNextAttackRangeBTTask.generated.h"

UCLASS(Blueprintable)
class SIFU_API UMoveToTargetNextAttackRangeBTTask : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
    UMoveToTargetNextAttackRangeBTTask();
};

