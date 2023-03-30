#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OrderParams.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UOrderParams : public UObject {
    GENERATED_BODY()
public:
    UOrderParams();
};

