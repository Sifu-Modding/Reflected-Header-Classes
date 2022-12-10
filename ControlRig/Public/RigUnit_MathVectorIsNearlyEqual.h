#pragma once
#include "CoreMinimal.h"
#include "RigUnit_MathVectorBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_MathVectorIsNearlyEqual.generated.h"

USTRUCT()
struct FRigUnit_MathVectorIsNearlyEqual : public FRigUnit_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector A;
    
    UPROPERTY()
    FVector B;
    
    UPROPERTY()
    float Tolerance;
    
    UPROPERTY()
    bool Result;
    
    CONTROLRIG_API FRigUnit_MathVectorIsNearlyEqual();
};

