#pragma once
#include "CoreMinimal.h"
#include "ETransformSpaceMode.h"
#include "EApplyTransformMode.h"
#include "RigUnitMutable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=TransformFilter -FallbackName=TransformFilter
#include "RigUnit_ApplyFK.generated.h"

USTRUCT()
struct FRigUnit_ApplyFK : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Joint;
    
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY(EditAnywhere)
    FTransformFilter Filter;
    
    UPROPERTY(EditAnywhere)
    EApplyTransformMode ApplyTransformMode;
    
    UPROPERTY(EditAnywhere)
    ETransformSpaceMode ApplyTransformSpace;
    
    UPROPERTY(EditAnywhere)
    FTransform BaseTransform;
    
    UPROPERTY(EditAnywhere)
    FName BaseJoint;
    
    CONTROLRIG_API FRigUnit_ApplyFK();
};

