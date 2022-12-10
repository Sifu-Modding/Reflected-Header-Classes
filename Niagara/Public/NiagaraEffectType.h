#pragma once
#include "CoreMinimal.h"
#include "NiagaraEmitterScalabilitySettingsArray.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ENiagaraScalabilityUpdateFrequency.h"
#include "ENiagaraCullReaction.h"
#include "NiagaraSystemScalabilitySettings.h"
#include "NiagaraSystemScalabilitySettingsArray.h"
#include "NiagaraEffectType.generated.h"

class UNiagaraSignificanceHandler;

UCLASS()
class NIAGARA_API UNiagaraEffectType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ENiagaraScalabilityUpdateFrequency UpdateFrequency;
    
    UPROPERTY(EditAnywhere)
    ENiagaraCullReaction CullReaction;
    
    UPROPERTY(EditAnywhere, Instanced)
    UNiagaraSignificanceHandler* SignificanceHandler;
    
    UPROPERTY()
    TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;
    
    UPROPERTY(EditAnywhere)
    FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;
    
    UPROPERTY(EditAnywhere)
    FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;
    
    UNiagaraEffectType();
};

