#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "TargetableActorHelper.generated.h"

class AActor;

UCLASS(Blueprintable)
class SIFU_API UTargetableActorHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTargetableActorHelper();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector BPF_GetTargetableLocation(const AActor* _actor);
    
};

