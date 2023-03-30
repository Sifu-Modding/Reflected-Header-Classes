#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit.h"
#include "RigUnit_ToRigSpace_Rotation.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_ToRigSpace_Rotation : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Global;
    
    CONTROLRIG_API FRigUnit_ToRigSpace_Rotation();
};

