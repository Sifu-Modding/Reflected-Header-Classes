#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
#include "BaseActorCondition.h"
#include "MovementModeCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API UMovementModeCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> m_eMovementMode;
    
    UMovementModeCondition();

};

