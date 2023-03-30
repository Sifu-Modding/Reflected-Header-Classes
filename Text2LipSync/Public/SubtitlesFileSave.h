#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "LipSync_Pause.h"
#include "SubtitlesFileSave.generated.h"

UCLASS(Blueprintable)
class USubtitlesFileSave : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLipSync_Pause> Data;
    
    USubtitlesFileSave();
};

