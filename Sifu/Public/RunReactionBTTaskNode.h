#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "EFightingActionState.h"
#include "EGlobalBehaviors.h"
#include "RunReactionBTTaskNode.generated.h"

UCLASS(Blueprintable)
class SIFU_API URunReactionBTTaskNode : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGlobalBehaviors m_NextBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGlobalBehaviors m_BehaviorToTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFightingActionState m_eActionState;
    
public:
    URunReactionBTTaskNode();
};

