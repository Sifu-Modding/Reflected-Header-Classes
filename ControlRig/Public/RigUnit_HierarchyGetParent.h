#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigUnit_HierarchyBase.h"
#include "RigUnit_HierarchyGetParent.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_HierarchyGetParent : public FRigUnit_HierarchyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Child;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedRigElement CachedChild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedRigElement CachedParent;
    
    CONTROLRIG_API FRigUnit_HierarchyGetParent();
};

