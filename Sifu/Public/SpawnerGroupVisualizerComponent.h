#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SpawnerGroupVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API USpawnerGroupVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USpawnerGroupVisualizerComponent(const FObjectInitializer& ObjectInitializer);

};

