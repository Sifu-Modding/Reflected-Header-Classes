#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState_TimedParticleEffect -FallbackName=AnimNotifyState_TimedParticleEffect
#include "TimeParticleEffectNotifyStateExtended.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API UTimeParticleEffectNotifyStateExtended : public UAnimNotifyState_TimedParticleEffect {
    GENERATED_BODY()
public:
    UTimeParticleEffectNotifyStateExtended();
};

