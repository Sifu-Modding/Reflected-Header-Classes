#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "BPOrderServiceInstance.h"
#include "OrderService.h"
#include "Templates/SubclassOf.h"
#include "ParryToHitActionOrderService.generated.h"

class UBaseHitDetectionDB;
class UHitActionLauncher;

UCLASS(Blueprintable, EditInlineNew)
class SIFU_API UParryToHitActionOrderService : public UOrderService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHitActionLauncher> m_hitActionLauncher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBaseHitDetectionDB*> m_IgnoringHitDetectionDBs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_IgnoringGameplayTagContainer;
    
    UParryToHitActionOrderService();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnParryFailed(FBPOrderServiceInstance _description) const;
    
};

