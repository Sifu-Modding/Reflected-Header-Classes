#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCDialogManagerPlugin -ObjectName=DialogActionBase -FallbackName=DialogActionBase
#include "TriggerAbandonDialogAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UTriggerAbandonDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UTriggerAbandonDialogAction();

};

