#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OrderStartingDynamicDelegateDelegate.h"
#include "OrderDelegateHandler.generated.h"

UCLASS(Blueprintable)
class SIFU_API UOrderDelegateHandler : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOrderStartingDynamicDelegate m_OnStarting;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOrderStartingDynamicDelegate m_OnStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOrderStartingDynamicDelegate m_OnEnding;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOrderStartingDynamicDelegate m_OnEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOrderStartingDynamicDelegate m_OnCanceled;
    
    UOrderDelegateHandler();

};

