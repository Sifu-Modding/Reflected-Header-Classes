#pragma once
#include "CoreMinimal.h"
#include "SourceEffectDynamicsProcessorSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectDynamicsProcessorPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSourceEffectDynamicsProcessorSettings Settings;
    
    USourceEffectDynamicsProcessorPreset();
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectDynamicsProcessorSettings& InSettings);
    
};

