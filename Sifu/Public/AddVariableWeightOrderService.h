#pragma once
#include "CoreMinimal.h"
#include "OrderService.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "AddVariableWeightOrderService.generated.h"

class UBlendProfile;

UCLASS(EditInlineNew)
class SIFU_API UAddVariableWeightOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_EnumLayer;
    
    UPROPERTY(EditAnywhere)
    UBlendProfile* m_BoneMask;
    
    UPROPERTY(EditAnywhere)
    UBlendProfile* m_OptionalMirroredBoneMask;
    
    UPROPERTY(EditAnywhere)
    bool m_bRemoveOnOrderServiceStop;
    
    UAddVariableWeightOrderService();
};

