#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCDelegate -FallbackName=SCDelegate
#include "Templates/SubclassOf.h"
#include "AsyncTaskAiAction.generated.h"

class UAIFightingComponent;
class UAsyncTaskAiAction;
class USCAiAction;

UCLASS(Blueprintable)
class SIFU_API UAsyncTaskAiAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast OnFailure;
    
    UAsyncTaskAiAction();

    UFUNCTION(BlueprintCallable)
    static UAsyncTaskAiAction* BPF_ScheduleAIAction(UAIFightingComponent* _aiComponent, TSubclassOf<USCAiAction> _actionClass, USCAiAction* _action, USCAiAction*& _scheduledAction, bool _bCancelPendingActions);
    
};

