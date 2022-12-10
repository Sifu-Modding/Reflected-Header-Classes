#pragma once
#include "CoreMinimal.h"
#include "EPendingttackXPType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PendingAttackXP.h"
#include "FOpponentAttackXPHelper.generated.h"

UCLASS(BlueprintType)
class SIFU_API UFOpponentAttackXPHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFOpponentAttackXPHelper();
    UFUNCTION(BlueprintPure)
    static int32 BPF_GetXPValueByType(const FPendingAttackXP& _XP, EPendingttackXPType _eType);
    
};

