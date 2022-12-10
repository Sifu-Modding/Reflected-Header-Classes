#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "EBoneGetterSetterMode.h"
#include "RigElementKey.h"
#include "RigUnitMutable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_SetRotation.generated.h"

USTRUCT()
struct FRigUnit_SetRotation : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey Item;
    
    UPROPERTY()
    EBoneGetterSetterMode Space;
    
    UPROPERTY()
    FQuat Rotation;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    bool bPropagateToChildren;
    
    UPROPERTY()
    FCachedRigElement CachedIndex;
    
    CONTROLRIG_API FRigUnit_SetRotation();
};

