#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
#include "OrderService.h"
#include "MovementModeOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UMovementModeOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> m_eMovementMode;
    
    UMovementModeOrderService();
};

