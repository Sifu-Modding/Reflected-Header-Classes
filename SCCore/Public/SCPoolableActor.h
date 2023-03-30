#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "SCPoolableActor.generated.h"

UINTERFACE(Blueprintable)
class SCCORE_API USCPoolableActor : public UInterface {
    GENERATED_BODY()
};

class SCCORE_API ISCPoolableActor : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPoolablePreUninitializeComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPoolablePreInitializeComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPoolablePostUninitializeComponents();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPoolablePostInitializeComponents();
    
};

