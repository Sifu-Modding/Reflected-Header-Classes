#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SCDialogManagerPlugin -ObjectName=EOperationType -FallbackName=EOperationType
#include "BaseActorCondition.h"
#include "VelocityCondition.generated.h"

UCLASS()
class SIFU_API UVelocityCondition : public UBaseActorCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EOperationType m_eOperation;
    
    UPROPERTY(EditAnywhere)
    float m_fVelocity;
    
    UVelocityCondition();
};

