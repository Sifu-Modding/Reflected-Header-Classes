#pragma once
#include "CoreMinimal.h"
#include "SequenceCheckPointData.generated.h"

USTRUCT(BlueprintType)
struct SIFU_API FSequenceCheckPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPlayBackPosition;
    
    FSequenceCheckPointData();
};

