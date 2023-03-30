#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SCFootIkService.generated.h"

UCLASS(Abstract, Blueprintable)
class SCCORE_API USCFootIkService : public UObject {
    GENERATED_BODY()
public:
    USCFootIkService();
};

