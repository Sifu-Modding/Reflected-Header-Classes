#pragma once
#include "CoreMinimal.h"
#include "OnlineShowLoginUIResultDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "ShowLoginUICallbackProxy.generated.h"

class UObject;
class UShowLoginUICallbackProxy;
class APlayerController;

UCLASS(MinimalAPI)
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnlineShowLoginUIResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FOnlineShowLoginUIResult OnFailure;
    
    UShowLoginUICallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UShowLoginUICallbackProxy* ShowExternalLoginUI(UObject* WorldContextObject, APlayerController* InPlayerController);
    
};

