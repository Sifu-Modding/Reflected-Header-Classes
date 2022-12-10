#pragma once
#include "CoreMinimal.h"
#include "OnReceivedTraceResultSignatureDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ReplayActorSelectorComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SIFU_API UReplayActorSelectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FOnReceivedTraceResultSignature m_OnReceiveTraceResult;
    
public:
    UReplayActorSelectorComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void BPF_RequestTrace();
    
};

