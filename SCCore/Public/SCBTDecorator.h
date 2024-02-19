#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "SCBTDecorator.generated.h"

UCLASS(Abstract, Blueprintable)
class SCCORE_API USCBTDecorator : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEvaluateConditionOnTick;
    
    USCBTDecorator();

};

