#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "NetOrderStructSnapAnim.h"
#include "HitBox.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EOrderType.h"
#include "NetOrderStructAttackEnv.generated.h"

class UBaseEnvironmentalInteractionComponent;

USTRUCT(BlueprintType)
struct FNetOrderStructAttackEnv : public FNetOrderStructSnapAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FTransform m_Snap;
    
    UPROPERTY(BlueprintReadOnly, Export)
    TWeakObjectPtr<UBaseEnvironmentalInteractionComponent> m_EnvironementalTakedownComponent;
    
    UPROPERTY(BlueprintReadOnly)
    EOrderType m_eTargetOrder;
    
    UPROPERTY(BlueprintReadOnly)
    FHitResult m_Impact;
    
    UPROPERTY(BlueprintReadOnly)
    FHitBox m_Hit;
    
    UPROPERTY(BlueprintReadOnly)
    FHitBox m_EnvHit;
    
    SIFU_API FNetOrderStructAttackEnv();
};

