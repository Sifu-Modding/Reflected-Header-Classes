#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "TargetEvaluationSettings.h"
#include "TargettingHelper.generated.h"

UCLASS(Blueprintable)
class SIFU_API UTargettingHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTargettingHelper();
private:
    UFUNCTION(BlueprintCallable)
    FString GetEditorTitle(const FTargetEvaluationSettings& _settings);
    
    UFUNCTION(BlueprintCallable)
    FString GetEditorDesc(const FTargetEvaluationSettings& _settings);
    
};

