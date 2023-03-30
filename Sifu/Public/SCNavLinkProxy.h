#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=NavLinkProxy -FallbackName=NavLinkProxy
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCDelegate -FallbackName=SCDelegate
#include "SCNavLinkProxy.generated.h"

class AActor;

UCLASS(Blueprintable)
class SIFU_API ASCNavLinkProxy : public ANavLinkProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USCDelegate::FMulticastDelegateActorDyn m_onActorLeftSmartLink;
    
public:
    ASCNavLinkProxy();
    UFUNCTION(BlueprintCallable)
    void SetNavLinksEnabled(bool _bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveSmartLinkLeft(AActor* Agent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllNavLinksEnabled() const;
    
};

