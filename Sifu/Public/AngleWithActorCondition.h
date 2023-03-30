#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "BaseActorTargetCondition.h"
#include "EAngleComputeMethod.h"
#include "AngleWithActorCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAngleWithActorCondition : public UBaseActorTargetCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAngleComputeMethod m_eMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange m_angleRange;
    
    UAngleWithActorCondition();
};

