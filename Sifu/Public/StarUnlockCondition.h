#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "StarUnlockCondition.generated.h"

class AFightingCharacter;

UCLASS(Blueprintable)
class SIFU_API UStarUnlockCondition : public UObject {
    GENERATED_BODY()
public:
    UStarUnlockCondition();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPE_VerifyCondition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_BindCallbacks(AFightingCharacter* _FightingCharacter);
    
};

