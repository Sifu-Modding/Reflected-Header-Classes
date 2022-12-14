#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "DatasmithLightComponentTemplate.generated.h"

class UTextureLightProfile;
class UMaterialInterface;

UCLASS()
class DATASMITHCONTENT_API UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bVisible: 1;
    
    UPROPERTY()
    uint8 CastShadows: 1;
    
    UPROPERTY()
    uint8 bUseTemperature: 1;
    
    UPROPERTY()
    uint8 bUseIESBrightness: 1;
    
    UPROPERTY()
    float Intensity;
    
    UPROPERTY()
    float Temperature;
    
    UPROPERTY()
    float IESBrightnessScale;
    
    UPROPERTY()
    FLinearColor LightColor;
    
    UPROPERTY()
    UMaterialInterface* LightFunctionMaterial;
    
    UPROPERTY()
    UTextureLightProfile* IESTexture;
    
    UDatasmithLightComponentTemplate();
};

