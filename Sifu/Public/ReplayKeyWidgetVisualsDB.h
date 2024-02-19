#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ReplayKeyWidgetVisualData.h"
#include "ReplayKeyWidgetVisualKey.h"
#include "ReplayKeyWidgetVisualsDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UReplayKeyWidgetVisualsDB : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FReplayKeyWidgetVisualKey, FReplayKeyWidgetVisualData> m_Visuals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplayKeyWidgetVisualData m_DefaultVisual;
    
public:
    UReplayKeyWidgetVisualsDB();

};

