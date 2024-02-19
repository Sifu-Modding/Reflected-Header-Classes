#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=CheatData -FallbackName=CheatData
#include "HitDescription.h"
#include "LifestealFoesCheatData.generated.h"

class AFightingCharacter;

UCLASS(Blueprintable)
class SIFU_API ULifestealFoesCheatData : public UCheatData {
    GENERATED_BODY()
public:
    ULifestealFoesCheatData();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnPlayerHit(AFightingCharacter* _fightingCharHitted, const FHitDescription& _hitDescription);
    
};

