#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCBTDecorator -FallbackName=SCBTDecorator
#include "Templates/SubclassOf.h"
#include "CheckTargetPerceptionDecorator.generated.h"

class UAISense;

UCLASS(Blueprintable)
class UCheckTargetPerceptionDecorator : public USCBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_TargetKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UAISense>> m_Senses;
    
    UCheckTargetPerceptionDecorator();
};

