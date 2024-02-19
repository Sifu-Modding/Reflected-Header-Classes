#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DelegateHolder.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable)
class SCCORE_API UDelegateHolder : public UObject {
    GENERATED_BODY()
public:
    UDelegateHolder();

    UFUNCTION(BlueprintCallable)
    void SytemCompleted(UParticleSystemComponent* Component);
    
};

