#pragma once
#include "CoreMinimal.h"
#include "EFightingActionState.h"
#include "EOrderType.h"
#include "AIBTTaskNode.h"
#include "EditableOrderType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "ActionPlayOrderBTTask.generated.h"

UCLASS()
class SIFU_API UActionPlayOrderBTTask : public UAIBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FEditableOrderType m_EnqueueAfterOrder;
    
    UPROPERTY(EditAnywhere)
    FName m_NotifyEventOnBeforeStart;
    
    UPROPERTY(EditAnywhere)
    FName m_NotifyEventOnFinished;
    
    UPROPERTY(EditAnywhere)
    bool m_bNotifyEventOnFinishedOnlyOnSuccess;
    
    UPROPERTY(EditAnywhere)
    FName m_OrderParamsName;
    
    UPROPERTY(EditAnywhere)
    EOrderType m_eOrderType;
    
    UPROPERTY(EditAnywhere)
    FSCUserDefinedEnumHandler m_eOrderTypeBP;
    
    UPROPERTY()
    EFightingActionState m_eActionState;
    
    UPROPERTY(EditAnywhere)
    bool m_bFailIfParamInvalid;
    
    UPROPERTY(EditAnywhere)
    bool m_bWaitForOrderEnd;
    
public:
    UActionPlayOrderBTTask();
};

