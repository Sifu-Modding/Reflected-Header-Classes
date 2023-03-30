#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_IsThrowableUsable.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class SIFU_API UEnvQueryTest_IsThrowableUsable : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> m_Target;
    
public:
    UEnvQueryTest_IsThrowableUsable();
};

