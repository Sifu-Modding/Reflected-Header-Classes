#pragma once
#include "CoreMinimal.h"
#include "SlateBrush.h"
#include "SlateWidgetStyle.h"
#include "InlineTextImageStyle.generated.h"

USTRUCT()
struct SLATECORE_API FInlineTextImageStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSlateBrush Image;
    
    UPROPERTY(EditAnywhere)
    int16 Baseline;
    
    FInlineTextImageStyle();
};

