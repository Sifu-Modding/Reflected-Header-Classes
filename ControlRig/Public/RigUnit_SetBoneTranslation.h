#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "EBoneGetterSetterMode.h"
#include "RigUnitMutable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigUnit_SetBoneTranslation.generated.h"

USTRUCT()
struct FRigUnit_SetBoneTranslation : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Bone;
    
    UPROPERTY()
    FVector Translation;
    
    UPROPERTY()
    EBoneGetterSetterMode Space;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    bool bPropagateToChildren;
    
    UPROPERTY(Transient)
    FCachedRigElement CachedBone;
    
    CONTROLRIG_API FRigUnit_SetBoneTranslation();
};

