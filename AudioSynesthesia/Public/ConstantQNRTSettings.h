#pragma once
#include "CoreMinimal.h"
#include "EConstantQNormalizationEnum.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAudioSpectrumType -FallbackName=EAudioSpectrumType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EFFTWindowType -FallbackName=EFFTWindowType
#include "AudioSynesthesiaNRTSettings.h"
#include "EConstantQFFTSizeEnum.h"
#include "ConstantQNRTSettings.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class AUDIOSYNESTHESIA_API UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartingFrequency;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumBands;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NumBandsPerOctave;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AnalysisPeriod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDownmixToMono;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    EConstantQFFTSizeEnum FFTSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    EFFTWindowType WindowType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    EAudioSpectrumType SpectrumType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float BandWidthStretch;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    EConstantQNormalizationEnum CQTNormalization;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float NoiseFloorDb;
    
    UConstantQNRTSettings();
};

