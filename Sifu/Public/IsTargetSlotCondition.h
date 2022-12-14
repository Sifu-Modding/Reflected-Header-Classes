#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "BaseActorTargetCondition.h"
#include "IsTargetSlotCondition.generated.h"

UCLASS()
class SIFU_API UIsTargetSlotCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_Slot;
    
    UIsTargetSlotCondition();
};

