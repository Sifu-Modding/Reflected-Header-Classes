#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "DeathStandupAnimationFromAnimation.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FDeathStandupAnimationFromAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_DeathAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_StandAnim;
    
    SIFU_API FDeathStandupAnimationFromAnimation();
};

