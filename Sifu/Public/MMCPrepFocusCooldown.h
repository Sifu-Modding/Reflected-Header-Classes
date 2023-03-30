#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayModMagnitudeCalculation -FallbackName=GameplayModMagnitudeCalculation
#include "MMCPrepFocusCooldown.generated.h"

UCLASS(Blueprintable)
class SIFU_API UMMCPrepFocusCooldown : public UGameplayModMagnitudeCalculation {
    GENERATED_BODY()
public:
    UMMCPrepFocusCooldown();
};

