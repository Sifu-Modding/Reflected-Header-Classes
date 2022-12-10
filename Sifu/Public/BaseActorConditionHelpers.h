#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BaseActorConditionInstance.h"
#include "BaseActorConditionHelpers.generated.h"

class UObject;
class AActor;

UCLASS(BlueprintType)
class SIFU_API UBaseActorConditionHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBaseActorConditionHelpers();
    UFUNCTION(BlueprintPure)
    static UObject* BPF_GetInstance(const FBaseActorConditionInstance& _instance);
    
    UFUNCTION(BlueprintCallable)
    static bool BPF_Evaluate(const FBaseActorConditionInstance& _instance, AActor* _actor, bool _bDefaultResult);
    
};

