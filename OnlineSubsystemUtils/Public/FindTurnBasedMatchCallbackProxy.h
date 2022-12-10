#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "OnlineTurnBasedMatchResultDelegate.h"
#include "FindTurnBasedMatchCallbackProxy.generated.h"

class UFindTurnBasedMatchCallbackProxy;
class UTurnBasedMatchInterface;
class ITurnBasedMatchInterface;
class UObject;
class APlayerController;

UCLASS(MinimalAPI)
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnlineTurnBasedMatchResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FOnlineTurnBasedMatchResult OnFailure;
    
    UFindTurnBasedMatchCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(UObject* WorldContextObject, APlayerController* PlayerController, TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32 MinPlayers, int32 MaxPlayers, int32 PlayerGroup, bool ShowExistingMatches);
    
};

