#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SimBase.h"
#include "RigUnit_KalmanFloat.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_KalmanFloat : public FRigUnit_SimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BufferSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Buffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastInsertIndex;
    
    CONTROLRIG_API FRigUnit_KalmanFloat();
};

