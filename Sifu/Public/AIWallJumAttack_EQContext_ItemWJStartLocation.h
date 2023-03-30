#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext -FallbackName=EnvQueryContext
#include "AIWallJumAttack_EQContext_ItemWJStartLocation.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UAIWallJumAttack_EQContext_ItemWJStartLocation : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UAIWallJumAttack_EQContext_ItemWJStartLocation();
};

