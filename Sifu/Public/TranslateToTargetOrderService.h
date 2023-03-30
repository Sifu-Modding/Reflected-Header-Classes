#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BPOrderServiceInstance.h"
#include "OrderService.h"
#include "TranslateToTargetOrderService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UTranslateToTargetOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseAnimRootMotion;
    
    UTranslateToTargetOrderService();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector BPE_GetTarget(const FBPOrderServiceInstance& _instance) const;
    
};

