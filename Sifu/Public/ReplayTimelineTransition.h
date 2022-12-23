#pragma once
#include "CoreMinimal.h"
#include "ReplayTimelineContainerBase.h"
#include "ReplayTimelineCurrentTransitionContext.h"
#include "EReplayTransitionElement.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ReplayTimelineIndicatorDisplayProperties.h"
#include "ReplayTimelineTimeDilationData.h"
#include "ReplayTimelineTimeDilationContext.h"
#include "ReplayTimelineTransition.generated.h"

class UReplayKeyWidget;

UCLASS(EditInlineNew)
class SIFU_API UReplayTimelineTransition : public UReplayTimelineContainerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<EReplayTransitionElement> m_DrawOrder;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_DefaultTint;
    
    UPROPERTY(EditDefaultsOnly)
    FLinearColor m_HighlightTint;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bCurrentTransitionAntiAlias;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCurrentTransitionThickness;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FReplayTimelineIndicatorDisplayProperties m_TimeDilationDisplayProperties;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FReplayTimelineTimeDilationContext m_TimeDilationTransitionsContext;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FReplayTimelineCurrentTransitionContext m_CurrentTransitionContext;
    
public:
    UReplayTimelineTransition();
protected:
    UFUNCTION()
    void OnKeyHoverOrSelectStateChanged(const UReplayKeyWidget* _widget);
    
    UFUNCTION()
    void OnDelayedUpdateTransitionForKey(const UReplayKeyWidget* _widget);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BPE_OverrideGenerateTimeDilationIndicatorDilatedTimes(UPARAM(Ref) FReplayTimelineTimeDilationData& _data) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_DrawTimeDilationTransitions();
    
};

