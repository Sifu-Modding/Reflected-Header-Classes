#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CineCameraActor -FallbackName=CineCameraActor
#include "ReplayCineCameraActor.generated.h"

class UReplayCineCameraComponent;

UCLASS(Blueprintable)
class SIFU_API AReplayCineCameraActor : public ACineCameraActor {
    GENERATED_BODY()
public:
    AReplayCineCameraActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UReplayCineCameraComponent* BPF_GetReplayCineCameraComponent() const;
    
};

