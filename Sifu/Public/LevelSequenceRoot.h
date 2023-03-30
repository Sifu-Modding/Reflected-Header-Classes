#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LevelSequenceRoot.generated.h"

UCLASS(Blueprintable)
class SIFU_API ALevelSequenceRoot : public AActor {
    GENERATED_BODY()
public:
    ALevelSequenceRoot();
};

