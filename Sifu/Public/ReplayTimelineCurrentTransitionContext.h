#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ReplayTimelineCurrentTransitionContext.generated.h"

USTRUCT(BlueprintType)
struct FReplayTimelineCurrentTransitionContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector2D m_vStartPosition;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D m_vEndPosition;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_bHighlighted;
    
    SIFU_API FReplayTimelineCurrentTransitionContext();
};

