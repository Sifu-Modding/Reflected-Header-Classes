#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
#include "RigUnit_DeltaFromPreviousFloat.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_DeltaFromPreviousFloat : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cache;
    
    CONTROLRIG_API FRigUnit_DeltaFromPreviousFloat();
};

