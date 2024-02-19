#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "HittedBTTask.generated.h"

UCLASS(Blueprintable)
class SIFU_API UHittedBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UHittedBTTask();

};

