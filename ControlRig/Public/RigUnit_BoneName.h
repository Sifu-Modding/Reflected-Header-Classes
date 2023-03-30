#pragma once
#include "CoreMinimal.h"
#include "RigUnit.h"
#include "RigUnit_BoneName.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_BoneName : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Bone;
    
    CONTROLRIG_API FRigUnit_BoneName();
};

