#pragma once
#include "CoreMinimal.h"
#include "EDatasmithAreaLightActorShape.h"
#include "DatasmithObjectTemplate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ELightUnits -FallbackName=ELightUnits
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "EDatasmithAreaLightActorType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "DatasmithAreaLightActorTemplate.generated.h"

class UTextureLightProfile;

UCLASS()
class DATASMITHCONTENT_API UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    EDatasmithAreaLightActorType LightType;
    
    UPROPERTY()
    EDatasmithAreaLightActorShape LightShape;
    
    UPROPERTY()
    FVector2D Dimensions;
    
    UPROPERTY()
    FLinearColor Color;
    
    UPROPERTY()
    float Intensity;
    
    UPROPERTY()
    ELightUnits IntensityUnits;
    
    UPROPERTY()
    float Temperature;
    
    UPROPERTY()
    TSoftObjectPtr<UTextureLightProfile> IESTexture;
    
    UPROPERTY()
    bool bUseIESBrightness;
    
    UPROPERTY()
    float IESBrightnessScale;
    
    UPROPERTY()
    FRotator Rotation;
    
    UPROPERTY()
    float SourceRadius;
    
    UPROPERTY()
    float SourceLength;
    
    UPROPERTY()
    float AttenuationRadius;
    
    UDatasmithAreaLightActorTemplate();
};

