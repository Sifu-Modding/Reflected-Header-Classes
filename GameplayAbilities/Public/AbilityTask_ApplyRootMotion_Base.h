#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERootMotionFinishVelocityMode -FallbackName=ERootMotionFinishVelocityMode
#include "AbilityTask_ApplyRootMotion_Base.generated.h"

class UCharacterMovementComponent;

UCLASS()
class GAMEPLAYABILITIES_API UAbilityTask_ApplyRootMotion_Base : public UAbilityTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated)
    FName ForceName;
    
    UPROPERTY(Replicated)
    ERootMotionFinishVelocityMode FinishVelocityMode;
    
    UPROPERTY(Replicated)
    FVector FinishSetVelocity;
    
    UPROPERTY(Replicated)
    float FinishClampVelocity;
    
    UPROPERTY(Instanced)
    UCharacterMovementComponent* MovementComponent;
    
public:
    UAbilityTask_ApplyRootMotion_Base();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

