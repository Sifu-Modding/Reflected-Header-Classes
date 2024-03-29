#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpotLight -FallbackName=SpotLight
#include "SCVideoSpotLight.generated.h"

UCLASS(Blueprintable)
class SCCORE_API ASCVideoSpotLight : public ASpotLight {
    GENERATED_BODY()
public:
    ASCVideoSpotLight(const FObjectInitializer& ObjectInitializer);

};

