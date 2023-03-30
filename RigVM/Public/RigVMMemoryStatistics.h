#pragma once
#include "CoreMinimal.h"
#include "RigVMMemoryStatistics.generated.h"

USTRUCT(BlueprintType)
struct FRigVMMemoryStatistics {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 RegisterCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DataBytes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TotalBytes;
    
    RIGVM_API FRigVMMemoryStatistics();
};

