#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ESCRotationWay -FallbackName=ESCRotationWay
#include "TurnAnimation.generated.h"

USTRUCT(BlueprintType)
struct FTurnAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_animContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCRotationWay m_eRotationWay;
    
    SIFU_API FTurnAnimation();
};

