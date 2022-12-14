#pragma once
#include "CoreMinimal.h"
#include "NCPoolElement.h"
#include "NCPool.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FNCPool {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FNCPoolElement> FreeElements;
    
    UPROPERTY(Instanced, Transient)
    TArray<UNiagaraComponent*> InUseComponents_Auto;
    
    UPROPERTY(Instanced, Transient)
    TArray<UNiagaraComponent*> InUseComponents_Manual;
    
    NIAGARA_API FNCPool();
};

