#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCMathExpressionInteger -FallbackName=SCMathExpressionInteger
#include "AIPhaseTransition.h"
#include "AIPhaseTransitionSituationAiCountChange.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UAIPhaseTransitionSituationAiCountChange : public UAIPhaseTransition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCMathExpressionInteger m_Expression;
    
public:
    UAIPhaseTransitionSituationAiCountChange();
};

