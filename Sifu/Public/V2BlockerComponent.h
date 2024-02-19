#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "V2BlockerComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UV2BlockerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UV2BlockerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnActorEndOverlap(AActor* _overlappedActor, AActor* _otherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorBeginOverlap(AActor* _overlappedActor, AActor* _otherActor);
    
};

