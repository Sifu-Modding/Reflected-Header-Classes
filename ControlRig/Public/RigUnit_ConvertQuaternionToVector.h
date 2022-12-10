#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_ConvertQuaternionToVector.generated.h"

USTRUCT()
struct FRigUnit_ConvertQuaternionToVector : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FQuat Input;
    
    UPROPERTY()
    FVector Result;
    
    CONTROLRIG_API FRigUnit_ConvertQuaternionToVector();
};

