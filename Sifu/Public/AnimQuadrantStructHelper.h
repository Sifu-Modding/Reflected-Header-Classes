#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AnimQuadrantStruct.h"
#include "EQuadrantTypes.h"
#include "AnimQuadrantStructHelper.generated.h"

UCLASS(Blueprintable)
class UAnimQuadrantStructHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimQuadrantStructHelper();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BPF_MakeAnimQuadrantStruct(EQuadrantTypes _eQuadrant, FAnimQuadrantStruct& _outStruct);
    
};

