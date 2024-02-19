#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "EOrderType.h"
#include "WaitOrderTask.generated.h"

UCLASS(Blueprintable)
class SIFU_API UWaitOrderTask : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EOrderType> m_Orders;
    
    UWaitOrderTask();

};

