#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathBoolBase.h"
#include "RigUnit_MathBoolNotEquals.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_MathBoolNotEquals : public FRigUnit_MathBoolBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Result;
    
    CONTROLRIG_API FRigUnit_MathBoolNotEquals();
};

