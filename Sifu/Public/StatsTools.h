#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EAttributeScales.h"
#include "StatsTools.generated.h"

UCLASS(Blueprintable)
class SIFU_API UStatsTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStatsTools();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EAttributeScales ConvertFloatToAttributeScale(float _fValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ConvertAttributeScaleToFloat(EAttributeScales _eAttributeScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText BPF_GetTextFromFloatAttributeScale(float _scale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText BPF_GetTextFromAttributeScale(EAttributeScales _eScale);
    
};

