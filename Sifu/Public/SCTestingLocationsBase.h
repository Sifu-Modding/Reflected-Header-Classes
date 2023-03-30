#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SCTestingLocationsBase.generated.h"

UCLASS(Blueprintable)
class SIFU_API ASCTestingLocationsBase : public AActor {
    GENERATED_BODY()
public:
    ASCTestingLocationsBase();
};

