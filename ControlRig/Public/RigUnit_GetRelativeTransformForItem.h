#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigElementKey.h"
#include "RigUnit_GetRelativeTransformForItem.generated.h"

USTRUCT()
struct FRigUnit_GetRelativeTransformForItem : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey Child;
    
    UPROPERTY()
    bool bChildInitial;
    
    UPROPERTY()
    FRigElementKey Parent;
    
    UPROPERTY()
    bool bParentInitial;
    
    UPROPERTY()
    FTransform RelativeTransform;
    
    UPROPERTY()
    FCachedRigElement CachedChild;
    
    UPROPERTY()
    FCachedRigElement CachedParent;
    
    CONTROLRIG_API FRigUnit_GetRelativeTransformForItem();
};

