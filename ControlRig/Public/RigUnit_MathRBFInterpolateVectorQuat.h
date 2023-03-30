#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "MathRBFInterpolateVectorQuat_Target.h"
#include "RigUnit_MathRBFInterpolateVectorBase.h"
#include "RigUnit_MathRBFInterpolateVectorQuat.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathRBFInterpolateVectorQuat : public FRigUnit_MathRBFInterpolateVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMathRBFInterpolateVectorQuat_Target> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Output;
    
    CONTROLRIG_API FRigUnit_MathRBFInterpolateVectorQuat();
};

