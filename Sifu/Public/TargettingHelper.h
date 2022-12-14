#pragma once
#include "CoreMinimal.h"
#include "TargetEvaluationSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "TargettingHelper.generated.h"

UCLASS()
class SIFU_API UTargettingHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTargettingHelper();
private:
    UFUNCTION()
    FString GetEditorTitle(const FTargetEvaluationSettings& _settings);
    
    UFUNCTION()
    FString GetEditorDesc(const FTargetEvaluationSettings& _settings);
    
};

