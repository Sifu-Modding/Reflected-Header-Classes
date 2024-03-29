#pragma once
#include "CoreMinimal.h"
#include "VoiceVariationsAkSwitchContainer.generated.h"

USTRUCT(BlueprintType)
struct FVoiceVariationsAkSwitchContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_VoiceVariationsSwitchValues;
    
    SIFU_API FVoiceVariationsAkSwitchContainer();
};

