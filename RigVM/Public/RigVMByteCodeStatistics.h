#pragma once
#include "CoreMinimal.h"
#include "RigVMByteCodeStatistics.generated.h"

USTRUCT(BlueprintType)
struct FRigVMByteCodeStatistics {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 InstructionCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DataBytes;
    
    RIGVM_API FRigVMByteCodeStatistics();
};

