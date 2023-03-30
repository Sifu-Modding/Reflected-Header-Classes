#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCDialogManagerPlugin -ObjectName=DialogActionBase -FallbackName=DialogActionBase
#include "TriggerGenericEventDialogAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UTriggerGenericEventDialogAction : public UDialogActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_EventName;
    
    UTriggerGenericEventDialogAction();
};

