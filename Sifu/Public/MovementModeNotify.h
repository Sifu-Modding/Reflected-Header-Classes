#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
#include "SCAnimNotify.h"
#include "MovementModeNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SIFU_API UMovementModeNotify : public USCAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> m_eDesiredMode;
    
    UMovementModeNotify();
};

