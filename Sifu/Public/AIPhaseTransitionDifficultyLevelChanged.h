#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCMathExpressionFloat -FallbackName=SCMathExpressionFloat
#include "AIPhaseTransition.h"
#include "AIPhaseTransitionDifficultyLevelChanged.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UAIPhaseTransitionDifficultyLevelChanged : public UAIPhaseTransition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCMathExpressionFloat m_Expression;
    
public:
    UAIPhaseTransitionDifficultyLevelChanged();
};

