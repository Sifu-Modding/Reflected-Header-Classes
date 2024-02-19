#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "WGAiAction.h"
#include "AIActionDropObject.generated.h"

UCLASS(Blueprintable)
class SIFU_API UAIActionDropObject : public UWGAiAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vDropImpulse;
    
    UAIActionDropObject();

    UFUNCTION(BlueprintCallable)
    void BPF_DropObjectInHand();
    
};

