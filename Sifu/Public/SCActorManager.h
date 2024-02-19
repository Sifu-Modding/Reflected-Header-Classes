#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SCActorManager.generated.h"

class AActor;

UCLASS(Blueprintable)
class SIFU_API USCActorManager : public UObject {
    GENERATED_BODY()
public:
    USCActorManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnActorDestroyed(AActor* _actorDestroyed);
    
};

