#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "OrderServiceFrameRangeRequest.h"
#include "UseFrameRangeFromOrderService.generated.h"

class UOrderService;

UCLASS(EditInlineNew)
class SIFU_API UUseFrameRangeFromOrderService : public UOrderServiceFrameRangeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bOnTarget;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_DefaultRange;
    
    UPROPERTY(EditAnywhere)
    bool m_bKeepDefaultLowerRange;
    
    UPROPERTY(EditAnywhere)
    bool m_bKeepDefaultUpperRange;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOrderService> m_OrderSerice;
    
    UUseFrameRangeFromOrderService();
};

