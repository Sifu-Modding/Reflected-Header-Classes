#include "MagicLeapARPinRenderer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AMagicLeapARPinRenderer::AMagicLeapARPinRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bInfoActorsVisibilityOverride = true;
}

void AMagicLeapARPinRenderer::SetVisibilityOverride(const bool InVisibilityOverride) {
}


