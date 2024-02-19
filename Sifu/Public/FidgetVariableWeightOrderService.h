#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "ESpeedState.h"
#include "EditableOrderType.h"
#include "OrderService.h"
#include "FidgetVariableWeightOrderService.generated.h"

class UBlendProfile;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UFidgetVariableWeightOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_EnumLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendProfile* m_DefaultBoneMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditableOrderType m_OrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedState m_eRefSpeedState;
    
    UFidgetVariableWeightOrderService();

};

