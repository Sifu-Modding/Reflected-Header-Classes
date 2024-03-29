#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "HittableActor.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class SIFU_API UHittableActor : public UInterface {
    GENERATED_BODY()
};

class SIFU_API IHittableActor : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeHitted(AActor* _Instigator);
    
};

