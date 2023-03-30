#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCBaseDemoNetDriver -FallbackName=SCBaseDemoNetDriver
#include "SCDemoNetDriver.generated.h"

UCLASS(Blueprintable, NonTransient)
class SIFU_API USCDemoNetDriver : public USCBaseDemoNetDriver {
    GENERATED_BODY()
public:
    USCDemoNetDriver();
};

