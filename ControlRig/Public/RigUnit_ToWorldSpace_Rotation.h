#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit.h"
#include "RigUnit_ToWorldSpace_Rotation.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_ToWorldSpace_Rotation : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat World;
    
    CONTROLRIG_API FRigUnit_ToWorldSpace_Rotation();
};

