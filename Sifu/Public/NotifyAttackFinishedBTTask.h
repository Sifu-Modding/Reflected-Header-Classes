#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "NotifyAttackFinishedBTTask.generated.h"

UCLASS(Blueprintable)
class SIFU_API UNotifyAttackFinishedBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UNotifyAttackFinishedBTTask();

};

