#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "PickupObjectBTTask.generated.h"

UCLASS(Blueprintable)
class SIFU_API UPickupObjectBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPickupObjectBTTask();

};

