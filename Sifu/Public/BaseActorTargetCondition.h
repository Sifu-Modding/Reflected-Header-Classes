#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BaseActorTargetCondition.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UBaseActorTargetCondition : public UObject {
    GENERATED_BODY()
public:
    UBaseActorTargetCondition();
};

