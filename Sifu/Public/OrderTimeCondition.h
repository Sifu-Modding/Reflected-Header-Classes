#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "BaseActorCondition.h"
#include "EOrderAccessMode.h"
#include "EditableOrderType.h"
#include "OrderTimeCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UOrderTimeCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditableOrderType m_OrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOrderAccessMode m_eAccessMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_ValidTimeRange;
    
    UOrderTimeCondition();
};

