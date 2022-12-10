#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystem -ObjectName=InAppPurchaseProductRequest -FallbackName=InAppPurchaseProductRequest
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InAppPurchaseResultDelegate.h"
#include "InAppPurchaseCallbackProxy.generated.h"

class APlayerController;
class UInAppPurchaseCallbackProxy;

UCLASS(BlueprintType, MinimalAPI)
class UInAppPurchaseCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInAppPurchaseResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FInAppPurchaseResult OnFailure;
    
    UInAppPurchaseCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(APlayerController* PlayerController, const FInAppPurchaseProductRequest& ProductRequest);
    
};

