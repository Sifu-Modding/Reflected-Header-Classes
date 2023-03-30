#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EBTNodeResult -FallbackName=EBTNodeResult
#include "BaseActorConditionInstance.h"
#include "BTTaskNodeRelevancyCondition.generated.h"

USTRUCT(BlueprintType)
struct FBTTaskNodeRelevancyCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseActorConditionInstance m_RelevancyCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBTNodeResult::Type> m_eResultWhenIrrelevant;
    
    SIFU_API FBTTaskNodeRelevancyCondition();
};

