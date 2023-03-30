#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EControlRigRotationOrder.h"
#include "RigUnit_MathQuaternionBase.h"
#include "RigUnit_MathQuaternionToEuler.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathQuaternionToEuler : public FRigUnit_MathQuaternionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControlRigRotationOrder RotationOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Result;
    
    CONTROLRIG_API FRigUnit_MathQuaternionToEuler();
};

