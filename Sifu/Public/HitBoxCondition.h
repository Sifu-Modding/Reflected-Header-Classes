#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HitBoxCondition.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UHitBoxCondition : public UObject {
    GENERATED_BODY()
public:
    UHitBoxCondition();

};

