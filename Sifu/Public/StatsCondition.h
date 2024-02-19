#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCMathExpressionInteger -FallbackName=SCMathExpressionInteger
#include "BaseActorCondition.h"
#include "ECharacterStat.h"
#include "StatsCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UStatsCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterStat m_eStat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCMathExpressionInteger m_MathExpression;
    
    UStatsCondition();

};

