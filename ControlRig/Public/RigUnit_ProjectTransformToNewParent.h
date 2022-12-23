#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigElementKey.h"
#include "RigUnit_ProjectTransformToNewParent.generated.h"

USTRUCT()
struct FRigUnit_ProjectTransformToNewParent : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey Child;
    
    UPROPERTY()
    bool bChildInitial;
    
    UPROPERTY()
    FRigElementKey OldParent;
    
    UPROPERTY()
    bool bOldParentInitial;
    
    UPROPERTY()
    FRigElementKey NewParent;
    
    UPROPERTY()
    bool bNewParentInitial;
    
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    FCachedRigElement CachedChild;
    
    UPROPERTY()
    FCachedRigElement CachedOldParent;
    
    UPROPERTY()
    FCachedRigElement CachedNewParent;
    
    CONTROLRIG_API FRigUnit_ProjectTransformToNewParent();
};

