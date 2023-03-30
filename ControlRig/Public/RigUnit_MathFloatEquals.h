#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathFloatBase.h"
#include "RigUnit_MathFloatEquals.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathFloatEquals : public FRigUnit_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Result;
    
    CONTROLRIG_API FRigUnit_MathFloatEquals();
};

