#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCActor -FallbackName=SCActor
#include "LDCameraActor.generated.h"

UCLASS(Blueprintable)
class SIFU_API ALDCameraActor : public ASCActor {
    GENERATED_BODY()
public:
    ALDCameraActor();
};

