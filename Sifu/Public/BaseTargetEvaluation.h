#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ETargetingPrio.h"
#include "BaseTargetEvaluation.generated.h"

class UCurveFloat;

UCLASS(Abstract, Blueprintable)
class SIFU_API UBaseTargetEvaluation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_Curve;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETargetingPrio m_eTargettingType;
    
public:
    UBaseTargetEvaluation();

};

