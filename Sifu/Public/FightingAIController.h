#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCPoolableActor -FallbackName=SCPoolableActor
#include "FightingAIController.generated.h"

class AAISpawner;
class AActor;

UCLASS(Blueprintable)
class SIFU_API AFightingAIController : public AAIController, public ISCPoolableActor {
    GENERATED_BODY()
public:
    AFightingAIController();
private:
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdate(const TArray<AActor*>& _updatedActors);
    
    UFUNCTION(BlueprintCallable)
    void AiSpawned(AAISpawner* _spawner);
    
    
    // Fix for true pure virtual functions not being implemented
};

