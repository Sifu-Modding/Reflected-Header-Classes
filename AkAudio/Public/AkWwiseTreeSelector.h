#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OnItemDragDetectedDelegate.h"
#include "OnItemSelectionChangedDelegate.h"
#include "AkWwiseTreeSelector.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Editor)
class AKAUDIO_API UAkWwiseTreeSelector : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemSelectionChanged OnSelectionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemDragDetected OnItemDragged;
    
    UAkWwiseTreeSelector();
};

