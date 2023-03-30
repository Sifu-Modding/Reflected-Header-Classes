#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EVisibilityBasedAnimTickOption -FallbackName=EVisibilityBasedAnimTickOption
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=DynamicBlendSettings -FallbackName=DynamicBlendSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=ELookAtApplyMode -FallbackName=ELookAtApplyMode
//CROSS-MODULE INCLUDE V2: -ModuleName=SCCore -ObjectName=SCUserDefinedEnumHandler -FallbackName=SCUserDefinedEnumHandler
#include "EFightingActionState.h"
#include "ELookAtRefDirMode.h"
#include "EOrderType.h"
#include "OrderServiceInfosList.h"
#include "OrderDB.generated.h"

class UOrderComponent;

UCLASS(Blueprintable)
class SIFU_API UOrderDB : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOrderType m_eOrderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSCUserDefinedEnumHandler m_BlueprintID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFightingActionState m_ePushFightingStateOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPopFightingStateOnStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIsStunOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDelayHitsWhenStarting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVisibilityBasedAnimTickOption m_eVisibilityBasedAnimTickOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAnimgraphShouldAlwaysTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverrideLookAtApplyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELookAtApplyMode m_eOverridenLookAtApplyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverrideLookAtRefDirMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELookAtRefDirMode m_eOverridenLookAtRefDirMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicBlendSettings m_LocoToOrderBlendSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicBlendSettings m_OrderToOrderBlendSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicBlendSettings m_OrderToLocoBlendSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOrderToLocoUseSpeedStateSpeedForStartingSpeedBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOrderServiceInfosList m_OrderServices;
    
    UOrderDB();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnOrderStopped(uint8 _uiOrderId, UOrderComponent* _component) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnOrderStarted(uint8 _uiOrderId, UOrderComponent* _component) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_OnOrderCanceled(uint8 _uiOrderId, UOrderComponent* _component) const;
    
};

