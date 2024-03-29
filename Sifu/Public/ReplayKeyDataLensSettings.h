#pragma once
#include "CoreMinimal.h"
#include "ReplayKeyDataLensSettings.generated.h"

USTRUCT(BlueprintType)
struct FReplayKeyDataLensSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFocalLength;
    
    SIFU_API FReplayKeyDataLensSettings();
};

