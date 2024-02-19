#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ReplayingCamera.generated.h"

UCLASS(Blueprintable)
class SIFU_API AReplayingCamera : public AActor {
    GENERATED_BODY()
public:
    AReplayingCamera(const FObjectInitializer& ObjectInitializer);

};

