#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCDelegate -FallbackName=SCDelegate
#include "AIComboLaunchParameters.h"
#include "Templates/SubclassOf.h"
#include "AsyncTaskAiLaunchCombo.generated.h"

class UAIActionLaunchCombo;
class UAIFightingComponent;
class UAsyncTaskAiLaunchCombo;

UCLASS(Blueprintable)
class SIFU_API UAsyncTaskAiLaunchCombo : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FDynamicMulticast OnFailure;
    
    UAsyncTaskAiLaunchCombo();

    UFUNCTION(BlueprintCallable)
    static UAsyncTaskAiLaunchCombo* BPF_AIAction_LaunchCombo(UAIFightingComponent* _aiComponent, TSubclassOf<UAIActionLaunchCombo> _actionClass, const FAIComboLaunchParameters& _parameters, UAIActionLaunchCombo*& _action);
    
};

