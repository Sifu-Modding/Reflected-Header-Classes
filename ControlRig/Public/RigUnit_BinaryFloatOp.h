#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_BinaryFloatOp.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_BinaryFloatOp : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Argument0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Argument1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    CONTROLRIG_API FRigUnit_BinaryFloatOp();
};

