#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "CharacterProgressionUnlockDB.generated.h"

UCLASS(Blueprintable)
class SIFU_API UCharacterProgressionUnlockDB : public UDataAsset {
    GENERATED_BODY()
public:
    UCharacterProgressionUnlockDB();

};

