#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RectLight -FallbackName=RectLight
#include "SCVideoRectLight.generated.h"

UCLASS(Blueprintable)
class SCCORE_API ASCVideoRectLight : public ARectLight {
    GENERATED_BODY()
public:
    ASCVideoRectLight(const FObjectInitializer& ObjectInitializer);

};

