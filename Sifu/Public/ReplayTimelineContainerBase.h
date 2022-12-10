#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ReplayTimelineContainerBase.generated.h"

class UReplayWidgetHandler;
class IReplayWidgetHandler;

UCLASS(EditInlineNew)
class SIFU_API UReplayTimelineContainerBase : public UUserWidget {
    GENERATED_BODY()
public:
    UReplayTimelineContainerBase();
protected:
    UFUNCTION(BlueprintPure)
    TScriptInterface<IReplayWidgetHandler> BPF_GetWidgetHandler() const;
    
};

