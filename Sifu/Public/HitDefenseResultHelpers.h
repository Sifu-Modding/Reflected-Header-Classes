#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EAvoidType.h"
#include "HitDefenseResult.h"
#include "HitDefenseResultHelpers.generated.h"

class UAvoidPropertyDB;

UCLASS(BlueprintType)
class SIFU_API UHitDefenseResultHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHitDefenseResultHelpers();
    UFUNCTION(BlueprintPure)
    static EAvoidType BPF_GetAvoidType(const FHitDefenseResult& _defenseResult);
    
    UFUNCTION(BlueprintCallable)
    static UAvoidPropertyDB* BPF_GetAvoidDB(const FHitDefenseResult& _defenseResult);
    
};

