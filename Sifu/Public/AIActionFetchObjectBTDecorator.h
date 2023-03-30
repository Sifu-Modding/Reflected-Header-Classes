#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCBTDecorator -FallbackName=SCBTDecorator
#include "AIActionFetchObjectBTDecorator.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAIActionFetchObjectBTDecorator : public USCBTDecorator {
    GENERATED_BODY()
public:
    UAIActionFetchObjectBTDecorator();
};

