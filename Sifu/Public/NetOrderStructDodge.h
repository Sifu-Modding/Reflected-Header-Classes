#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EDodgeType.h"
#include "NetOrderStruct.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "NetOrderStructDodge.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FNetOrderStructDodge : public FNetOrderStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EDodgeType m_eDodgeType;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_vDirection;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_vOrientation;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> m_Target;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D m_vDirOnStick;
    
    UPROPERTY(BlueprintReadOnly)
    InputAction m_eInputAction;
    
    SIFU_API FNetOrderStructDodge();
};

