#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "ParriedBTTask.generated.h"

UCLASS(Blueprintable)
class SIFU_API UParriedBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UParriedBTTask();
};

