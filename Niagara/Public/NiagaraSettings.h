#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETextureRenderTargetFormat -FallbackName=ETextureRenderTargetFormat
#include "ENiagaraGpuBufferFormat.h"
#include "NiagaraSettings.generated.h"

class UNiagaraEffectType;

UCLASS(Blueprintable, DefaultConfig, Config=Niagara)
class NIAGARA_API UNiagaraSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath DefaultEffectType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> QualityLevels;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FText> ComponentRendererWarningsPerClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextureRenderTargetFormat> DefaultRenderTargetFormat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraGpuBufferFormat DefaultGridFormat;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraEffectType* DefaultEffectTypePtr;
    
public:
    UNiagaraSettings();

};

