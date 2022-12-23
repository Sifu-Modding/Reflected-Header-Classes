#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SCVideoLightManager.generated.h"

class UTextureRenderTarget2D;
class UCanvas;
class UMaterialInstanceDynamic;
class UMediaTexture;
class UMaterialInterface;
class UMediaSource;
class ULocalLightComponent;
class UCurveLinearColor;

UCLASS(BlueprintType)
class SCCORE_API USCVideoLightManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UTextureRenderTarget2D*> m_RTChain;
    
    UPROPERTY()
    UMaterialInstanceDynamic* m_SamplerMaterialInstanceDynamic;
    
    UPROPERTY()
    UMaterialInterface* m_SamplerMaterialBase;
    
    UPROPERTY()
    UCanvas* m_CanvasTarget;
    
    USCVideoLightManager();
    UFUNCTION(BlueprintCallable)
    static void PreCache(UMediaTexture* MediaTex, UMediaSource* MediaSource, UMaterialInterface* SamplerMaterialBase);
    
    UFUNCTION(BlueprintCallable)
    static void BPF_ExportCurveFromLight(ULocalLightComponent* LightComponentToFind, UCurveLinearColor* curveToFill);
    
};

