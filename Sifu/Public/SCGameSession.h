#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameSession -FallbackName=GameSession
#include "SCGameSession.generated.h"

UCLASS(Blueprintable)
class SIFU_API ASCGameSession : public AGameSession {
    GENERATED_BODY()
public:
    ASCGameSession();
};

