#pragma once
#include "CoreMinimal.h"
#include "EQuadrantTypes.h"
#include "OrderService.h"
#include "ForceQuadrantOrderService.generated.h"

UCLASS(EditInlineNew)
class SIFU_API UForceQuadrantOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bForceBackFrontOnly;
    
    UPROPERTY(EditAnywhere)
    bool m_bForceFront;
    
    UPROPERTY(EditAnywhere)
    EQuadrantTypes m_eQuadrantToTarget;
    
    UForceQuadrantOrderService();
};

