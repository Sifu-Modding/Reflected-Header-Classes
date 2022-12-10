#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "HittedDeathOrderService.generated.h"

class UAnimSequence;

UCLASS(EditInlineNew)
class SIFU_API UHittedDeathOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAnimSequence* m_DeathAnimation;
    
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_DeathAnimType;
    
    UPROPERTY(EditAnywhere)
    bool m_bMirrorDeathAnimation;
    
    UPROPERTY(EditAnywhere)
    bool m_bUnspawnNow;
    
    UPROPERTY(EditAnywhere)
    uint32 m_uiDeathTriggeredConditionMask;
    
    UHittedDeathOrderService();
};

