#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EStretch -FallbackName=EStretch
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EStretchDirection -FallbackName=EStretchDirection
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ScaleBox -FallbackName=ScaleBox
#include "PerPlatformWidget.h"
#include "PerPlatformScaleBox.generated.h"

UCLASS(Blueprintable)
class UPerPlatformScaleBox : public UScaleBox, public IPerPlatformWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStretch::Type> NormalStretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStretch::Type> SmallScreenStretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStretchDirection::Type> NormalStretchDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStretchDirection::Type> SmallScreenStretchDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalUserSpecifiedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmallScreenUserSpecifiedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NormalIgnoreInheritedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SmallScreenIgnoreInheritedScale;
    
    UPerPlatformScaleBox();


    // Fix for true pure virtual functions not being implemented
};

