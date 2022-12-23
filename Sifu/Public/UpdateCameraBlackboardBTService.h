#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService_BlueprintBase -FallbackName=BTService_BlueprintBase
#include "EDirections.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BlackboardKeySelector -FallbackName=BlackboardKeySelector
#include "PlayerStatesStatus.h"
#include "EOrderType.h"
#include "EFightingActionState.h"
#include "UpdateCameraBlackboardBTService.generated.h"

class UCameraComponentThird;
class UPlayerFightingComponent;
class AFightingCharacter;
class UAttackComponent;
class UASMComponent;

UCLASS()
class SIFU_API UUpdateCameraBlackboardBTService : public UBTService_BlueprintBase {
    GENERATED_BODY()
public:
    UUpdateCameraBlackboardBTService();
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateIsInFlyModeKey(FBlackboardKeySelector _IsInFlyModeKey);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateIsInDialogKey(FBlackboardKeySelector _IsInDialogKey);
    
    UFUNCTION(BlueprintCallable)
    void BPF_UpdateIsDuckingKey(FBlackboardKeySelector _DuckingKey);
    
    UFUNCTION(BlueprintPure)
    FPlayerStatesStatus BPF_GetPlayerStateStatus(EFightingActionState _eFightingState) const;
    
    UFUNCTION(BlueprintPure)
    UPlayerFightingComponent* BPF_GetPlayerFightingComponent() const;
    
    UFUNCTION(BlueprintPure)
    AFightingCharacter* BPF_GetFightingCharOwner() const;
    
    UFUNCTION(BlueprintPure)
    EDirections BPF_GetCharacterSideOnScreen() const;
    
    UFUNCTION(BlueprintPure)
    UCameraComponentThird* BPF_GetCameraComponent() const;
    
    UFUNCTION(BlueprintPure)
    UAttackComponent* BPF_GetAttackComponent() const;
    
    UFUNCTION(BlueprintPure)
    UASMComponent* BPF_GetASMComponent() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnOrderStarting(EOrderType _eOrderType, uint8 _orderID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_OnOrderEnding(EOrderType _eOrderType, uint8 _orderID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ExitState(EFightingActionState _eStateEntered);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_EnterState(EFightingActionState _eStateEntered);
    
};

