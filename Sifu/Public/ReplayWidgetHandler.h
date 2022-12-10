#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ReplayWidgetHandler.generated.h"

class UReplayTimelineModel;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UReplayWidgetHandler : public UInterface {
    GENERATED_BODY()
};

class IReplayWidgetHandler : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual UReplayTimelineModel* BPF_GetTimelineModel() const PURE_VIRTUAL(BPF_GetTimelineModel, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BPF_GetTimelineDilatedTimeBounds(float& _fLowerBound, float& _fUpperBound) const PURE_VIRTUAL(BPF_GetTimelineDilatedTimeBounds,);
    
    UFUNCTION(BlueprintCallable)
    virtual float BPF_GetTimelineDilatedDemoTimeAlpha(float _fDilatedDemoTime) const PURE_VIRTUAL(BPF_GetTimelineDilatedDemoTimeAlpha, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual FVector2D BPF_GetContainerLocalSize() const PURE_VIRTUAL(BPF_GetContainerLocalSize, return FVector2D{};);
    
};

