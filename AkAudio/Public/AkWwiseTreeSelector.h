#pragma once
#include "CoreMinimal.h"
#include "OnItemDragDetectedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OnItemSelectionChangedDelegate.h"
#include "AkWwiseTreeSelector.generated.h"

UCLASS(DefaultConfig, Config=Editor)
class AKAUDIO_API UAkWwiseTreeSelector : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnItemSelectionChanged OnSelectionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemDragDetected OnItemDragged;
    
    UAkWwiseTreeSelector();
};

