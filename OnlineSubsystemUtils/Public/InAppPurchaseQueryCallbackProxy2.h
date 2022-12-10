#pragma once
#include "CoreMinimal.h"
#include "InAppPurchaseQuery2ResultDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InAppPurchaseQueryCallbackProxy2.generated.h"

class UInAppPurchaseQueryCallbackProxy2;
class APlayerController;

UCLASS(BlueprintType, MinimalAPI)
class UInAppPurchaseQueryCallbackProxy2 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInAppPurchaseQuery2Result OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FInAppPurchaseQuery2Result OnFailure;
    
    UInAppPurchaseQueryCallbackProxy2();
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(APlayerController* PlayerController, const TArray<FString>& ProductIdentifiers);
    
};

