#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AIPhaseNodeHardLink.h"
#include "AIPhaseNodeHelper.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAIPhaseNodeHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAIPhaseNodeHelper();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BPF_GetPhaseNodeIndex(const FAIPhaseNodeHardLink& _nodeHardLink);
    
};

