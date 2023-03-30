#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_HasComponent.generated.h"

class UActorComponent;

UCLASS(Blueprintable)
class SIFU_API UEnvQueryTest_HasComponent : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActorComponent> m_ComponentClass;
    
public:
    UEnvQueryTest_HasComponent();
};

