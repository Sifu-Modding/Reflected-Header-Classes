#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "TraversalBTTask.generated.h"

UCLASS(Abstract)
class SIFU_API UTraversalBTTask : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    InputAction m_CancelOnActionAvailable;
    
public:
    UTraversalBTTask();
};

