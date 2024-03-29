#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CameraTransitionEvent.generated.h"

class UCameraComponentThird;

UCLASS(Abstract, Blueprintable)
class SIFU_API UCameraTransitionEvent : public UObject {
    GENERATED_BODY()
public:
    UCameraTransitionEvent();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveLaunchEvent(UCameraComponentThird* _cameraComponent, float _fTimeElapsed, float _fBlendRatio) const;
    
};

