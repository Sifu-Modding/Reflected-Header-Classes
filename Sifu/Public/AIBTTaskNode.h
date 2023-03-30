#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCBTTaskNode -FallbackName=SCBTTaskNode
#include "BTTaskNodeRelevancyCondition.h"
#include "InputAction.h"
#include "AIBTTaskNode.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAIBTTaskNode : public USCBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBTTaskNodeRelevancyCondition> m_RelevancyConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InputAction m_eCancelTaskOnAvailableInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCancelWaitedOrdersOnFinish;
    
public:
    UAIBTTaskNode();
};

