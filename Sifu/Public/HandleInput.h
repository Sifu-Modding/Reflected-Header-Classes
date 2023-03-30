#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "HandleInput.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UHandleInput : public UInterface {
    GENERATED_BODY()
};

class IHandleInput : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_HandleInput();
    
};

