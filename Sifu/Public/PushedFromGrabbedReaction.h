#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "PropertyReactionMovement.h"
#include "PushedFromGrabbedReaction.generated.h"

USTRUCT(BlueprintType)
struct FPushedFromGrabbedReaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyReactionMovement m_Movement;
    
    SIFU_API FPushedFromGrabbedReaction();
};

