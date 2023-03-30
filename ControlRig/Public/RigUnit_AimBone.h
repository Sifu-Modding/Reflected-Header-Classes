#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnit_AimBone_DebugSettings.h"
#include "RigUnit_AimBone_Target.h"
#include "RigUnit_HighlevelBaseMutable.h"
#include "RigUnit_AimBone.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_AimBone_Target Primary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_AimBone_Target Secondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPropagateToChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_AimBone_DebugSettings DebugSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedRigElement CachedBoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedRigElement PrimaryCachedSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedRigElement SecondaryCachedSpace;
    
    CONTROLRIG_API FRigUnit_AimBone();
};

