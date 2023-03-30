#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "HardpointAreaActorVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UHardpointAreaActorVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UHardpointAreaActorVisualizerComponent();
};

