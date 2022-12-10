#pragma once
#include "CoreMinimal.h"
#include "InputMappingData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "InputPresetsEnumHandler.h"
#include "InputMappingPresets.generated.h"

UCLASS()
class UInputMappingPresets : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FInputPresetsEnumHandler, FInputMappingData> m_Presets;
    
    UInputMappingPresets();
};

