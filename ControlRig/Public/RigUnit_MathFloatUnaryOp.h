#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBase.h"
#include "RigUnit_MathFloatUnaryOp.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathFloatUnaryOp : public FRigUnit_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    CONTROLRIG_API FRigUnit_MathFloatUnaryOp();
};

