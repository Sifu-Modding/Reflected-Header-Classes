#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCDialogManagerPlugin -ObjectName=EOperationType -FallbackName=EOperationType
#include "BaseActorCondition.h"
#include "ESpeedState.h"
#include "SpeedCondition.generated.h"

UCLASS(Blueprintable)
class SIFU_API USpeedCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpeedState m_eSpeedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAcceptMoveTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOperationType m_eOperation;
    
    USpeedCondition();
};

