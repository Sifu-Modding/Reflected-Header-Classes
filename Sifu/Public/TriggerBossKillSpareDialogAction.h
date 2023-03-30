#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCDialogManagerPlugin -ObjectName=DialogActionBase -FallbackName=DialogActionBase
#include "EBossKillingWay.h"
#include "TriggerBossKillSpareDialogAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UTriggerBossKillSpareDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBossKillingWay m_eBossKillingWay;
    
public:
    UTriggerBossKillSpareDialogAction();
};

