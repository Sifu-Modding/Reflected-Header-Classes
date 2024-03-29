#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "NetStructPickUpObject.h"
#include "GenericPickableActorInterface.generated.h"

class AFightingCharacter;

UINTERFACE(Blueprintable)
class SIFU_API UGenericPickableActorInterface : public UInterface {
    GENERATED_BODY()
};

class SIFU_API IGenericPickableActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPickedUp(const FNetStructPickUpObject& _pickupObjectOrderStruct, AFightingCharacter* _picker);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOrderPickupEnd(const FNetStructPickUpObject& _pickupObjectOrderStruct, AFightingCharacter* _picker);
    
};

