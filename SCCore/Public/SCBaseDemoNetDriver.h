#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DemoNetDriver -FallbackName=DemoNetDriver
#include "SCBaseDemoNetDriver.generated.h"

UCLASS(Blueprintable, NonTransient)
class SCCORE_API USCBaseDemoNetDriver : public UDemoNetDriver {
    GENERATED_BODY()
public:
    USCBaseDemoNetDriver();

};

