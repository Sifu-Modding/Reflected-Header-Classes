#pragma once
#include "CoreMinimal.h"
#include "RigUnit_PointSimulation_BoneTarget.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_PointSimulation_BoneTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TranslationPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrimaryAimPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecondaryAimPoint;
    
    CONTROLRIG_API FRigUnit_PointSimulation_BoneTarget();
};

