#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameState -FallbackName=GameState
#include "SCGameState.generated.h"

UCLASS(Blueprintable)
class SCCORE_API ASCGameState : public AGameState {
    GENERATED_BODY()
public:
    ASCGameState(const FObjectInitializer& ObjectInitializer);

};

