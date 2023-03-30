#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EvaluateTargetCondition.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SIFU_API UEvaluateTargetCondition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bInverseCondition;
    
    UEvaluateTargetCondition();
};

