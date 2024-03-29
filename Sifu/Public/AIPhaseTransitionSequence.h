#pragma once
#include "CoreMinimal.h"
#include "EAIPhaseTransitionEvents.h"
#include "WGLevelSequence.h"
#include "AIPhaseTransitionSequence.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAIPhaseTransitionSequence : public UWGLevelSequence {
    GENERATED_BODY()
public:
    UAIPhaseTransitionSequence();

protected:
    UFUNCTION(BlueprintCallable)
    void BPF_OnLevelTransition(int32 _iTransitionIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPF_NotifyEvent(EAIPhaseTransitionEvents _event);
    
};

