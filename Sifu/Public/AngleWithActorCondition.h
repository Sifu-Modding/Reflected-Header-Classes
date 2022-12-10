#pragma once
#include "CoreMinimal.h"
#include "BaseActorTargetCondition.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "EAngleComputeMethod.h"
#include "AngleWithActorCondition.generated.h"

UCLASS()
class SIFU_API UAngleWithActorCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EAngleComputeMethod m_eMethod;
    
    UPROPERTY(EditAnywhere)
    FFloatRange m_AngleRange;
    
    UAngleWithActorCondition();
};

