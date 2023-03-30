#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "AttackFramesNotifyState.generated.h"

class UAttackDB;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SIFU_API UAttackFramesNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAttackDB* m_DB;
    
    UAttackFramesNotifyState();
};

