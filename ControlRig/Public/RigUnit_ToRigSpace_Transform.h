#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit.h"
#include "RigUnit_ToRigSpace_Transform.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_ToRigSpace_Transform : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Global;
    
    CONTROLRIG_API FRigUnit_ToRigSpace_Transform();
};

