#pragma once
#include "CoreMinimal.h"
#include "RigVMByteCodeStatistics.h"
#include "RigVMMemoryStatistics.h"
#include "RigVMStatistics.generated.h"

USTRUCT(BlueprintType)
struct FRigVMStatistics {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 BytesForCDO;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 BytesPerInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMMemoryStatistics LiteralMemory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMMemoryStatistics WorkMemory;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 BytesForCaching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMByteCodeStatistics ByteCode;
    
    RIGVM_API FRigVMStatistics();
};

