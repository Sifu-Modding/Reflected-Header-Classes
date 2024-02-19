#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=AnchorData -FallbackName=AnchorData
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=CanvasPanelSlot -FallbackName=CanvasPanelSlot
#include "PerPlatformCanvaPanelSlot.generated.h"

UCLASS(Blueprintable)
class UPerPlatformCanvaPanelSlot : public UCanvasPanelSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnchorData NormalLayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnchorData SmallScreenLayoutData;
    
    UPerPlatformCanvaPanelSlot();

};

