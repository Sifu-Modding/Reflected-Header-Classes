#include "EndTurnCallbackProxy.h"

class UTurnBasedMatchInterface;
class ITurnBasedMatchInterface;
class UObject;
class APlayerController;
class UEndTurnCallbackProxy;

UEndTurnCallbackProxy* UEndTurnCallbackProxy::EndTurn(UObject* WorldContextObject, APlayerController* PlayerController, const FString& MatchID, TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface) {
    return NULL;
}

UEndTurnCallbackProxy::UEndTurnCallbackProxy() {
}

