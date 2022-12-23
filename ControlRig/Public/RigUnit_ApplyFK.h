#pragma once
#include "CoreMinimal.h"
#include "RigUnitMutable.h"
#include "ETransformSpaceMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=TransformFilter -FallbackName=TransformFilter
#include "EApplyTransformMode.h"
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

