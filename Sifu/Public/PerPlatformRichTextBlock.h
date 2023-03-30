#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RichTextBlock -FallbackName=RichTextBlock
#include "PerPlatformWidget.h"
#include "PerPlatformRichTextBlock.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UPerPlatformRichTextBlock : public URichTextBlock, public IPerPlatformWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* NormalTextStyleSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SmallScreenTextStyleSet;
    
    UPerPlatformRichTextBlock();
    
    // Fix for true pure virtual functions not being implemented
};

