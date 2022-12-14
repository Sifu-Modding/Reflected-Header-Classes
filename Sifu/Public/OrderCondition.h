#pragma once
#include "CoreMinimal.h"
#include "BaseActorCondition.h"
#include "EOrderAccessMode.h"
#include "EOrderType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "OrderCondition.generated.h"

UCLASS()
class SIFU_API UOrderCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EOrderType m_eOrderType;
    
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_BPOrderType;
    
    UPROPERTY(EditAnywhere)
    EOrderAccessMode m_eAccessMode;
    
    UOrderCondition();
};

