#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=AnimContainer -FallbackName=AnimContainer
#include "SCGameplayAbility.h"
#include "ParryFromDownAbility.generated.h"

UCLASS(Blueprintable)
class SIFU_API UParryFromDownAbility : public USCGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLaunchDownRecovery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimContainer m_animRecoveryOverriden;
    
public:
    UParryFromDownAbility();
};

