#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BaseDirectionalTargetWeightEvaluation.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UBaseDirectionalTargetWeightEvaluation : public UObject {
    GENERATED_BODY()
public:
    UBaseDirectionalTargetWeightEvaluation();

};

