#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OnlineLogoutResultDelegate.h"
#include "LogoutCallbackProxy.generated.h"

class UObject;
class APlayerController;
class ULogoutCallbackProxy;

UCLASS(MinimalAPI)
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnlineLogoutResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FOnlineLogoutResult OnFailure;
    
    ULogoutCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULogoutCallbackProxy* Logout(UObject* WorldContextObject, APlayerController* PlayerController);
    
};

