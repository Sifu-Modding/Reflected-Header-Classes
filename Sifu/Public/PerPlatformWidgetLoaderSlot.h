#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetSwitcherSlot -FallbackName=WidgetSwitcherSlot
#include "EWidgetPlatform.h"
#include "PerPlatformWidgetLoaderSlot.generated.h"

UCLASS(Blueprintable)
class UPerPlatformWidgetLoaderSlot : public UWidgetSwitcherSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetPlatform Platform;
    
    UPerPlatformWidgetLoaderSlot();
};

