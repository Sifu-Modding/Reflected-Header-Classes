#pragma once
#include "CoreMinimal.h"
#include "EAttackOrigin.h"
#include "EAttackTarget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EParrySide.h"
#include "EParryHeight.h"
#include "ParryMatch.generated.h"

UCLASS(Abstract, Blueprintable)
class SIFU_API UParryMatch : public UObject {
    GENERATED_BODY()
public:
    UParryMatch();
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_DoesParrySideMatch(EParrySide _eParrySide, EAttackTarget _eAttackTarget, EAttackOrigin _eAttackOrigin) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool BPE_DoesParryHeightMatch(EParryHeight _eParryHeight, EAttackTarget _eAttackTarget, EAttackOrigin _eAttackOrigin) const;
    
};

