#pragma once
#include "CoreMinimal.h"
#include "EAIConditionTraceOffsetContext.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AIConditionTraceOffset.generated.h"

USTRUCT(BlueprintType)
struct FAIConditionTraceOffset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EAIConditionTraceOffsetContext m_eRelativeTo;
    
    UPROPERTY(EditAnywhere)
    FVector m_vOffset;
    
    SIFU_API FAIConditionTraceOffset();
};

