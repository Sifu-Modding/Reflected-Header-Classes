#pragma once
#include "CoreMinimal.h"
#include "EControlRigRotationOrder.h"
#include "RigUnit_MathBase.h"
#include "RigUnit_MathQuaternionRotationOrder.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathQuaternionRotationOrder : public FRigUnit_MathBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControlRigRotationOrder RotationOrder;
    
    CONTROLRIG_API FRigUnit_MathQuaternionRotationOrder();
};

