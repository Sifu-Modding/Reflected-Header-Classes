#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBase.h"
#include "RigUnit_MathFloatBinaryOp.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathFloatBinaryOp : public FRigUnit_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    CONTROLRIG_API FRigUnit_MathFloatBinaryOp();
};

