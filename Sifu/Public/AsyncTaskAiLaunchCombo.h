#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCDelegate -FallbackName=SCDelegate
#include "AIComboLaunchParameters.h"
#include "AsyncTaskAiLaunchCombo.generated.h"

class UAIFightingComponent;
class UAsyncTaskAiLaunchCombo;
class UAIActionLaunchCombo;

UCLASS()
class SIFU_API UAsyncTaskAiLaunchCombo : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    USCDelegate::FDynamicMulticast OnFailure;
    
    UAsyncTaskAiLaunchCombo();
    UFUNCTION(BlueprintCallable)
    static UAsyncTaskAiLaunchCombo* BPF_AIAction_LaunchCombo(UAIFightingComponent* _aiComponent, TSubclassOf<UAIActionLaunchCombo> _actionClass, const FAIComboLaunchParameters& _parameters, UAIActionLaunchCombo*& _action);
    
};

