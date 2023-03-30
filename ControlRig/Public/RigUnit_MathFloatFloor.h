#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBase.h"
#include "RigUnit_MathFloatFloor.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathFloatFloor : public FRigUnit_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Int;
    
    CONTROLRIG_API FRigUnit_MathFloatFloor();
};

