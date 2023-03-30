#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCBTDecorator -FallbackName=SCBTDecorator
#include "EOrderType.h"
#include "OrderRunningDecorator.generated.h"

UCLASS(Blueprintable)
class UOrderRunningDecorator : public USCBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EOrderType> m_eOrders;
    
public:
    UOrderRunningDecorator();
};

