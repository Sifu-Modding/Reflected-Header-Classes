#pragma once
#include "CoreMinimal.h"
#include "SubmixEffectDynamicsProcessorSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSubmixPreset -FallbackName=SoundEffectSubmixPreset
#include "SubmixEffectDynamicsProcessorPreset.generated.h"

class USoundSubmix;

UCLASS(BlueprintType, EditInlineNew)
class AUDIOMIXER_API USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubmixEffectDynamicsProcessorSettings Settings;
    
    USubmixEffectDynamicsProcessorPreset();
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectDynamicsProcessorSettings& NewSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetExternalSubmix(USoundSubmix* Submix);
    
};

