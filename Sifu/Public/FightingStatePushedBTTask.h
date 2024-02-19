#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "FightingStatePushedBTTask.generated.h"

UCLASS(Blueprintable)
class SIFU_API UFightingStatePushedBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UFightingStatePushedBTTask();

};

