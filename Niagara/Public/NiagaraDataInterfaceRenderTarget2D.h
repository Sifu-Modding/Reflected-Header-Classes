#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceRWBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETextureRenderTargetFormat -FallbackName=ETextureRenderTargetFormat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "NiagaraUserParameterBinding.h"
#include "NiagaraDataInterfaceRenderTarget2D.generated.h"

class UTextureRenderTarget2D;

UCLASS(EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIntPoint Size;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideFormat: 1;
    
    UPROPERTY(EditAnywhere)
    FNiagaraUserParameterBinding RenderTargetUserParameter;
    
protected:
    UPROPERTY(Transient)
    TMap<uint64, UTextureRenderTarget2D*> ManagedRenderTargets;
    
public:
    UNiagaraDataInterfaceRenderTarget2D();
};

