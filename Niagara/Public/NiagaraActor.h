#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "NiagaraActor.generated.h"

class UNiagaraComponent;

UCLASS(MinimalAPI)
class ANiagaraActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComponent;
    
    UPROPERTY()
    uint8 bDestroyOnSystemFinish: 1;
    
public:
    ANiagaraActor();
    UFUNCTION(BlueprintCallable)
    void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
    
private:
    UFUNCTION()
    void OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent);
    
};

