#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "EnvQueryTest_HasComponent.generated.h"

class UActorComponent;

UCLASS()
class SIFU_API UEnvQueryTest_HasComponent : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UActorComponent> m_ComponentClass;
    
public:
    UEnvQueryTest_HasComponent();
};

