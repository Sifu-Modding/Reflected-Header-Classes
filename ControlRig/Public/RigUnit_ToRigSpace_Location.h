#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit.h"
#include "RigUnit_ToRigSpace_Location.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_ToRigSpace_Location : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Global;
    
    CONTROLRIG_API FRigUnit_ToRigSpace_Location();
};

