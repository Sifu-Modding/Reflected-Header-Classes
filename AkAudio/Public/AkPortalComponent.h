#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "AkPortalComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkPortalComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UAkPortalComponent(const FObjectInitializer& ObjectInitializer);

};

