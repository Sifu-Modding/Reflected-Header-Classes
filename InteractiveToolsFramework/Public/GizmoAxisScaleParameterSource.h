#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GizmoFloatParameterChange.h"
#include "GizmoBaseFloatParameterSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "GizmoAxisScaleParameterSource.generated.h"

class UGizmoAxisSource;
class IGizmoAxisSource;
class UGizmoTransformSource;
class IGizmoTransformSource;

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<IGizmoAxisSource> AxisSource;
    
    UPROPERTY()
    TScriptInterface<IGizmoTransformSource> TransformSource;
    
    UPROPERTY()
    float ScaleMultiplier;
    
    UPROPERTY()
    float Parameter;
    
    UPROPERTY()
    FGizmoFloatParameterChange LastChange;
    
    UPROPERTY()
    FVector CurScaleAxis;
    
    UPROPERTY()
    FVector CurScaleOrigin;
    
    UPROPERTY()
    FTransform InitialTransform;
    
    UGizmoAxisScaleParameterSource();
};

