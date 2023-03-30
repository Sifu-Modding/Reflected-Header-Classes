#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=EditableTextBox -FallbackName=EditableTextBox
#include "PerPlatformWidget.h"
#include "PerPlatformEditableTextBox.generated.h"

UCLASS(Blueprintable)
class UPerPlatformEditableTextBox : public UEditableTextBox, public IPerPlatformWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NormalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SmallScreenSize;
    
    UPerPlatformEditableTextBox();
    
    // Fix for true pure virtual functions not being implemented
};

