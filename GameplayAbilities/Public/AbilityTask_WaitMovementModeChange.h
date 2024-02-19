#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
#include "AbilityTask.h"
#include "MovementModeChangedDelegateDelegate.h"
#include "AbilityTask_WaitMovementModeChange.generated.h"

class ACharacter;
class UAbilityTask_WaitMovementModeChange;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitMovementModeChange : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementModeChangedDelegate OnChange;
    
    UAbilityTask_WaitMovementModeChange();

    UFUNCTION(BlueprintCallable)
    void OnMovementModeChange(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode);
    
};

