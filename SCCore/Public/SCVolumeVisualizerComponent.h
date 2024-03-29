#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SCVolumeVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SCCORE_API USCVolumeVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USCVolumeVisualizerComponent(const FObjectInitializer& ObjectInitializer);

};

