#pragma once
#include "CoreMinimal.h"
#include "RigUnit_SetMultiControlBool_Entry.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SetMultiControlBool_Entry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BoolValue;
    
    CONTROLRIG_API FRigUnit_SetMultiControlBool_Entry();
};

