#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ReplayGameplayCameraRecordEventDelegateDelegate.h"
#include "ReplayGameplayCameraRecordEventProxy.generated.h"

UCLASS(Blueprintable)
class UReplayGameplayCameraRecordEventProxy : public UObject {
    GENERATED_BODY()
public:
    UReplayGameplayCameraRecordEventProxy();
private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_worldContextObject"))
    static void BPF_DeserializeGameplayCameraEvent(const UObject* _worldContextObject, FReplayGameplayCameraRecordEventDelegate _callback);
    
};

