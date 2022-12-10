#pragma once
#include "CoreMinimal.h"
#include "EReplayKeyCutType.h"
#include "ReplayKeyCutData.generated.h"

USTRUCT(BlueprintType)
struct FReplayKeyCutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    EReplayKeyCutType m_eCutType;
    
    SIFU_API FReplayKeyCutData();
};

