#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIDataProvider_QueryParams -FallbackName=AIDataProvider_QueryParams
#include "EWallJumpAttackParameter.h"
#include "AIDataProviderActionWallJumpAttack.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API UAIDataProviderActionWallJumpAttack : public UAIDataProvider_QueryParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWallJumpAttackParameter m_eParameter;
    
    UAIDataProviderActionWallJumpAttack();

};

