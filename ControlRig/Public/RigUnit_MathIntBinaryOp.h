#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathIntBase.h"
#include "RigUnit_MathIntBinaryOp.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathIntBinaryOp : public FRigUnit_MathIntBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Result;
    
    CONTROLRIG_API FRigUnit_MathIntBinaryOp();
};

