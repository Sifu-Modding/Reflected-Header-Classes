#pragma once
#include "CoreMinimal.h"
#include "SCAnimNotify.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
#include "MovementModeNotify.generated.h"

UCLASS(CollapseCategories)
class SIFU_API UMovementModeNotify : public USCAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementMode> m_eDesiredMode;
    
    UMovementModeNotify();
};

