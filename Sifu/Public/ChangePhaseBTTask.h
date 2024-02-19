#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "ChangePhaseBTTask.generated.h"

UCLASS(Blueprintable)
class SIFU_API UChangePhaseBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UChangePhaseBTTask();

};

