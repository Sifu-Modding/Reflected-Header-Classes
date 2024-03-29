#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ESCRotationWay.h"
#include "RotationWayHelper.generated.h"

UCLASS(Blueprintable)
class SCCORE_API URotationWayHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URotationWayHelper();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESCRotationWay BPF_Mirror(ESCRotationWay _eRotation, bool _bMirror);
    
};

