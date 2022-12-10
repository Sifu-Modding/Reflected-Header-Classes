#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "ComboTransitions.h"
#include "ComboStartNode.generated.h"

USTRUCT(BlueprintType)
struct FComboStartNode {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FSCUserDefinedEnumHandler m_EnumState;
    
    UPROPERTY(VisibleAnywhere)
    FComboTransitions m_ComboTransitions;
    
    UPROPERTY(VisibleAnywhere)
    FName m_PhaseName;
    
    UPROPERTY(VisibleAnywhere)
    uint32 m_uiMCDominationFlags;
    
    SIFU_API FComboStartNode();
};

