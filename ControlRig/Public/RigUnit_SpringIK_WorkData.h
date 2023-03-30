#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CRSimPointContainer.h"
#include "CachedRigElement.h"
#include "RigUnit_SpringIK_WorkData.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SpringIK_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCachedRigElement> BoneIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedRigElement CachedPoleVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> Transforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCRSimPointContainer Simulation;
    
    CONTROLRIG_API FRigUnit_SpringIK_WorkData();
};

