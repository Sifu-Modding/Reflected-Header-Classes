#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigUnit.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigElementKey.h"
#include "EBoneGetterSetterMode.h"
#include "RigUnit_GetTransform.generated.h"

USTRUCT()
struct FRigUnit_GetTransform : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey Item;
    
    UPROPERTY()
    EBoneGetterSetterMode Space;
    
    UPROPERTY()
    bool bInitial;
    
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    FCachedRigElement CachedIndex;
    
    CONTROLRIG_API FRigUnit_GetTransform();
};

