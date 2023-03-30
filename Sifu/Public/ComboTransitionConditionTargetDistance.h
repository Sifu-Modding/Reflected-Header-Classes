#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCMathExpressionFloat -FallbackName=SCMathExpressionFloat
#include "ComboTransitionCondition.h"
#include "ComboTransitionConditionTargetDistance.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UComboTransitionConditionTargetDistance : public UComboTransitionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCMathExpressionFloat m_condition;
    
    UComboTransitionConditionTargetDistance();
};

