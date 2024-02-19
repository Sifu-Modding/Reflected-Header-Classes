#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCPoolableActorComponent -FallbackName=SCPoolableActorComponent
#include "EGlobalBehaviors.h"
#include "DespawnComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UDespawnComponent : public UActorComponent, public ISCPoolableActorComponent {
    GENERATED_BODY()
public:
    UDespawnComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnAiBehaviorChanged(EGlobalBehaviors _eNewBehavior, bool _fromDialog);
    

    // Fix for true pure virtual functions not being implemented
};

