#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "GizmoBaseVec2ParameterSource.h"
#include "GizmoVec2ParameterChange.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "GizmoPlaneScaleParameterSource.generated.h"

class UGizmoAxisSource;
class IGizmoAxisSource;
class UGizmoTransformSource;
class IGizmoTransformSource;

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<IGizmoAxisSource> AxisSource;
    
    UPROPERTY()
    TScriptInterface<IGizmoTransformSource> TransformSource;
    
    UPROPERTY()
    float ScaleMultiplier;
    
    UPROPERTY()
    FVector2D Parameter;
    
    UPROPERTY()
    FGizmoVec2ParameterChange LastChange;
    
    UPROPERTY()
    FVector CurScaleOrigin;
    
    UPROPERTY()
    FVector CurScaleNormal;
    
    UPROPERTY()
    FVector CurScaleAxisX;
    
    UPROPERTY()
    FVector CurScaleAxisY;
    
    UPROPERTY()
    FTransform InitialTransform;
    
    UGizmoPlaneScaleParameterSource();
};

