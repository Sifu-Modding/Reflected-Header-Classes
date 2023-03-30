#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "AbilitySystemDebugHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class AAbilitySystemDebugHUD : public AHUD {
    GENERATED_BODY()
public:
    AAbilitySystemDebugHUD();
};

