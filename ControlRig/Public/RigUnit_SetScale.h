#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "EBoneGetterSetterMode.h"
#include "RigElementKey.h"
#include "RigUnitMutable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_SetScale.generated.h"

USTRUCT()
struct FRigUnit_SetScale : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey Item;
    
    UPROPERTY()
    EBoneGetterSetterMode Space;
    
    UPROPERTY()
    FVector Scale;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    bool bPropagateToChildren;
    
    UPROPERTY()
    FCachedRigElement CachedIndex;
    
    CONTROLRIG_API FRigUnit_SetScale();
};

