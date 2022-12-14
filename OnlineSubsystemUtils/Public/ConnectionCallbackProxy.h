#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "OnlineConnectionResultDelegate.h"
#include "ConnectionCallbackProxy.generated.h"

class UObject;
class APlayerController;
class UConnectionCallbackProxy;

UCLASS(MinimalAPI)
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnlineConnectionResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FOnlineConnectionResult OnFailure;
    
    UConnectionCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UConnectionCallbackProxy* ConnectToService(UObject* WorldContextObject, APlayerController* PlayerController);
    
};

