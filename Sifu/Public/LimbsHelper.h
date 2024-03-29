#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ELimbs.h"
#include "LimbsHelper.generated.h"

UCLASS(Blueprintable)
class SIFU_API ULimbsHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULimbsHelper();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ELimbs BPF_Mirror(ELimbs _eLimb, bool _bMirror);
    
};

