#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "ESCTestDistance.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_DistanceFromBounding.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class UEnvQueryTest_DistanceFromBounding : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCTestDistance TestMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> DistanceTo;
    
    UEnvQueryTest_DistanceFromBounding();

};

