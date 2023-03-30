#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EAIConditionTraceOffsetContext.h"
#include "AIConditionTraceOffset.generated.h"

USTRUCT(BlueprintType)
struct FAIConditionTraceOffset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIConditionTraceOffsetContext m_eRelativeTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vOffset;
    
    SIFU_API FAIConditionTraceOffset();
};

