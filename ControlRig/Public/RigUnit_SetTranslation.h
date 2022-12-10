#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "EBoneGetterSetterMode.h"
#include "RigElementKey.h"
#include "RigUnitMutable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_SetTranslation.generated.h"

USTRUCT()
struct FRigUnit_SetTranslation : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FRigElementKey Item;
    
    UPROPERTY()
    EBoneGetterSetterMode Space;
    
    UPROPERTY()
    FVector Translation;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    bool bPropagateToChildren;
    
    UPROPERTY()
    FCachedRigElement CachedIndex;
    
    CONTROLRIG_API FRigUnit_SetTranslation();
};

