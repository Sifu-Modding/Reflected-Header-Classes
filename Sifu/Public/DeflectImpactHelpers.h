#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AppliedDeflectImpact.h"
#include "AppliedHitImpact.h"
#include "DeflectImpact.h"
#include "HitImpact.h"
#include "DeflectImpactHelpers.generated.h"

class AFightingCharacter;

UCLASS(Blueprintable)
class UDeflectImpactHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDeflectImpactHelpers();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAppliedHitImpact BPF_MakeAppliedHitImpact(const FHitImpact& _hitImpact, const AFightingCharacter* _defender);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAppliedDeflectImpact BPF_MakeAppliedDeflectImpact(const FDeflectImpact& _hitImpact, const AFightingCharacter* _defender, bool _bParriable);
    
};

