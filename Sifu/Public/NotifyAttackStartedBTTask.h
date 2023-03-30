#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCBTTaskNode -FallbackName=SCBTTaskNode
#include "NotifyAttackStartedBTTask.generated.h"

UCLASS(Blueprintable)
class SIFU_API UNotifyAttackStartedBTTask : public USCBTTaskNode {
    GENERATED_BODY()
public:
    UNotifyAttackStartedBTTask();
};

