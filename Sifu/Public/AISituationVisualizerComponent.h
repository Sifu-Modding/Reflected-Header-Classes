#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "AISituationVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UAISituationVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAISituationVisualizerComponent(const FObjectInitializer& ObjectInitializer);

};

