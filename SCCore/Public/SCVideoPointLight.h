#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointLight -FallbackName=PointLight
#include "SCVideoPointLight.generated.h"

UCLASS(Blueprintable)
class SCCORE_API ASCVideoPointLight : public APointLight {
    GENERATED_BODY()
public:
    ASCVideoPointLight(const FObjectInitializer& ObjectInitializer);

};

