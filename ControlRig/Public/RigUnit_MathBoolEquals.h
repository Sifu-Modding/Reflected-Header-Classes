#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBoolBase.h"
#include "RigUnit_MathBoolEquals.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathBoolEquals : public FRigUnit_MathBoolBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Result;
    
    CONTROLRIG_API FRigUnit_MathBoolEquals();
};

