#pragma once
#include "CoreMinimal.h"
#include "SourceEffectFoldbackDistortionSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectFoldbackDistortionPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSourceEffectFoldbackDistortionSettings Settings;
    
    USourceEffectFoldbackDistortionPreset();
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectFoldbackDistortionSettings& InSettings);
    
};

